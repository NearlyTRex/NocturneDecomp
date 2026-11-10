// Name: core_script.cpp_CScript_setSpeaker_FUN_00530390
// Address: 00530390
// Address Range: [[00530390, 005303a9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00530390(CScript *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00530390(CScript *this_ptr,CDemonActor *actor)

{
  if (actor != this_ptr->who_is_speaking) {
    return;
  }
  this_ptr->who_is_speaking = (CDemonActor *)0x0;
  this_ptr->current_message[0] = '\0';
  return;
}
