# Daisy experiments


## Pre-reqs


Clone this repo parallel to the daisy examples repo.
instruction on how to install that are [here](https://github.com/electro-smith/DaisyWiki/wiki/1.-Setting-Up-Your-Development-Environment)


### installing the arm-compiler
TBA



## Dev setup

Source the `source setup_env.sh` file


### Pre-reqs
> ❗ NOTE: This repo should be cloned parallel to the DaisyExamples it is recommended to install it first before cloning this repo.

Create a directory to clone both the repositories into.

```
mkdir daisy_projects
cd daisy_projects
```
Clone the repos.

```
git clone git@github.com:JopjeKnopje/daisy-code-experiments.git
git clone --recursive https://github.com/electro-smith/DaisyExamples
```
Create a directory to store the arm-toolchain

```
mkdir ~/Install_Files
```
Follow the install instructions for the DaisyToolchain.

> ❗ NOTE: When installing the ARM Toolchain they will tell you to add a path to `GCC_PATH` and in `~/.bashrc`. Instead of that you could source the setup_env.sh script instead.

Follow the remaining installation steps of the [DaisyExamples](https://github.com/electro-smith/DaisyExamples) repo and try to build some examples.
