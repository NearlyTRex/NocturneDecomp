// Name: unkafter_bird.cpp_FUN_00415730
// Address: 00415730
// Address Range: [[00415730, 00415773]]
// Convention: unknown
// Signature: undefined4 unkafter_bird_cpp_FUN_00415730(int param_1)

#include "nocturne.h"

uint unkafter_bird_cpp_FUN_00415730(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x27a8) != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,"heroCanSee"), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x1fab0) == 0)) {
    core_charactr_cpp_FUN_004301e0(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return 0;
}
