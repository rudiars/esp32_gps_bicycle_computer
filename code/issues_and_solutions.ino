/*
This file doesn't contain any code that is executed by the ESP32.

1. Issue (Bootloop):
   : ?? ??:0
   0x40084072 start_cpu0_default
   0x4008a768 invoke_abort
   0x4008a867 abort
   0x40084210 call_start_cpu0

	-> disable OTA (don't use WiFi)
	-> install ESP32 board from boards manager and not via github (can use WiFi afterwards)

*/
