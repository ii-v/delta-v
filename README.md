# delta-v
`delta-v` is a program to calculate [Delta-V](https://en.wikipedia.org/wiki/Delta-v) (*ΔV*). Made specifically for [Kerbal Space Program](https://en.wikipedia.org/wiki/Kerbal_Space_Program), but may be used for other purposes.

To use the program do the following:

  1. `git clone https://github.com/ii-v/delta-v.git`
  2. `cd delta-v`
  3. `make`
  4. Run the program with `./delta-v`
  5. Optional: Install the program with `make install` and uninstall with `make uninstall`

If this for some reason doesn't work for you, compile manually with `gcc -o delta-v delta-v.c -lm` and run with `./delta-v`
The program has only been tested on Ubuntu 16.04, but should work on other systems.
