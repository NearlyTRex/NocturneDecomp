// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
// Address: 005e0a20
// Address Range: [[005e0a20, 005e0a42]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger *this_ptr)

{
  if (this_ptr->hero_triggers_me != 3) {
    return 1;
  }
  this_ptr->unk2[4] = '\x01';
  this_ptr->unk2[5] = '\0';
  this_ptr->unk2[6] = '\0';
  this_ptr->unk2[7] = '\0';
  return 1;
}
