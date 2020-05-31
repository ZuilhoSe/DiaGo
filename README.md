# DiaGo
DiaGO is an app developed for NASA Space Apps, aiming to provide an easy to track the spread of diseases worldwide.

## General Objective
Our goal is to use an infrared sensor to evaluate the temperature of individuals in key points of transmission, in order to track the origins and spread patterns of diseases according to demographic density and monitoring systems. To execute this, Arduino enables the automatic measurement of temperature in the app, connecting the information collected to a database that supervises the possibly infected citizens. When this database is connected to NASA World Wind API, it is possible to watch the spread of diseases in maps or graphs, which can be the sources of information to create new public policies, preventing future pandemics.

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

*DiaGo_NASASpaceApps.apk*

##### DataBase
Our prototype database is stored in a spreadsheet in googledocs. 

*https://docs.google.com/spreadsheets/d/1x9ipVpKDqaPV8zaKUwc6c23Vz0VCYlpKp-Mm9eBmjog/edit?usp=sharing*

##### Viewing of the data
In the spreadsheet used to store the data, is possible to se the symptomatic cases, and see the city he is now.

*https://docs.google.com/spreadsheets/d/1x9ipVpKDqaPV8zaKUwc6c23Vz0VCYlpKp-Mm9eBmjog/edit?usp=sharing*
