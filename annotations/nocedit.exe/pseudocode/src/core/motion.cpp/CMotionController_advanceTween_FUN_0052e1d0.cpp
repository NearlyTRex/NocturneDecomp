// Name: core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
// Address: 0052e1d0
// Address Range: [[0052e1d0, 0052e2a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  float local_20;
  
  pSVar5 = this_ptr->motion_list_ptr->motions + motion_index;
  fVar1 = *remaining_time * pSVar5->fps + current_frame;
  iVar3 = 0;
  pSVar4 = pSVar5;
  local_20 = fVar1;
  if (0 < pSVar5->signal_count) {
    do {
      fVar2 = (float)pSVar4->signals[0].frame_number;
      if ((current_frame <= fVar2) && (fVar2 <= local_20 + (float)0.001)) {
        local_20 = fVar2 + (float)0.001;
      }
      iVar3 = iVar3 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar3 < pSVar5->signal_count);
  }
  if ((float)pSVar5->frame_count < local_20) {
    local_20 = (float)pSVar5->frame_count;
  }
  if (local_20 < fVar1) {
    *remaining_time = (local_20 - current_frame) / pSVar5->fps;
    return;
  }
  return;
}
