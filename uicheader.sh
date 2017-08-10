#!/bin/bash
FILENAME=$1
UI_HEADER="ui_${FILENAME%%.*}.h"
uic $FILENAME -o $UI_HEADER
