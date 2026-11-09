// Name: core_charactr.cpp_FUN_004291b0
// Address: 004291b0
// Address Range: [[004291b0, 004291ef]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_004291b0(CCharacter *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_004291b0(CCharacter *this_ptr,char *motion_name)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  iVar1 = 0;
  *(uint *)&this_ptr->field_0x27c8 = 0;
  this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)&this_ptr->field_0x2b4);
  iVar1 = core_motion_cpp_FUN_00502f10(this_ptr_00,motion_name,iVar1);
  *(int *)&this_ptr->field_0x27c4 = iVar1;
  return (uint)(-1 < iVar1);
}
