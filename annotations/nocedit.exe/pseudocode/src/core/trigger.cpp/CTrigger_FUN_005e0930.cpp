// Name: core_trigger.cpp_CTrigger_FUN_005e0930
// Address: 005e0930
// Address Range: [[005e0930, 005e0977]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_FUN_005e0930(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0930(CTrigger *this_ptr)

{
  int *in_stack_00000008;
  
  if ((*in_stack_00000008 == 1) &&
     ((*(int *)(this_ptr->unk + 0x1c) == 4 || (*(int *)(this_ptr->unk + 0x1c) == 7)))) {
    return 1;
  }
  if (((*in_stack_00000008 == 3) && (*(int *)(this_ptr->unk + 0x1c) == 5)) &&
     (*(int *)(this_ptr->unk + 0x19c) == in_stack_00000008[1])) {
    return 1;
  }
  return 0;
}
