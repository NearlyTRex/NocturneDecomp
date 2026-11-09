// Name: core_motion.cpp_FUN_00504080
// Address: 00504080
// Address Range: [[00504080, 005041a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00504080(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

#include "nocturne.h"

void __cdecl core_motion_cpp_FUN_00504080(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

{
  float fVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = *(int *)this_ptr + 0x1c28 + motion_index * 0x118;
  if (frame_number <= 0.0) {
    iVar2 = *(int *)(iVar2 + 0x60);
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    if (frame_number < (float)(*(int *)(iVar2 + 100) + -1)) {
      fVar4 = (float10)*(int *)(iVar2 + 0x60) + (float10)frame_number;
      fVar3 = fVar4;
      round();
      *extraout_ECX_00 = (int)ROUND(fVar4);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar3 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = *(int *)(iVar2 + 0x60) + *(int *)(iVar2 + 100) + -1;
    if ((*(int *)(iVar2 + 0x28) < *(int *)(iVar2 + 100) + -1) || (*(int *)(iVar2 + 0x30) != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    fVar3 = (float10)*(int *)(*(int *)this_ptr + 0x1c88 + *(int *)(iVar2 + 0x34) * 0x118) +
            (float10)*(float *)(iVar2 + 0x38);
    round();
    *out_frame2 = (int)ROUND(fVar3);
    fVar1 = frame_number - (float)(*(int *)(extraout_EDX + 100) + -1);
    *out_blend_weight = fVar1;
    if (1.0 <= fVar1) {
      *extraout_ECX = *out_frame2;
      *out_blend_weight = 0.0;
      return;
    }
  }
  return;
}
