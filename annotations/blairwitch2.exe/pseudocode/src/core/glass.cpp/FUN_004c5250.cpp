// Name: core_glass.cpp_FUN_004c5250
// Address: 004c5250
// Address Range: [[004c5250, 004c5292]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004c5250(int param_1)

#include "nocturne.h"

void core_glass_cpp_FUN_004c5250(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2dc) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,(char *)(param_1 + 0x2e0));
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004c6d40(param_1,param_1 + 0x20);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}
