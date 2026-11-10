// Name: core_hostage.cpp_CDemnfolk_renderOpaque_FUN_004581c0
// Address: 004581c0
// Address Range: [[004581c0, 004581f8]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CDemnfolk_renderOpaque_FUN_004581c0(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CDemnfolk_renderOpaque_FUN_004581c0(CDemnfolk *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  if ((*(int *)(pSVar1 + 0x24) == 0x23) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  return iVar2;
}
