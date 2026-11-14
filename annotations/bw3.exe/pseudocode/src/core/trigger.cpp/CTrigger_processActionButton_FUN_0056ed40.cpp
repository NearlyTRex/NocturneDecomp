// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_0056ed40
// Address: 0056ed40
// Address Range: [[0056ed40, 0056ed62]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_0056ed40(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_0056ed40(CTrigger *this_ptr)

{
  if (this_ptr->trigger_cause != TRIGGER_CAUSE_ACTION_BUTTON) {
    return 1;
  }
  this_ptr->event_flag = 1;
  return 1;
}
