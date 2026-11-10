// Name: core_demnfolk.cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_0045cdc0
// Address: 0045cdc0
// Address Range: [[0045cdc0, 0045cded]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_0045cdc0(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_0045cdc0(CDemnfolk *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if (*(int *)(pSVar1 + 0x24) == 0x24) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0((CDemonActor *)this_ptr);
  return iVar2;
}
