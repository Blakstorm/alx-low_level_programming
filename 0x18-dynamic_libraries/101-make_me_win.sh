#!/bin/bash
wget -p https://github.com/Blakstorm/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
