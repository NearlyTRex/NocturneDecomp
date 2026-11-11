// Name: core_charactr.cpp_CCharacter_initGesture_FUN_004291b0
// Address: 004291b0
// Address Range: [[004291b0, 004291ef]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_004291b0(CCharacter *this_ptr,char *motion_name)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_004291b0(CCharacter *this_ptr,char *motion_name)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  iVar1 = 0;
  this_ptr->gesture_frame = 0.0;
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                          (&(this_ptr->model).base);
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(this_ptr_00,motion_name,iVar1);
  this_ptr->gesture_motion_index = iVar1;
  return (uint)(-1 < iVar1);
}
