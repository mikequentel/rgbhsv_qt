#!/bin/bash
FILENAME=$1
UI_HEADER="${FILENAME%%.*}.h"
uic $FILENAME -o $UI_HEADER
