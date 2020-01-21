QMK Firmware build environment
==============================

- Original [readme.md](readme.md) regarding QMK firmware only.

- This [README](README.rst) is about building flashing firmware on [Corne Keyboard, by foostan](https://github.com/foostan/crkbd)

****

for Corne-choc, split keyboard
------------------------------

see rules file for general keyboard config, ``./keyboards/crkbd/rules.mk``
and keymap layout file, ``keyboards/crkbd/keymaps/default/keymap.c``

to build firmware and output to file (crkbd_rev1_default.hex) ::
   ``make crkbd/rev1:default``
or flash right side (no / qmk bootloader) ::
   ``make crkbd/rev1:default:dfu-split-right``
or flash with avrdude (caterina bootloaders) ::
   ``make crkbd/rev1:default:avrdude``
or flash with avrdude, left/right side ::
   ``make crkbd/rev1:default:avrdude-split-left``
   ``make crkbd/rev1:default:avrdude-split-right``


****


Troubleshooting:
----------------

Errors during make build firmware:

if you get errors like, ::

    QMK Firmware 0.7.115
    Making crkbd/rev1 with keymap default

    tmk_core/protocol/lufa.mk:14: lib/lufa/LUFA/makefile: No such file or directory
    make[1]: *** No rule to make target 'lib/lufa/LUFA/makefile'.  Stop.
    Make finished with errors
    make: *** [Makefile:579: crkbd/rev1:default] Error 1

then try updating workspace's submodules with the following, ::

    git fetch --all
    git submodule update


in the event you don't have the requisite tools, try running the installer ::

    ./util/linux_install.sh
    ./util/qmk_install.sh

or, try building inside a Docker container ::
    ./util/docker_build.sh


****

good luck!
~~~~~~~~~~

