from machine import Pin, ADC
import utime
analog_value = machine.ADC(26)
conversion_factor = 3.3 / (65535)
relay_pin = Pin(1, Pin.OUT)

while True:
    reading = analog_value.read_u16()     
    print("ADC: ",reading)
    voltageValue = reading* conversion_factor
    utime.sleep(0.05)
    
    if reading > 20000:
        relay_pin.value(1)
    
    else:
        relay_pin.value(0)
        