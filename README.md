# DiaGo
An application developed for the Nasa Space Apps. Aiming to provide a easy way to track diseases contamination, comes up DiaGo.

## General Objective
Our objective is to use the temperature sensor in the entrance of the cities, this way, is possible to track the dissemination of viruses and disseases.
To do that, the arduino is used to enable the automatic fill of the temperature in the app, that connects to our database and track people with syntoms and possible disseases. Using this database coneected with Nasa World Wind API, is possible to see the data in a globe, with visual graphs, and create public polities to contain future pandemics.

## Prototype 
##### List of components 
- Arduino UnoR3
- LM35 (In future uptade, will be changed to MLX90614, an infrared temperature sensor)
- PushButton
- LCD 16x2

##### Hardware
The arduino waits untill the pushbutton is pressed to show the temperature measured. After that, the user use this data to fill the form in the app.

##### Android APP
With a simple form (Name, ID, City and Temperature) we track the possibles disease vectors. With the possibility to automatically update the information to our database, or when without internet connection, save the data in an offline file, with the possibility to manually upload the information later.

##### DataBase
Our prototype database is stored in a spreadsheet in googledocs. 

##### Viewing of the data
In the spreadsheet used to store the data, is possible to se the symptomatic cases, and see the city he is now.
