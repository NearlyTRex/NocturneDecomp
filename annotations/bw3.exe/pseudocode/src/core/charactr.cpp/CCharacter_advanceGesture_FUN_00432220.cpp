// Name: core_charactr.cpp_CCharacter_advanceGesture_FUN_00432220
// Address: 00432220
// Address Range: [[00432220, 00432299]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_00432220(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_00432220(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  CMotionList *pCVar2;
  
  iVar1 = this_ptr->gesture_motion_index;
  if (-1 < iVar1) {
    pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&(this_ptr->model).base);
    this_ptr->gesture_frame = delta_time * pCVar2->motions[iVar1].fps + this_ptr->gesture_frame;
    if ((float)pCVar2->motions[iVar1].frame_count <= this_ptr->gesture_frame) {
      if (this_ptr->gesture_looping != 1) {
        this_ptr->gesture_motion_index = -1;
        return;
      }
      this_ptr->gesture_frame = 0.0;
      return;
    }
  }
  return;
}
