// Name: core_game.cpp_CGame_displayMessage_FUN_004b46b0
// Address: 004b46b0
// Address Range: [[004b46b0, 004b4705]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayMessage_FUN_004b46b0(CGame *this_ptr,char *message,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayMessage_FUN_004b46b0(CGame *this_ptr,char *message,float duration)

{
  char cVar1;
  char *pcVar2;
  
  if (message == (char *)0x0) {
    *(uint *)&this_ptr->field_0x434 = 0;
    return;
  }
  if (*message != '\0') {
    pcVar2 = &this_ptr->field_0x334;
    *(float *)&this_ptr->field_0x434 = duration;
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
  *(uint *)&this_ptr->field_0x434 = 0;
  return;
}
