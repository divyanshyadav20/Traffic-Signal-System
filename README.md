# Traffic Signal System

## This project is an Atmega16 microcontroller based Traffic Signal System in which I have used 8 LEDs and 2 7SEGMENTS to denote the signals of a traffic light.

### Software Used:

**1) Proteus 7 Professional**

Proteus is a software for microprocessor simulation, schematic capture, and printed circuit board (PCB) design. The Proteus Professional demonstration is intended for prospective customers who wish to evaluate professional level products.


<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/74250682/101166093-bdda7080-365d-11eb-9d98-7c10326d3b53.png">
</p>


**2) CodeVision AVR (CV AVR)**

CodeVision AVR is an Integrated Development Environment (IDE) for the Atmel AVR series of microcontrollers. It is a C cross-compiler and Automatic Program Generator designed for the Atmel AVR family of microcontrollers.

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/74250682/101167439-e2cfe300-365f-11eb-90d6-2fd6515124ce.jpg">
</p>

### Components Used:

**1) Atmega16 Microcontroller**

ATmega16 is an 8-bit high performance microcontroller from the Atmel's Mega AVR family. Atmega16 is a 40 pin microcontroller based on enhanced RISC (Reduced Instruction Set Computing) architecture with 131 powerful instructions. It has a 16 KB programmable flash memory, static RAM of 1 KB and EEPROM of 512 Bytes.

<p align="center"> <img width="300" src="https://user-images.githubusercontent.com/74250682/101168052-e021bd80-3660-11eb-90d2-b16ab98a56ba.png"> <img width="300" src="https://user-images.githubusercontent.com/74250682/101168841-0ac04600-3662-11eb-8f97-f75ffb000072.jpg"> </p> 

**2) LEDs**

A light-emitting diode (LED) is a semiconductor device that emits light when an electric current is passed through it. Light is produced when the particles that carry the current (known as electrons and holes) combine within the semiconductor material. In this project, I have used 8 LEDs in which four are RED, and four are of GREEN color, depicting the "STOP" and "GO" of Traffic Signals.

<p align="center"> <img width="300" src="https://user-images.githubusercontent.com/74250682/101169615-37289200-3663-11eb-98df-3569b8f46a43.jpg"> </p>

**3) 7 SEGMENT Display**

The 7-segment display, also written as “seven segment display”, consists of seven LEDs (hence its name) arranged in a rectangular fashion. Each of the seven LEDs is called a segment because, when illuminated, the segment forms part of a numerical digit (both Decimal and Hex) to be displayed. For delineating the real life Traffic Signal's timer in my project, I have used two 7SEGs which display an interval of 30 seconds between each consecutive RED and GREEN signals.

<p align="center"> <img width="300" src="https://user-images.githubusercontent.com/74250682/101170460-7efbe900-3664-11eb-8ffa-67c04f70a468.jpg"> <img height="300" src="https://user-images.githubusercontent.com/74250682/101170628-bd91a380-3664-11eb-8089-b5755d87e4d4.png"> </p>

### Circuit Diagram and Working of the Project:

* Three input/output ports of the Atmega16 microcontroller are used for the development of this project, in which all the 8 LEDs are connected to PORT A while PORT C and D, are connected to two different 7 SEGMENT displays. 
* The code is written in Embedded C, with the help of IDE-CV AVR. The HEX file generated after building up the code is uploaded to the Atmega16 controller.
* All the 24 input/output pins are given high logic in the beginning and, then LEDs and 7SEGs are lit up in sequential order, imitating the actual Traffic Signal. A 5V VCC supply is used, which acts as a power source to the circuit.  

<p align="center"> <img height="460" src="https://user-images.githubusercontent.com/74250682/101172677-7d7ff000-3667-11eb-83a8-d9bc85728b4b.png"> </p>

### Simulation of the Project:

<p align="center"> <img height="460" src="https://user-images.githubusercontent.com/74250682/101174836-65f63680-366a-11eb-877a-cff3dfdf76b0.png"> </p>
