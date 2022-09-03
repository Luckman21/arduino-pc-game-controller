# arduino-pc-game-controller

FOR THE FULL GUIDE, READ HERE: https://docs.google.com/document/d/e/2PACX-1vS4tQsV7d68_JXrzq6LRv0JiMXEfjN_M6CiuN02dkHWssHhNzatKMchwf-RTp-QZNkpxQyQSFNk1f4B/pub

The FF7 Battle Macro Controller is a unique controller designed to simplify game inputs in the game Final Fantasy VII.  
It uses three different kinds of input: physical touch, sound and light intensity.  
This allows us to have four different commands, one mapped to the physical switch, one to the microphone and two on the photoresistor.

I used a variety of coding techniques.  Internal function calls for the macros made the code more efficient.  
This allowed me to reuse lines or methods without having to type or paste the same lines in another part of the code.  
By using the Arduino Leonardo and the Keyboard library, I was able to emulate keyboard key inputs using the controller.  
From here I assigned sequences of these keyboard inputs to buttons on my controller to design the macros.

Overall, the controller functions as intended.  It provides simple and basic input for a series of inputs.  
The choices are limited at times in specific battles, 
but can be overcome with good strategy and proper preparation of equipment and party members before a battle.  
The LED system is intuitive and visually appealing.  
A lot of gaming devices now include some form of LEDs to improve the visual quality and aesthetics of the device, 
but my controller combines this with actual functionality.  
It lights up an LED to its corresponding macro, so you know which command was input.

In the future, this controller could be expanded and customized to specific disabled individuals to accommodate all their specific needs.  
By using the controllers more unique inputs, they can play the games they’ve always wanted to without worrying about touching the controller at all. 

Index Terms

FF7 - Final Fantasy VII
Macro - A sequence of precise inputs that is mapped to an output
Photoresistor - A light sensitive sensor that can detect light intensity
Party Member - An in game character that is part of your team
Attack - The character’s melee move used in game
Magic - A spell that can be cast.  The spells can either be offensive or defensive
Command - A special order that can be given to a party member
Summon - An ally creature that can be called to aid in battle
Item - Objects that can be used in game for a variety of purposes, like healing a party member or inflicting damage on an opponent
LIMIT Gauge - Each character’s special attack.  The LIMIT meter in games is built up by damage caused overtime.  Once the gauge is full, the character can perform their “LIMIT Break”, an all out final attack move
TIME Gauge - The meter that counts down the next time you can order a command to its respective character
HP - Health Points.  These determine the health of a character.  If all the character’s health reaches 0, the game is over
MP - Magic / Mana Points.  These can be used to cast spells.  Each spell has a different cost associated with it, depending on the strength of the magic, summon or command and what it does
Materia - Spherical items in game that can be equipped by any party member.  Each Materia is coloured based on its type.  There are 5 kinds of Materia: Yellow (Command), Blue (Support), Green (Magic), Red (Summon) and Purple (Independent).  Yellow Materia assigns a unique command to the party member.  Blue Materia can be paired with Green, Red and Yellow Materia for bonus skills or added effects.  Green Materia allows you to use magic spells.  Red allows you to call upon a Summon.  Purple is independent, which adds special abilities or boosts character stats.


https://na.finalfantasy.com/copyrights 
FINAL FANTASY VII
©1997, 1998, 2015, 2016 SQUARE ENIX CO., LTD. All Rights Reserved.
CHARACTER DESIGN: TETSUYA NOMURA
LOGO & IMAGE ILLUSTRATION: ©1997 YOSHITAKA AMANO

FINAL FANTASY VII REMAKE
©1997, 2019 SQUARE ENIX CO., LTD. All Rights Reserved.
CHARACTER DESIGN: TETSUYA NOMURA / ROBERTO FERRARI
LOGO ILLUSTRATION: ©1997 YOSHITAKA AMANO

FINAL FANTASY VII ADVENT CHILDREN
©2005, 2009 SQUARE ENIX CO., LTD. All Rights Reserved.
CHARACTER DESIGN: TETSUYA NOMURA

DIRGE of CERBERUS -FINAL FANTASY VII-
©2006 SQUARE ENIX CO., LTD. All Rights Reserved.
CHARACTER DESIGN: TETSUYA NOMURA

CRISIS CORE –FINAL FANTASY VII–
©2007 SQUARE ENIX CO., LTD. All Rights Reserved.
CHARACTER DESIGN: TETSUYA NOMURA

FINAL FANTASY VII THE FIRST SOLDIER
© 1997, 2021 SQUARE ENIX CO., LTD. All Rights Reserved.
Powered by Ateam Inc.
CHARACTER DESIGN: TETSUYA NOMURA

FINAL FANTASY VII EVER CRISIS
© 1997, 2021 SQUARE ENIX CO., LTD. All Rights Reserved.
Powered by Applibot, Inc.
CHARACTER DESIGN: TETSUYA NOMURA
CHARACTER ILLUSTRATION: LISA FUJISE
