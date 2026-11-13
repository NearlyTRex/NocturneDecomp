// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0
// Address: 0056a4b0
// Address Range: [[0056a4b0, 0056a6c7]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

#include "nocturne.h"

CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

{
  CSkeleton *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_105c [1016];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  double dStack_2c;
  float fStack_24;
  float fStack_20;
  CSkeleton *pCStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar6 = 0;
  if (start_frame < end_frame) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
    pCStack_1c = pCVar1;
    dStack_2c = floor((double)start_frame);
    fVar7 = (float10)dStack_2c;
    round();
    iStack_18 = (int)ROUND(fVar7);
    dStack_2c = ceil((double)end_frame);
    fVar7 = (float10)dStack_2c;
    round();
    iStack_14 = (int)ROUND(fVar7);
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    if (iStack_18 < iStack_14) {
      pCVar3 = pCVar1->frame_positions_2 + iStack_18;
      iVar5 = iStack_18;
      do {
        iVar5 = iVar5 + 1;
        fStack_38 = fStack_38 + pCVar3->x;
        fStack_34 = fStack_34 + pCVar3->y;
        fStack_30 = fStack_30 + pCVar3->z;
        pCVar3 = pCVar3 + 1;
      } while (iVar5 < iStack_14);
    }
    iStack_10 = iStack_18;
    pCVar3 = pCStack_1c->frame_positions_2;
    fStack_20 = start_frame - (float)iStack_18;
    fStack_5c = pCVar3[iStack_18].x * fStack_20;
    fStack_58 = pCVar3[iStack_18].y * fStack_20;
    fStack_54 = pCVar3[iStack_18].z * fStack_20;
    fStack_74 = fStack_5c;
    *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    iStack_10 = iStack_14;
    iVar5 = iStack_14 + -1;
    fStack_24 = (float)iStack_14 - end_frame;
    fStack_44 = pCVar3[iVar5].x * fStack_24;
    fStack_38 = fStack_38 - fStack_74;
    fStack_40 = pCVar3[iVar5].y * fStack_24;
    fStack_3c = pCVar3[iVar5].z * fStack_24;
    fStack_50 = fStack_44;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    pfVar2 = &stack0xffffffc8;
    fStack_38 = (fStack_38 - fStack_50) * (this_ptr->root_offset_scale).x;
    fStack_34 = ((fStack_34 - fStack_70) - fStack_4c) * (this_ptr->root_offset_scale).y;
    fStack_30 = ((fStack_30 - fStack_6c) - fStack_48) * (this_ptr->root_offset_scale).z;
  }
  else {
    pfVar2 = (float *)&DAT_02c8af28;
  }
  fStack_68 = *pfVar2;
  *(float *)(&stack0xffffff9c + (uint)bVar6 * -8) = pfVar2[(uint)bVar6 * -2 + 1];
  *(float *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       (pfVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  puVar4 = (uint *)((int)output_buffer + (uint)bVar6 * -8 + 4);
  output_buffer->x = fStack_68;
  *puVar4 = *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8);
  puVar4[(uint)bVar6 * -2 + 1] =
       *(uint *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return output_buffer;
}
