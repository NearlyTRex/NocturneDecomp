// Name: core_glass.cpp_FUN_004ca550
// Address: 004ca550
// Address Range: [[004ca550, 004ca592]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004ca550(int param_1)

#include "nocturne.h"

void core_glass_cpp_FUN_004ca550(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1b0) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,(char *)(param_1 + 0x1b4));
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004cc040(param_1,param_1 + 0x20);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}
