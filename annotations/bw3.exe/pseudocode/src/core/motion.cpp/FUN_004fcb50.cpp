// Name: core_motion.cpp_FUN_004fcb50
// Address: 004fcb50
// Address Range: [[004fcb50, 004fcc8b]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_004fcb50(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

#include "nocturne.h"

void __cdecl core_motion_cpp_FUN_004fcb50(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)

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
  iVar2 = motion_index * 0x120;
  if (frame_number <= 0.0) {
    iVar2 = *(int *)(pCVar1 + iVar2 + 0x1c88);
    *out_frame1 = iVar2;
    *out_frame2 = iVar2;
    *out_blend_weight = 0.0;
  }
  else {
    if (frame_number <
        (float)(*(int *)(pCVar1 + iVar2 + 0x1c8c) - *(int *)(pCVar1 + iVar2 + 0x1c90))) {
      fVar5 = (float10)*(int *)(pCVar1 + iVar2 + 0x1c88) +
              (float10)frame_number / (float10)*(int *)(pCVar1 + iVar2 + 0x1c90);
      fVar4 = fVar5;
      round();
      *extraout_ECX_00 = (int)ROUND(fVar5);
      *out_frame2 = *extraout_ECX_00 + 1;
      *out_blend_weight = (float)(fVar4 - (float10)*extraout_ECX_00);
      return;
    }
    *out_frame1 = *(int *)(pCVar1 + iVar2 + 0x1c88) + *(int *)(pCVar1 + iVar2 + 0x1c94) + -1;
    if ((*(int *)(pCVar1 + iVar2 + 0x1c50) < *(int *)(pCVar1 + iVar2 + 0x1c8c) + -1) ||
       (*(int *)(pCVar1 + iVar2 + 0x1c58) != 1)) {
      *out_frame2 = *out_frame1;
      *out_blend_weight = 0.0;
      return;
    }
    fVar4 = (float10)*(int *)(this_ptr->motion_list_ptr +
                             *(int *)(pCVar1 + iVar2 + 0x1c5c) * 0x120 + 0x1c88) +
            (float10)*(float *)(pCVar1 + iVar2 + 0x1c60) /
            (float10)*(int *)(this_ptr->motion_list_ptr +
                             *(int *)(pCVar1 + iVar2 + 0x1c5c) * 0x120 + 0x1c90);
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
