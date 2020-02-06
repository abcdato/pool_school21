#!/bin/sh
find . -name "*.sh" | rev | cut -d / -f 1 | rev | sed -e 's/[.]sh//g'