# Stovetop-Flame-Notifier
## Inspiration
Often, while backing out of our driveway, my parents say "Is the stove off?" They start worrying and it causes them to go back and check, resulting in wasted time. Fires can occur due to unattended stove tops and that's why they should always be turned off when not be attended. I came up with this idea to keep from going back to check and wasting time.

## What it does
Whenever flame is detected, it sends a notification to your phone saying that flame is detected. When flame is not detected, it sends a notification saying no flame is detected.

## How I built it
I used a sensor that detects flame, a Raspberry Pi and an Arduino. I hooked up a flame sensor to the Arduino and coded a program in C++ which takes the output. Using serial USB connection from the Arduino to the Raspberry Pi, I sent the data to the Raspberry Pi. A program coded in Python then takes the value and makes the decision if it detects flame. If it detects flame, it starts a program which sends a message to my phone using the Pushbullet API. If the flame goes off, it sends another message saying there is no flame.

## Challenges I ran into
Realized that the flame sensor was analog and not digital. Since the Raspberry Pi has no analog output/input pins, I was faced with the challenge of finding a way to connect the sensor. After a while, I got an idea of using the Arduino since it has analog pins. I devised a way to take data of the Arduino and I succeeded.

## What's next for Stove-top Flame Detector 
A well built app with a database of users so several users can use the product. The app will show the currently status of the Stove-top Flame Detector.
