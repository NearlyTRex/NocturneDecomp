// Name: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004d4810
// Address: 004d4810
// Address Range: [[004d4810, 004d4851]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004d4810(CHighPriestOfGardath *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004d4810(CHighPriestOfGardath *this_ptr,float delta_time)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_005105b0(&this_ptr->base,delta_time);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->kill_event);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427360
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  return;
}
