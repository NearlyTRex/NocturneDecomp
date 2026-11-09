// Name: unkafter_stranger.cpp_FUN_0045dda0
// Address: 0045dda0
// Address Range: [[0045dda0, 0045ddc8]]
// Convention: unknown
// Signature: undefined4 unkafter_stranger_cpp_FUN_0045dda0(undefined4 param_1)

#include "nocturne.h"

uint unkafter_stranger_cpp_FUN_0045dda0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"docCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = core_charactr_cpp_FUN_004281d0(param_1);
  return uVar2;
}
