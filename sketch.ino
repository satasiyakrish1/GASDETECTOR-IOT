{
  "version": 1,
  "author": "644659124 Mr. Rachata Liabdee",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-breadboard-mini", "id": "bb1", "top": -385.4, "left": 7.2, "attrs": {} },
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 0, "left": 0, "attrs": {} },
    { "type": "wokwi-led", "id": "led1", "top": -349.2, "left": 3.8, "attrs": { "color": "red" } },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": -347.53,
      "left": 42.57,
      "attrs": { "color": "green" }
    },
    { "type": "wokwi-potentiometer", "id": "pot1", "top": 3.18, "left": -96.64, "attrs": {} },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": -303.25,
      "left": 86.4,
      "attrs": { "value": "220" }
    },
    { "type": "wokwi-lcd1602", "id": "lcd1", "top": -220.88, "left": -17.69, "attrs": {"background": "blue", "color": "white"} },
    {
      "type": "wokwi-buzzer",
      "id": "bz2",
      "top": -391.2,
      "left": 117,
      "attrs": { "volume": "0.5" }
    },
    {
      "type": "wokwi-led",
      "id": "led3",
      "top": -291.6,
      "left": 349.4,
      "attrs": { "color": "orange" }
    },
    {
      "type": "wokwi-relay-module",
      "id": "relay1",
      "top": -179.4,
      "left": 301.2,
      "rotate": 270,
      "attrs": {}
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": -168,
      "left": 383.45,
      "rotate": 90,
      "attrs": { "value": "220" }
    },
    {
      "type": "wokwi-led",
      "id": "led4",
      "top": -358.8,
      "left": 186.2,
      "attrs": { "color": "purple" }
    }
  ],
  "connections": [
    [ "pot1:VCC", "uno:5V", "red", [ "v135.21", "h214.7" ] ],
    [ "uno:A0", "pot1:SIG", "green", [ "v39.71", "h-272.7" ] ],
    [ "pot1:GND", "uno:GND.2", "black", [ "v145.41", "h244.2" ] ],
    [ "uno:5V", "lcd1:VDD", "red", [ "v15.39", "h-171.43", "v-283.25", "h33.02" ] ],
    [ "lcd1:RS", "uno:12", "green", [ "v74.75", "h93.91" ] ],
    [ "uno:GND.1", "lcd1:RW", "black", [ "v-15.09", "h-64.91" ] ],
    [ "uno:11", "lcd1:E", "green", [ "v-30.65", "h-83.91" ] ],
    [ "uno:10", "lcd1:D4", "green", [ "v-37.92", "h-45.41" ] ],
    [ "uno:9", "lcd1:D5", "green", [ "v-45.93", "h-45.41" ] ],
    [ "uno:8", "lcd1:D6", "green", [ "v-53.21", "h-45.91" ] ],
    [ "uno:7", "lcd1:D7", "green", [ "v-61.21", "h-52.41" ] ],
    [ "lcd1:RW", "lcd1:VSS", "black", [ "v22.33", "h-38.5" ] ],
    [ "lcd1:RW", "lcd1:K", "black", [ "v22.33", "h105.5" ] ],
    [ "lcd1:A", "lcd1:VDD", "red", [ "v13.44", "h-125" ] ],
    [ "bb1:8b.h", "bb1:1b.h", "black", [ "v0" ] ],
    [ "bb1:5b.g", "bb1:1b.g", "black", [ "v0" ] ],
    [ "bb1:14b.j", "uno:GND.1", "black", [ "v20.56", "h-176.66", "v189.54", "h148.16" ] ],
    [ "bb1:15b.j", "uno:2", "green", [ "v19.08", "h140.36", "v213.83", "h-57.46" ] ],
    [ "uno:3", "bb1:6b.j", "green", [ "v-35.77", "h79.55", "v-212.64", "h-239.35" ] ],
    [ "bb1:2b.j", "uno:4", "green", [ "h0.01", "v39.02", "h288.11", "v212.88", "h-99.42" ] ],
    [ "relay1:VCC", "uno:5V", "red", [ "v292.85", "h-195.2" ] ],
    [ "uno:GND.3", "relay1:GND", "black", [ "v25.59", "h201" ] ],
    [ "uno:5", "relay1:IN", "green", [ "v-15.26", "h166.6" ] ],
    [ "r2:1", "led3:C", "black", [ "v-47.7", "h-48.4" ] ],
    [ "r2:2", "relay1:GND", "black", [ "v46.91", "h-47.6" ] ],
    [ "led3:A", "relay1:NO", "blue", [ "v0" ] ],
    [ "relay1:VCC", "relay1:COM", "red", [ "h-27.44", "v-135.65", "h38.44" ] ],
    [ "bb1:8b.f", "led4:C", "black", [ "v10.52", "h114.8" ] ],
    [ "led4:A", "bb1:15b.g", "green", [ "v0" ] ],
    [ "led1:A", "bb1:2b.f", "", [ "$bb" ] ],
    [ "led1:C", "bb1:1b.f", "", [ "$bb" ] ],
    [ "led2:A", "bb1:6b.f", "", [ "$bb" ] ],
    [ "led2:C", "bb1:5b.f", "", [ "$bb" ] ],
    [ "r1:1", "bb1:8b.g", "", [ "$bb" ] ],
    [ "r1:2", "bb1:14b.g", "", [ "$bb" ] ],
    [ "bz2:1", "bb1:14b.f", "", [ "$bb" ] ],
    [ "bz2:2", "bb1:15b.f", "", [ "$bb" ] ]
  ],
  "dependencies": {}
}