// Name: core_game.cpp_CGame_displayMessage_FUN_0049aa30
// Address: 0049aa30
// Address Range: [[0049aa30, 0049aa85]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(CGame *this_ptr,char *message,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(CGame *this_ptr,char *message,float duration)

{
  char cVar1;
  char *pcVar2;
  
  if (message == (char *)0x0) {
    this_ptr->message_timer = 0.0;
    return;
  }
  if (*message != '\0') {
    pcVar2 = this_ptr->message_text;
    this_ptr->message_timer = duration;
    do {
      cVar1 = *message;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = message[1];
      message = message + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    return;
  }
  this_ptr->message_timer = 0.0;
  return;
}
