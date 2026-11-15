// Name: core_motion.cpp_CMotionController_advanceTween_FUN_004fc850
// Address: 004fc850
// Address Range: [[004fc850, 004fc922]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004fc850(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004fc850(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time)

{
  float fVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  SMotion *pSVar5;
  float local_1c;
  
  pSVar5 = this_ptr->motion_list_ptr->motions + motion_index;
  fVar1 = *remaining_time * pSVar5->fps + current_frame;
  iVar4 = 0;
  pSVar3 = pSVar5;
  local_1c = fVar1;
  if (0 < pSVar5->signal_count) {
    do {
      fVar2 = (float)pSVar3->signals[0].frame_number;
      if ((current_frame <= fVar2) && (fVar2 <= local_1c + (float)_DAT_005c9d94)) {
        local_1c = fVar2 + (float)_DAT_005c9d94;
      }
      iVar4 = iVar4 + 1;
      pSVar3 = (SMotion *)(pSVar3->motion_name + 8);
    } while (iVar4 < pSVar5->signal_count);
  }
  if ((float)pSVar5->frame_count < local_1c) {
    local_1c = (float)pSVar5->frame_count;
  }
  if (local_1c < fVar1) {
    *remaining_time = (local_1c - current_frame) / pSVar5->fps;
    return;
  }
  return;
}
