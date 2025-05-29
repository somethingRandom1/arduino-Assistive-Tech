import serial
import pyautogui as pg



pg.FAILSAFE=False


ser = serial.Serial("COM4",9600)
while True:
    read = ser.readline().decode('ascii')
    readArray = read.split()
    w = readArray[0]
    a = readArray[1]
    s = readArray[2]
    d = readArray[3]
    print(w, ' ', a,' ',s,' ',d)
    if w=='w':
     pg.press("w")
    if w=='a':
      pg.press("a")
    if w=='s':
        pg.press("s")
    if w=='d':    
      pg.press("d")
