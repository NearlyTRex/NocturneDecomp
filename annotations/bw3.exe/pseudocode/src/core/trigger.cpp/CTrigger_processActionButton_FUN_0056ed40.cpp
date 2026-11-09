// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_0056ed40
// Address: 0056ed40
// Address Range: [[0056ed40, 0056ed62]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_0056ed40(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_0056ed40(CTrigger *this_ptr)

{
  if (*(int *)&this_ptr->field_0x174 != 3) {
    return 1;
  }
  *(uint *)&this_ptr->field_0x2f0 = 1;
  return 1;
}
