// Name: core_motion.cpp_FUN_00525240
// Address: 00525240
// Address Range: [[00525240, 0052537b]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00525240(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

#include "nocturne.h"

void __cdecl core_motion_cpp_FUN_00525240(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

{
  float fVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)this_ptr + 0x1c28 + motion_index * 0x120;
  if (frame_number <= 0.0) {
    iVar2 = *(int *)(iVar2 + 0x60);
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    if (frame_number < (float)(*(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x68))) {
      fVar5 = (float10)*(int *)(iVar2 + 0x60) +
              (float10)frame_number / (float10)*(int *)(iVar2 + 0x68);
      fVar4 = fVar5;
      round();
      *extraout_ECX_00 = (int)ROUND(fVar5);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar4 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = *(int *)(iVar2 + 0x60) + *(int *)(iVar2 + 0x6c) + -1;
    if ((*(int *)(iVar2 + 0x28) < *(int *)(iVar2 + 100) + -1) || (*(int *)(iVar2 + 0x30) != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    iVar3 = *(int *)(iVar2 + 0x34) * 0x120;
    fVar4 = (float10)*(int *)(iVar3 + 0x1c88 + *(int *)this_ptr) +
            (float10)*(float *)(iVar2 + 0x38) / (float10)*(int *)(iVar3 + 0x1c90 + *(int *)this_ptr)
    ;
    round();
    *out_frame2 = (int)ROUND(fVar4);
    fVar1 = (frame_number - (float)(*(int *)(extraout_EDX + 100) - *(int *)(extraout_EDX + 0x68))) /
            (float)*(int *)(extraout_EDX + 0x68);
    *out_blend_weight = fVar1;
    if (1.0 <= fVar1) {
      *extraout_ECX = *out_frame2;
      *out_blend_weight = 0.0;
      return;
    }
  }
  return;
}
