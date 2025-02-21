#include "daisy_seed.h"
#include "daisy_core.h"
#include "daisy_patch_sm.h"
#include "daisysp.h"
#include "daisy_seed.h"

using namespace daisy;
using namespace daisysp;
using namespace patch_sm;


DaisySeed	 hw;
DaisyPatchSM patch;
Oscillator 	 osc;

void AudioCallback(AudioHandle::InputBuffer  in,
		AudioHandle::OutputBuffer out,
		size_t                    size)
{
	osc.SetFreq(440);

	/** Process each sample of the oscillator and send to the hardware outputs */
	for(size_t i = 0; i < size; i++)
	{
		float sig = osc.Process();
		OUT_L[i]  = sig;
		OUT_R[i]  = sig;

	}
}

int main(void) {

	// Initialize the Daisy Seed Hardware
	hw.Init();

	// Enable Logging, and set up the USB connection.
	// hw.StartLog(true);

	patch.Init();

	osc.Init(patch.AudioSampleRate());
	osc.SetWaveform(Oscillator::WAVE_POLYBLEP_SAW);
	patch.StartAudio(AudioCallback);

	while(1)
	{

		// hw.PrintLine("Hello World!");
		// System::Delay(1000);
	}
}
