// Name: core_charactr.cpp_CCharacter_advanceGesture_FUN_00429320
// Address: 00429320
// Address Range: [[00429320, 00429388]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_00429320(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_00429320(CCharacter *this_ptr,float delta_time)

{
  CMotionList *pCVar1;
  int iVar2;
  
  iVar2 = this_ptr->gesture_motion_index;
  if (-1 < iVar2) {
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                       ((CMotionController *)&this_ptr->model);
    iVar2 = iVar2 * 0x118;
    this_ptr->gesture_frame =
         delta_time * *(float *)(pCVar1 + iVar2 + 0x1c48) + this_ptr->gesture_frame;
    if ((float)*(int *)(pCVar1 + iVar2 + 0x1c8c) <= this_ptr->gesture_frame) {
      this_ptr->gesture_motion_index = -1;
      return;
    }
  }
  return;
}
