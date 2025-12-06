// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
// Address: 005e0a20
// Address Range: [[005e0a20, 005e0a42]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger * this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger *this_ptr)

{
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) != 3) {
    return 1;
  }
  this_ptr->field1_0x158[0x198] = '\x01';
  this_ptr->field1_0x158[0x199] = '\0';
  this_ptr->field1_0x158[0x19a] = '\0';
  this_ptr->field1_0x158[0x19b] = '\0';
  return 1;
}
