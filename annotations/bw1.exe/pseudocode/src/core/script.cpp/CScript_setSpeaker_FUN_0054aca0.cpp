// Name: core_script.cpp_CScript_setSpeaker_FUN_0054aca0
// Address: 0054aca0
// Address Range: [[0054aca0, 0054acb9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_setSpeaker_FUN_0054aca0(CScript *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_setSpeaker_FUN_0054aca0(CScript *this_ptr,CDemonActor *actor)

{
  if (actor != this_ptr->who_is_speaking) {
    return;
  }
  this_ptr->who_is_speaking = (CDemonActor *)0x0;
  this_ptr->current_message[0] = '\0';
  return;
}
