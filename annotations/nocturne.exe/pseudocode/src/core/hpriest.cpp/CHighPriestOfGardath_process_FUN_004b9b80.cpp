// Name: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80
// Address: 004b9b80
// Address Range: [[004b9b80, 004b9bc1]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CHighPriestOfGardath *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CHighPriestOfGardath *this_ptr,float delta_time)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_004eea20(&this_ptr->base,delta_time);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->kill_event);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  return;
}
