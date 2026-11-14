// Name: core_demnfolk.cpp_CDemnfolk_renderOpaque_FUN_0045bfe0
// Address: 0045bfe0
// Address Range: [[0045bfe0, 0045c018]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_renderOpaque_FUN_0045bfe0(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_renderOpaque_FUN_0045bfe0(CDemnfolk *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if ((pSVar1->state_index == 0x24) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  return iVar2;
}
