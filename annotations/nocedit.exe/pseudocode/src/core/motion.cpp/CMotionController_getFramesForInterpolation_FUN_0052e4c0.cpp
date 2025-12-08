// Name: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
// Address: 0052e4c0
// Address Range: [[0052e4c0, 0052e56f] [0052e571, 0052e5c0]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, int * out_frame2, float * out_blend_weight)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
          (CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,
          int *out_frame2,float *out_blend_weight)

{
  CMotionList *pCVar1;
  int iVar2;
  float fVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int extraout_EDX;
  float10 fVar4;
  double dVar5;
  
  pCVar1 = this_ptr->motion_list_ptr;
  if (frame_number <= 0.0) {
    iVar2 = pCVar1->motions[motion_index].frame_start;
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    if (frame_number < (float)(pCVar1->motions[motion_index].frame_count + -1)) {
      fVar4 = (float10)pCVar1->motions[motion_index].frame_start + (float10)frame_number;
      dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
      *extraout_ECX_00 = (int)ROUND(dVar5);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar4 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = pCVar1->motions[motion_index].frame_start +
                  pCVar1->motions[motion_index].frame_count + -1;
    if ((pCVar1->motions[motion_index].exit_forward_from_frame <
         pCVar1->motions[motion_index].frame_count + -1) ||
       (pCVar1->motions[motion_index].exit_forward_cmd != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float)this_ptr->motion_list_ptr->motions
                                       [pCVar1->motions[motion_index].exit_forward_to_motion].
                                       frame_start +
                               pCVar1->motions[motion_index].exit_forward_to_frame));
    *out_frame2 = (int)ROUND(dVar5);
    fVar3 = (float)motion_index - (float)(*(int *)(extraout_EDX + 100) + -1);
    *out_blend_weight = fVar3;
    if (1.0 <= fVar3) {
      *extraout_ECX = *out_frame2;
      *out_blend_weight = 0.0;
    }
  }
  return;
}
