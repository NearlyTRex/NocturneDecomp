// Name: core_charactr.cpp_CCharacter_initGesture_FUN_00432c70
// Address: 00432c70
// Address Range: [[00432c70, 00432caf]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00432c70(CCharacter *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00432c70(CCharacter *this_ptr,char *motion_name)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  iVar1 = 0;
  this_ptr->gesture_frame = 0.0;
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                          (&(this_ptr->model).base);
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(this_ptr_00,motion_name,iVar1);
  this_ptr->gesture_motion_index = iVar1;
  return (uint)(-1 < iVar1);
}
