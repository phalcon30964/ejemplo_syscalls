#!/bin/bash
cc $1.c -o $1.o
./$1.o
echo '$1 compilado'

