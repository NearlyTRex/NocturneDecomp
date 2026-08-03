// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_00548500
// Address: 00548500
// Address Range: [[00548500, 00548522]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_00548500(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_00548500(CTrigger *this_ptr)

{
  if (this_ptr->hero_triggers_me != 3) {
    return 1;
  }
  this_ptr->event_flag = 1;
  return 1;
}
