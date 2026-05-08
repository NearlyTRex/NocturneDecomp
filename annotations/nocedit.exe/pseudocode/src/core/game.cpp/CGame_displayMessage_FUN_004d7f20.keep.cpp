// Name: core_game.cpp_CGame_displayMessage_FUN_004d7f20
// Address: 004d7f20
// MANUAL RECONSTRUCTION
// Address Range: [[004d7f20, 004d7f75]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *this_ptr,char *message,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *this_ptr,char *message,float duration)

{
  if (message == (char *)0x0) {
    this_ptr->message_timer = 0.0;
    return;
  }
  if (*message != '\0') {
    this_ptr->message_timer = duration;
    strcpy(this_ptr->message_text, message);
    return;
  }
  this_ptr->message_timer = 0.0;
  return;
}
