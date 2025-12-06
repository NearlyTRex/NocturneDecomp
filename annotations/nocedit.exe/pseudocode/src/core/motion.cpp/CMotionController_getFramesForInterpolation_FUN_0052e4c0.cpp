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
  float fVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  SMotion *pSVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  pSVar3 = this_ptr->motion_list_ptr->motions + motion_index;
  if (frame_number <= 0.0) {
    iVar2 = pSVar3->frame_start;
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    iVar2 = pSVar3->frame_count + -1;
    fVar1 = (float)iVar2;
    if (fVar1 >= frame_number && (fVar1 == frame_number) == 0) {
      fVar5 = (float10)pSVar3->frame_start + (float10)frame_number;
      fVar4 = fVar5;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */(pSVar3,CONCAT22 /* combine 2-byte values */((short)((uint)iVar2 >> 0x10),
                                                  (ushort)(fVar1 < frame_number) << 8 |
                                                  (ushort)(NAN(fVar1) || NAN(frame_number)) << 10 |
                                                  (ushort)(fVar1 == frame_number) << 0xe)));
      *extraout_ECX_00 = (int)ROUND(fVar5);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar4 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = pSVar3->frame_start + pSVar3->frame_count + -1;
    if ((pSVar3->exit_forward_from_frame < pSVar3->frame_count + -1) ||
       (pSVar3->exit_forward_cmd != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    fVar4 = (float10)this_ptr->motion_list_ptr->motions[pSVar3->exit_forward_to_motion].frame_start
            + (float10)pSVar3->exit_forward_to_frame;
    dVar6 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(pSVar3,pSVar3->exit_forward_to_motion * 0x54c));
    *out_frame2 = (int)ROUND(fVar4);
    fVar1 = (float)out_frame1 - (float)(*(int *)((int)((ulonglong)dVar6 >> 0x20) + 100) + -1);
    *out_blend_weight = fVar1;
    if (1.0 <= fVar1) {
      *extraout_ECX = *out_frame2;
      *out_blend_weight = 0.0;
    }
  }
  return;
}
