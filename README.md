![banner](https://user-images.githubusercontent.com/76027425/210289729-c2f96c32-3e2e-49c0-895b-11a7e0549a29.png)

### Aim and Objective
We aim to replace metallic keys by building a fully featured password enabled electronic security system prototype. One could attest to the fact that the metallic keys used to access mechanical door locks are very susceptible to getting lost, which would mean breaking the locks over and over again if there are more occurrences of such scenarios, moreover, such access keys can be duplicated by unauthorized users. Using an electronic door lock would counteract the damning consequences of such repugnant occurrences.


### Introduction
Security is a prime concern in our day-to-day life. Everyone wants to be as secure as possible. Our doors serve as entrances to our homes and offices. They may also provide access to strangers, criminals and offenders. An access control for doors forms a vital link in a security chain. This is the sole purpose of door locks. The standard type of doorknob is easy to manipulate and provides weak protection. This is the prime objective to move from conventional locks to digital locks. The objective of this project in its simplest terms is to replace metallic keys by building a fully featured password enabled electronic security system prototype. Below are steps taken to achieve this purpose:
- Review of similar works on electronic door access key was carried out.
- Determination/Selection of materials relevant to the project.
- Hardware and Software design.
- Construction/Packaging of the various components of the system.Testing of the final project to ascertain its authenticity.


### Scope of this project:
**Pick-proof:** Because there is no place for metallic keys with the electronic lock, it prevents break-ins because burglars are unable to pick or bump the lock. The methods used by criminals for breaking and entering are improving and the majority of criminals can pick an ordinary key lock.

**No more keys:** One wouldn’t have to carry around a large set of keys and they will be less likely to be lost or stolen.

**Control:** In a company building, one can control and restrict who goes into what part of the building. Additionally, residents and landlords of apartments and flats can control who can enter their room with one PIN code and it reduces the risk of anything getting stolen. It is incredibly easy to change the PIN code whenever you like.

**Perfect for the elderly or disabled:** The extra investment into a door lock could bring massive advantages to those who are unable to get to the door quickly and/or who struggle with key


### COMPONENTS REQUIRED:
#### LPC2148 Development board:
LPC2148 Pro Development Board is a powerful development platform based on LPC2148 ARM7TDMI microcontroller with 512K on-chip memory. This board is powered by USB port and does not need external power supply. It is ideal for developing embedded applications involving high speed wireless communication (Zigbee / Bluetooth / WiFi), USB based data logging, real time data monitoring and control, interactive control panels etc. The on-chip USB controller provides direct high speed interface to a PC/laptop with speeds up to 12Mb/s. The UART boot loader eliminates need of an additional programmer and allows you to program using serial port. The on board peripherals include SD/MMC card interface, USB2.0 interface, 4Kbit I2C EEPROM, Xbee / Bluetooth / WiFi wireless module interface, ULN2003 500mA current sinking driver, L293D DC motor controller, 16X2 character LCD and many more. The on-chip peripherals and the external hardware on the development board are interconnected using pin headers and jumpers. The I/O pins on the microcontroller can be accessed from a 50 pin male header. This direct access to I/O pins enables you to connect your own devices very easily to the processor. The board is made from double sided PTH PCB board to provide extra strength to the connector joints for increased reliability.

#### LCD Module:
LCD Module is used as a display in this project. It will take an input of the password and display if it is correct or not.

#### 4x3 Keypad:
A Matrix Keypad is a very useful module for embedded systems and a variety of projects. 4×4 and 4×3 keypads are commonly used matrix membrane keypads. 4×4 keypad has an additional column with A, B, C, D buttons, this is useful while additional switches are required for controls or functions like menu, navigation, Enter, Cancel, etc.a 4×3 is a 12-button keypad with 4 rows and 3 columns. The number of keypad buttons are Rn x Cn and number of pin connections is Rn + Cn; Rn – n number of rows, Cn – n number of columns. Hence 4×4 keypad has 8 pins and 4×3 has 7 pins.

#### Stepper Motor:
Stepper motors are DC motors that move in discrete steps. They have multiple coils that are organized in groups called "phases". By energizing each phase in sequence, the motor will rotate, one step at a time. With a computer controlled stepping you can achieve very precise positioning and/or speed control. For this reason, stepper motors are the motor of choice for many precision motion control applications. Stepper motors come in many different sizes and styles and electrical characteristics.

#### ULN2003A (Motor Driver):
ULN2003 is a 16 Pin IC, consisting of 7 Darlington pairs (each pair protected with suppression diode) and thus has the capability to handle a maximum of 7 loads(could be inductive). In simple words, we have 7 drivers in a single ULN2003 chip and thus can control a maximum of 7 loads. Each Darlington pair can handle a maximum 500mA load, while the peak value is 600mA. Similarly, the maximum output voltage of each Darlington pair is 50V. In the below figure, you can see ULN2003 has 16 Pins, where inputs and their respective outputs are placed in front of each other(for ease of circuit designing). Other than I/O Pins, we have Ground Pin where we need to provide 0V & Vcc (Common) Pin.


### SOFTWARE REQUIRED:
#### Keil µVision:
The µVision IDE combines project management, run-time environment, build facilities, source code editing, and program debugging in a single powerful environment. µVision is easy-to-use and accelerates your embedded software development. µVision supports multiple screens and allows you to create individual window layouts anywhere on the visual surface.

#### Proteus:
Proteus is an electronic circuit design and simulation tool. The Labcenter electronic developed it. Proteus can also be used to design two-dimensional circuits. Using this engineering program, you may create and simulate electrical and electronic circuits on your  HYPERLINK "https://www.technologitouch.com/buying-guides/best-laptop-for-virtualization/" laptop or desktop  HYPERLINK "https://www.technologitouch.com/buying-guides/best-personal-computer-for-data-science/" computer. Proteus simulations have various advantages over making circuits in the real world.


### BLOCK DIAGRAM:
![image-009](https://user-images.githubusercontent.com/76027425/210290441-8cfd297e-64bf-4ce7-8afa-6b0c0d8d2c8b.jpg)
From the above block diagram, we can infer that the power supply is connected to the Keypad, LPC2148, LCD Display and the Motor. From the microcontroller, we have two connections going to the Motor and Buzzer. The keypad is used to give the input to the LPC2148 and LCD Display is to give output from the Microcontroler.


### CIRCUIT DIAGRAM:
![image-010](https://user-images.githubusercontent.com/76027425/210290464-c7146d8b-366d-4b5e-ae88-a90a9d23e450.jpg)


### WORKING PRINCIPLES:
#### LCD:
- RS – P0.2
- RW – GND
- EN – P0.3
- Data lines – P0.4 to P0.7 (4 Bit Mode) 

#### DC Motor (Motor Driver):
- Input 1 – Port 0.16
- Input 2 – Port 0.17
- Enable 1 – P0.18

#### Keypad
- R1 – P1.16
- R2 – P1.17
- R3 – P1.18
- R4 – P1.19
- C1 – P1.20
- C2 – P1.21
- C3 – P1.22

#### DC Motor Interfacing:
- Input 1 – Port 0.0
- Input 2 – Port 0.1
- Enable 1 – Directly giving 5v


