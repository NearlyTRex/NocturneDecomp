// Name: core_npc.cpp_FUN_00510990
// Address: 00510990
// Address Range: [[00510990, 005109d3]]
// Convention: unknown
// Signature: undefined4 core_npc_cpp_FUN_00510990(int param_1)

#include "nocturne.h"

uint core_npc_cpp_FUN_00510990(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x2814) != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (0x01C38BC0,"heroCanSee"), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x24340) == 0)) {
    core_charactr_cpp_FUN_004268b0(param_1);
    return *(uint *)(param_1 + 0x2828);
  }
  return 0;
}
