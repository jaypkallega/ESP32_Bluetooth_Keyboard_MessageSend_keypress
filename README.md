# ESP32_Bluetooth_Keyboard_MessageSend_keypress
This project uses ESP32_WROOM-32 to identify as a bluetooth keyboard. It will send a predetermined message when a key is pressed
This project builds up on the example in the bluetooth keyboard example. 
This code needs to be built on VS Code / PlatformIO extension
Add the libraries before building the code :
  h2zero/NimBLE-Arduino@^1.4.2
	t-vk/ESP32 BLE Keyboard@^0.3.2
The ESP 32 connects to a laptop via bluetooth. There is no authentican mechanism to connect.
Build the code, write onto the ESP32.
Add bluetooth device called "ESP32 Bluetooth Keybord"
Open a notepad and place the cursor. When the button is pressed, the predetermined message is typed on the notepad or MSWORD 
This is inspired from (https://github.com/T-vK/ESP32-BLE-Keyboard)
