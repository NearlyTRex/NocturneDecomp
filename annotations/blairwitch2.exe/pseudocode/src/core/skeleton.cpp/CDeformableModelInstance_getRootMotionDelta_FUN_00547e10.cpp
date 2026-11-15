// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10
// Address: 00547e10
// Address Range: [[00547e10, 00548027]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

#include "nocturne.h"

CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

{
  int iVar1;
  CSkeleton *pCVar2;
  uint *puVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  double dVar8;
  float unaff_retaddr;
  float afStackY_1064 [1017];
  float fVar9;
  float fVar10;
  float fStack_74;
  float fStack_70;
  float fStack_64;
  float fStack_60;
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
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  CSkeleton *pCStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  if (start_frame < end_frame) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
    pCStack_1c = pCVar2;
    dVar8 = floor((double)start_frame);
    fStack_2c = SUB84(__BITCAST_UINT64(dVar8),0);
    fStack_28 = (float)((ulonglong)dVar8 >> 0x20);
    fVar10 = 7.759556e-39;
    dVar8 = round(dVar8);
    pCStack_1c = (CSkeleton *)(int)ROUND(dVar8);
    dVar8 = ceil((double)start_frame);
    uStack_30 = SUB84(__BITCAST_UINT64(dVar8),0);
    fStack_2c = (float)((ulonglong)dVar8 >> 0x20);
    dVar8 = round(dVar8);
    pCStack_1c = (CSkeleton *)(int)ROUND(dVar8);
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    if (iStack_20 < (int)pCStack_1c) {
      pCVar4 = pCVar2->frame_positions_2 + iStack_20;
      iVar6 = iStack_20;
      do {
        iVar6 = iVar6 + 1;
        fStack_40 = fStack_40 + pCVar4->x;
        fStack_3c = fStack_3c + pCVar4->y;
        fStack_38 = fStack_38 + pCVar4->z;
        pCVar4 = pCVar4 + 1;
      } while (iVar6 < (int)pCStack_1c);
    }
    iStack_18 = iStack_20;
    iVar1 = *(int *)(iStack_24 + 0x1e018);
    fStack_28 = unaff_retaddr - (float)iStack_20;
    fVar9 = *(float *)(iVar1 + iStack_20 * 0xc) * fStack_28;
    fStack_64 = fVar9;
    fStack_60 = *(float *)(iVar1 + 4 + iStack_20 * 0xc) * fStack_28;
    fStack_5c = *(float *)(iVar1 + 8 + iStack_20 * 0xc) * fStack_28;
    *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    iStack_18 = (int)pCStack_1c;
    iVar6 = (int)pCStack_1c + -1;
    fStack_2c = (float)(int)pCStack_1c - (float)this_ptr;
    fStack_4c = *(float *)(iVar1 + iVar6 * 0xc) * fStack_2c;
    fStack_40 = fStack_40 - fVar9;
    fStack_48 = *(float *)(iVar1 + 4 + iVar6 * 0xc) * fStack_2c;
    fStack_44 = *(float *)(iVar1 + 8 + iVar6 * 0xc) * fStack_2c;
    fStack_58 = fStack_4c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar5 = &stack0xffffff90;
    puVar3 = &stack0xffffffc0;
    fStack_40 = (fStack_40 - fStack_58) * (this_ptr->root_offset_scale).x;
    fStack_3c = ((fStack_3c - fVar10) - fStack_54) * (this_ptr->root_offset_scale).y;
    fStack_38 = ((fStack_38 - fStack_74) - fStack_50) * (this_ptr->root_offset_scale).z;
  }
  else {
    puVar5 = (uint *)&stack0xffffff98;
    puVar3 = (uint *)&DAT_0265370c;
  }
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (puVar3 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  puVar5 = (uint *)((int)output_buffer + (uint)bVar7 * -8 + 4);
  output_buffer->x = fStack_70;
  *puVar5 = *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8);
  puVar5[(uint)bVar7 * -2 + 1] =
       *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return output_buffer;
}
