See pdf for firmware update and xp / win 7
Note external power 5v OR usb with 650-700ma or twin lead as manual

****************Win 10 update the firmware as pdf and to HDSDR****************************
the problem is the following
The compiled ExtIO causes windows to load the wrong driver and HDSDR crashes before it can explain the issue.

Create a restore point.

https://zadig.akeo.ie/ open and in options view/show all devices

Now be careful as we want to update driver on both instances of the Andrus SDR. Have a look and you will get multiple instances that share common interface-DO NOT USE THESE AS YOU WILL BREAK THINGS.

It will become apparent we have 2 Andrus interfaces that are on their own- these are the ones we want to use Zadig to update to lib-usb on both.
Download HDSDR Beta, open and Options>Misc Options 
turn off Auto Start
Turn on Show Status
exit HDSDR

https://github.com/2E0WKS/extiodll use green button download zip file
Unzip and put the ExtIO in HDSDR folder
Start HDSDR
Select SDR device and ExtIO you put in hdsdr folder
on ExtIO DLL select Show Debug Console
select correct COM Port

Hit Start "F2"

Questions 2E0WKS at gmail.com

