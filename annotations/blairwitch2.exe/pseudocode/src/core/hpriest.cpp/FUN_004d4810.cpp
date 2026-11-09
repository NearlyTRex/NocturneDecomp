// Name: core_hpriest.cpp_FUN_004d4810
// Address: 004d4810
// Address Range: [[004d4810, 004d4851]]
// Convention: unknown
// Signature: void core_hpriest_cpp_FUN_004d4810(CNPC *param_1,float param_2)

#include "nocturne.h"

void core_hpriest_cpp_FUN_004d4810(CNPC *param_1,float param_2)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_005105b0(param_1,param_2);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,(char *)(param_1 + 1));
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427360((CCharacter *)param_1,(CVector3f *)0x0,-1.0,1)
  ;
  return;
}
