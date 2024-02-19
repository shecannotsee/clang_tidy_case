#!/bin/bash

# get target file
files=$(find src -name '*.cpp' -o -name '*.c')

# check target file
clang-tidy $files -- -std=c++11
