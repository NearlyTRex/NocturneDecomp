// Name: core_charactr.cpp_FUN_00432c70
// Address: 00432c70
// Address Range: [[00432c70, 00432caf]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_00432c70(CCharacter *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_00432c70(CCharacter *this_ptr,char *motion_name)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  iVar1 = 0;
  *(uint *)&this_ptr->field_0x2758 = 0;
  this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)&this_ptr->field_0x158);
  iVar1 = core_motion_cpp_FUN_005240c0(this_ptr_00,motion_name,iVar1);
  *(int *)&this_ptr->field_0x2754 = iVar1;
  return (uint)(-1 < iVar1);
}
