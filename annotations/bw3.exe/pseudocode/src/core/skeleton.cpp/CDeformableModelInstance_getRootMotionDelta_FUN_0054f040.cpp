// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040
// Address: 0054f040
// Address Range: [[0054f040, 0054f257]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

#include "nocturne.h"

CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)

{
  int iVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  double dVar9;
  float unaff_retaddr;
  float afStackY_1064 [1017];
  float fVar10;
  float fVar11;
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
  CVector3f CStack_40;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  CSkeleton *pCStack_1c;
  int iStack_18;
  
  bVar8 = 0;
  if (start_frame < end_frame) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
    pCStack_1c = pCVar2;
    dVar9 = floor((double)start_frame);
    fStack_2c = SUB84(__BITCAST_UINT64(dVar9),0);
    fStack_28 = (float)((ulonglong)dVar9 >> 0x20);
    fVar11 = 7.800518e-39;
    dVar9 = round(dVar9);
    pCStack_1c = (CSkeleton *)(int)ROUND(dVar9);
    dVar9 = ceil((double)start_frame);
    uStack_30 = SUB84(__BITCAST_UINT64(dVar9),0);
    fStack_2c = (float)((ulonglong)dVar9 >> 0x20);
    dVar9 = round(dVar9);
    pCStack_1c = (CSkeleton *)(int)ROUND(dVar9);
    CStack_40.x = 0.0;
    CStack_40.y = 0.0;
    CStack_40.z = 0.0;
    if (iStack_20 < (int)pCStack_1c) {
      pCVar3 = pCVar2->frame_positions_2 + iStack_20;
      iVar7 = iStack_20;
      do {
        iVar7 = iVar7 + 1;
        CStack_40.x = CStack_40.x + pCVar3->x;
        CStack_40.y = CStack_40.y + pCVar3->y;
        CStack_40.z = CStack_40.z + pCVar3->z;
        pCVar3 = pCVar3 + 1;
      } while (iVar7 < (int)pCStack_1c);
    }
    iStack_18 = iStack_20;
    iVar1 = *(int *)(iStack_24 + 0x1ec98);
    fStack_28 = unaff_retaddr - (float)iStack_20;
    fVar10 = *(float *)(iVar1 + iStack_20 * 0xc) * fStack_28;
    fStack_64 = fVar10;
    fStack_60 = *(float *)(iVar1 + 4 + iStack_20 * 0xc) * fStack_28;
    fStack_5c = *(float *)(iVar1 + 8 + iStack_20 * 0xc) * fStack_28;
    *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    iStack_18 = (int)pCStack_1c;
    iVar7 = (int)pCStack_1c + -1;
    fStack_2c = (float)(int)pCStack_1c - (float)this_ptr;
    fStack_4c = *(float *)(iVar1 + iVar7 * 0xc) * fStack_2c;
    CStack_40.x = CStack_40.x - fVar10;
    fStack_48 = *(float *)(iVar1 + 4 + iVar7 * 0xc) * fStack_2c;
    fStack_44 = *(float *)(iVar1 + 8 + iVar7 * 0xc) * fStack_2c;
    fStack_58 = fStack_4c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    pfVar5 = &stack0xffffff90;
    pCVar3 = &CStack_40;
    CStack_40.x = (CStack_40.x - fStack_58) * (this_ptr->root_offset_scale).x;
    CStack_40.y = ((CStack_40.y - fVar11) - fStack_54) * (this_ptr->root_offset_scale).y;
    CStack_40.z = ((CStack_40.z - fStack_74) - fStack_50) * (this_ptr->root_offset_scale).z;
  }
  else {
    pfVar5 = (float *)&stack0xffffff98;
    pCVar3 = &g_ZeroVector;
  }
  pfVar4 = (float *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
  *pfVar5 = pCVar3->x;
  pfVar5[(uint)bVar8 * -2 + 1] = *pfVar4;
  (pfVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
  puVar6 = (uint *)((int)output_buffer + (uint)bVar8 * -8 + 4);
  output_buffer->x = fStack_70;
  *puVar6 = *(uint *)(&stack0xffffff94 + (uint)bVar8 * -8);
  puVar6[(uint)bVar8 * -2 + 1] =
       *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  return output_buffer;
}
