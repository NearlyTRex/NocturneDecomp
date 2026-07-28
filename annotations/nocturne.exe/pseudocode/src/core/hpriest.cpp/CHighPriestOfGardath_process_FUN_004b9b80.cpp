// Name: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80
// Address: 004b9b80
// Address Range: [[004b9b80, 004b9bc1]]
// Convention: unknown
// Signature: void core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CNPC *param_1,float param_2)

#include "nocturne.h"

void core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CNPC *param_1,float param_2)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_004eea20(param_1,param_2);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,(char *)(param_1 + 1));
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60(&param_1->base,(CVector3f *)0x0,-1.0,1);
  return;
}
