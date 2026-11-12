// Name: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50
// Address: 004fcb50
// Address Range: [[004fcb50, 004fcc8b]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

{
  CMotionList *pCVar1;
  int iVar2;
  float fVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int extraout_EDX;
  float10 fVar4;
  float10 fVar5;
  
  pCVar1 = this_ptr->motion_list_ptr;
  if (frame_number <= 0.0) {
    iVar2 = pCVar1->motions[motion_index].frame_start;
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    if (frame_number <
        (float)(pCVar1->motions[motion_index].frame_count - pCVar1->motions[motion_index].frame_step
               )) {
      fVar5 = (float10)pCVar1->motions[motion_index].frame_start +
              (float10)frame_number / (float10)pCVar1->motions[motion_index].frame_step;
      fVar4 = fVar5;
      round();
      *extraout_ECX_00 = (int)ROUND(fVar5);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar4 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = pCVar1->motions[motion_index].frame_start +
                  pCVar1->motions[motion_index].stored_frame_count + -1;
    if ((pCVar1->motions[motion_index].exit_forward_from_frame <
         pCVar1->motions[motion_index].frame_count + -1) ||
       (pCVar1->motions[motion_index].exit_forward_cmd != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    iVar2 = pCVar1->motions[motion_index].exit_forward_to_motion;
    fVar4 = (float10)this_ptr->motion_list_ptr->motions[iVar2].frame_start +
            (float10)pCVar1->motions[motion_index].exit_forward_to_frame /
            (float10)this_ptr->motion_list_ptr->motions[iVar2].frame_step;
    round();
    *out_frame2 = (int)ROUND(fVar4);
    fVar3 = (frame_number - (float)(*(int *)(extraout_EDX + 100) - *(int *)(extraout_EDX + 0x68))) /
            (float)*(int *)(extraout_EDX + 0x68);
    *out_blend_weight = fVar3;
    if (1.0 <= fVar3) {
      *extraout_ECX = *out_frame2;
      *out_blend_weight = 0.0;
      return;
    }
  }
  return;
}
