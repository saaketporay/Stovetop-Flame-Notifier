
import os
import serial
from time import sleep
ser = serial.Serial('/dev/ttyACM0',9600)
#counter = 32
flame = False
newflame = False

while True:
    #counter +=1
    value = ser.readline()
    print(value)
    try:
        if int(value) > 400:
            newflame = True
        else:
            newflame = False
        if newflame != flame:
            flame = newflame
            if newflame == True:
                print 'Flame detected'
                os.system('bash /usr/bin/notify.sh "Flame Detected"')
            else:
                print 'No Flame'
                os.system('bash /usr/bin/notify.sh "No Flame Detected"')
                

            
    except Exception as e:
        print('No value detected.')

        
        

        

