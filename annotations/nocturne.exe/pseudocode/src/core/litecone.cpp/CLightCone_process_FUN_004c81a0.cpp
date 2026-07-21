// Name: core_litecone.cpp_CLightCone_process_FUN_004c81a0
// Address: 004c81a0
// Address Range: [[004c81a0, 004c81ff]]
// Convention: unknown
// Signature: void core_litecone_cpp_CLightCone_process_FUN_004c81a0(int param_1)

#include "nocturne.h"

void core_litecone_cpp_CLightCone_process_FUN_004c81a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x158) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x15c);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x158) = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1c0);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x158) = 0;
      return;
    }
  }
  return;
}
