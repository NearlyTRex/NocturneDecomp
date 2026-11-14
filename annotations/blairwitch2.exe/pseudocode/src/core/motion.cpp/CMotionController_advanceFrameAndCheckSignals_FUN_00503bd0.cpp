// Name: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0
// Address: 00503bd0
// Address Range: [[00503bd0, 00503d7e]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_00503bd0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)

{
  int iVar1;
  float fVar2;
  SMotionTransition *pSVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  float local_24;
  int local_20;
  
  bVar9 = 0;
  pSVar5 = this_ptr->motion_list_ptr->motions + (int)inout_motion_index;
  local_20 = 0;
  fVar2 = *(float *)delta_time * pSVar5->fps + (float)inout_frame_number;
  iVar6 = 0;
  pSVar4 = pSVar5;
  local_24 = fVar2;
  if (0 < pSVar5->signal_count) {
    do {
      iVar1 = pSVar4->signals[0].frame_number;
      if (((float)inout_frame_number <= (float)iVar1) &&
         ((float)iVar1 <= local_24 + (float)_DAT_005dfd20)) {
        local_20 = pSVar4->signals[0].value;
        local_24 = (float)iVar1 + (float)_DAT_005dfd20;
      }
      iVar6 = iVar6 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar6 < pSVar5->signal_count);
  }
  if ((double)local_24 < (double)pSVar5->exit_forward_from_frame + _DAT_005dfd18) {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar5->frame_start + (float)inout_frame_number,
               (float)pSVar5->frame_start + local_24,1.0);
    *(uint *)((int)scale_factor + 4) = 1;
    *(uint *)((int)scale_factor + 0x14) = 0;
    *(int **)((int)scale_factor + 8) = inout_motion_index;
    *(float *)((int)scale_factor + 0xc) = local_24;
    if (fVar2 <= *(float *)((int)scale_factor + 0xc)) {
      return local_20;
    }
    fVar2 = *(float *)((int)scale_factor + 0xc);
  }
  else {
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar5->frame_start + (float)inout_frame_number,
               (float)(pSVar5->frame_start + pSVar5->exit_forward_from_frame),1.0);
    piVar7 = &pSVar5->unused1;
    piVar8 = (int *)scale_factor;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    pSVar3 = this_ptr->in_transition;
    if ((pSVar3 != (SMotionTransition *)0x0) && (pSVar3->cmd == MOTION_CMD_WAIT_EXIT)) {
      *(int *)((int)scale_factor + 8) = pSVar3->to_motion_number;
      *(float *)((int)scale_factor + 0xc) = this_ptr->in_transition->to_frame_number;
    }
    fVar2 = (float)pSVar5->exit_forward_from_frame;
  }
  *(float *)delta_time = (fVar2 - (float)inout_frame_number) / pSVar5->fps;
  return local_20;
}
