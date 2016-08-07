#!/bin/bash

TOKEN="o.4j4VmTh9uEqJbcVfwNzXK2aKyM4B1BC3"
TITLE="$1"
BODY="$2"
curl -u $TOKEN: https://api.pushbullet.com/v2/pushes -d type=note -d title="$TITLE" -d body="$BODY"
