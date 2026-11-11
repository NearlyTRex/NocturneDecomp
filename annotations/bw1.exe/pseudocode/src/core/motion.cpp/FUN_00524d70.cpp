// Name: core_motion.cpp_FUN_00524d70
// Address: 00524d70
// Address Range: [[00524d70, 00524f38]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00524d70(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00524d70(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)

{
  int iVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  int iVar6;
  int *piVar7;
  SMotionTransition *pSVar8;
  byte bVar9;
  float local_24;
  int local_1c;
  
  bVar9 = 0;
  pSVar5 = this_ptr->motion_list_ptr->motions + motion_index;
  local_1c = 0;
  fVar2 = *inout_delta_time * pSVar5->fps + current_frame;
  iVar6 = 0;
  pSVar4 = pSVar5;
  local_24 = fVar2;
  if (0 < pSVar5->signal_count) {
    do {
      iVar1 = pSVar4->signals[0].frame_number;
      if ((current_frame <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_005eaf7b)) {
        local_1c = pSVar4->signals[0].value;
        local_24 = (float)iVar1 + (float)_DAT_005eaf7b;
      }
      iVar6 = iVar6 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar6 < pSVar5->signal_count);
  }
  if ((double)local_24 < (double)pSVar5->exit_forward_from_frame + _DAT_005eaf73) {
    fVar3 = 1.0 / (float)pSVar5->frame_step;
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar5->frame_start + current_frame * fVar3,
               local_24 * fVar3 + (float)pSVar5->frame_start,1.0);
    out_transition->cmd = MOTION_CMD_JUMP;
    out_transition->set_new_state_as_desired = 0;
    out_transition->to_motion_number = motion_index;
    out_transition->to_frame_number = local_24;
    if (fVar2 <= out_transition->to_frame_number) {
      return local_1c;
    }
    fVar2 = out_transition->to_frame_number;
  }
  else {
    fVar2 = 1.0 / (float)pSVar5->frame_step;
    (*this_ptr->vtable->accumulateScaledRootMotion)
              (this_ptr,(float)pSVar5->frame_start + current_frame * fVar2,
               (float)pSVar5->exit_forward_from_frame * fVar2 + (float)pSVar5->frame_start,1.0);
    piVar7 = &pSVar5->unused1;
    pSVar8 = out_transition;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar8->desired_state = *piVar7;
      piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
      pSVar8 = (SMotionTransition *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
    }
    pSVar8 = this_ptr->in_transition;
    if ((pSVar8 != (SMotionTransition *)0x0) && (pSVar8->cmd == MOTION_CMD_WAIT_EXIT)) {
      out_transition->to_motion_number = pSVar8->to_motion_number;
      out_transition->to_frame_number = this_ptr->in_transition->to_frame_number;
    }
    fVar2 = (float)pSVar5->exit_forward_from_frame;
  }
  *inout_delta_time = (fVar2 - current_frame) / pSVar5->fps;
  return local_1c;
}
