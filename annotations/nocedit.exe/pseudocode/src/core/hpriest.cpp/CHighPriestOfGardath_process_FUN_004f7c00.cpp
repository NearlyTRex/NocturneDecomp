// Name: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004f7c00
// Address: 004f7c00
// Address Range: [[004f7c00, 004f7c41]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f7c00 (CHighPriestOfGardath *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f7c00
          (CHighPriestOfGardath *this_ptr,float delta_time)

{
  int iVar1;
  
  core_npc_cpp_CNPC_process_FUN_005448b0(&this_ptr->base,delta_time);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(g_CEventListPtr,this_ptr->unk);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
  return;
}
