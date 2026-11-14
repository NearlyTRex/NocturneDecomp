// Name: core_demnfolk.cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_00458f80
// Address: 00458f80
// Address Range: [[00458f80, 00458fad]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_00458f80(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_shouldIgnoreForTargeting_FUN_00458f80(CDemnfolk *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  if (pSVar1->state_index == 0x23) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0((CDemonActor *)this_ptr);
  return iVar2;
}
