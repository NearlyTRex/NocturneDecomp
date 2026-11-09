// Name: unkafter_bird.cpp_FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff73]]
// Convention: unknown
// Signature: undefined4 unkafter_bird_cpp_FUN_0040ff30(int param_1)

#include "nocturne.h"

uint unkafter_bird_cpp_FUN_0040ff30(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x27a8) != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                         (0x01C6E360,"heroCanSee"), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x206ac) == 0)) {
    core_charactr_cpp_FUN_0042f510(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return 0;
}
