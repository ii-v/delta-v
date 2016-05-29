# delta-v
`delta-v` is a program to calculate [Delta-V](https://en.wikipedia.org/wiki/Delta-v) (*ΔV*). Made specifically for [Kerbal Space Program](https://en.wikipedia.org/wiki/Kerbal_Space_Program), but may be used for other purposes.

It is currently under heavy development and many things will change in the near future. Feel free to give some tips or ideas!

## compiling
To run the program, do the following:

  `git clone https://github.com/ii-v/delta-v.git
  
  cd delta-v
  
  make`
  
  Run the program with `./delta-v`
  
  Optional: Install the program with `sudo make install` and uninstall with `sudo make uninstall`

If this for some reason doesn't work for you, compile manually with `gcc -o delta-v delta-v.c -lm` and run with `./delta-v`
The program has only been tested on Ubuntu 16.04, but should work on other systems.

## usage
When compiled, the program is very simple to use. Just run it, and answer the prompts. The current prompts are as follows:

  1. `Write the total mass of the vehicle: `
  2. `Write the mass of the vehicle without fuel: `
  3. `Write the vehicle's engines specific impulse in seconds: `

If you are unsure what any of those mean, please consult Wikipedia or the KSP Wiki.

## license
`delta-v` is made public under the zlib/libpng License, the full license can be read at https://opensource.org/licenses/Zlib or in the `LICENSE.md` file in this directory.
