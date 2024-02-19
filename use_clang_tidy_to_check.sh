#!/bin/bash

# get target file
files=$(find src -name '*.cpp' -o -name '*.c')

# check target file
for file in $files; do
    clang-tidy "$file" -- -std=c++11
done
