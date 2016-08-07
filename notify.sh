#!/bin/bash

TOKEN="Your TOKEN here"
TITLE="$1"
BODY="$2"
curl -u $TOKEN: https://api.pushbullet.com/v2/pushes -d type=note -d title="$TITLE" -d body="$BODY"
