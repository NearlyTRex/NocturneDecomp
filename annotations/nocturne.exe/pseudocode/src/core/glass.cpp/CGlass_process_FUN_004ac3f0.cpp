// Name: core_glass.cpp_CGlass_process_FUN_004ac3f0
// Address: 004ac3f0
// Address Range: [[004ac3f0, 004ac432]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_process_FUN_004ac3f0(int param_1)

#include "nocturne.h"

void core_glass_cpp_CGlass_process_FUN_004ac3f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x17c);
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004ada20(param_1,param_1 + 0x20);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}
