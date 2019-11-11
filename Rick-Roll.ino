#include <HID-Project.h>
#include <HID-Settings.h>

void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  AbsoluteMouse.begin();
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  Keyboard.press(KEY_RETURN);
  Keyboard.end();
  AbsoluteMouse.end();
}

void loop() {}
