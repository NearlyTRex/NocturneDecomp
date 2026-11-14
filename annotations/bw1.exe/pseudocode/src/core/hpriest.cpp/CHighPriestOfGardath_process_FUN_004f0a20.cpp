// Name: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004f0a20
// Address: 004f0a20
// Address Range: [[004f0a20, 004f0a61]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f0a20(CHighPriestOfGardath *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f0a20(CHighPriestOfGardath *this_ptr,float delta_time)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_005317c0(&this_ptr->base,delta_time);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->kill_event);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00430d90
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  return;
}
