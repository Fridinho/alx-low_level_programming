#!/bin/bash
wget -O /tmp/win.so https://github.com/Fridinho/alx-low_level_programming/raw/master/0x18.C-Dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
