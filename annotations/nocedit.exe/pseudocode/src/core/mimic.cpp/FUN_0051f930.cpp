// Name: core_mimic.cpp_FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051fcb8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051f930()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_enemy_mimic.cpp_FUN_0051f930(uint param_1) */

void core_mimic_cpp_FUN_0051f930(void)

{
  CQuaternion4f *pCVar1;
  CHero *pCVar2;
  int iVar3;
  CSkeleton *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  SBoneTransformData *pSVar10;
  float fVar11;
  CMatrix3x4f *pCVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  CMatrix3x4f *pCVar16;
  uint *puVar17;
  CMatrix3x4f *pCVar18;
  byte bVar19;
  float in_stack_00000004;
  CMatrix3x4f *in_stack_fffffd30;
  CMatrix3x4f local_2a0;
  CMatrix3x4f local_270;
  CMatrix3x4f local_240;
  uint local_210 [12];
  float local_1e0 [12];
  float local_1b0 [12];
  float local_180 [12];
  float local_150 [12];
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  float local_90 [12];
  CMatrix3x4f local_60;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  float local_14;
  
  bVar19 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)((int)in_stack_00000004 + 0x158));
  local_18 = (float)pCVar4->bone_count;
  pfVar9 = (float *)((int)in_stack_00000004 + 0x1b0);
  local_14 = in_stack_00000004;
  fVar11 = in_stack_00000004;
  for (iVar5 = 0; iVar3 = g_LocalHeroIndex, iVar5 < (int)local_18; iVar5 = iVar5 + 1) {
    pCVar1 = (g_HeroActors[g_LocalHeroIndex]->base_character).model.bone_transform.bone_rotations +
             iVar5;
    puVar14 = (uint *)((int)fVar11 + 0x80c + (uint)bVar19 * -8);
    puVar13 = (uint *)((int)pCVar1 + ((uint)bVar19 * -2 + 1) * 4);
    *(float *)((int)fVar11 + 0x808) = pCVar1->w;
    puVar15 = puVar14 + (uint)bVar19 * -2 + 1;
    puVar17 = puVar13 + (uint)bVar19 * -2 + 1;
    *puVar14 = *puVar13;
    *puVar15 = *puVar17;
    puVar15[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
    pCVar12 = (g_HeroActors[iVar3]->base_character).model.bone_transform.bone_world_matrices + iVar5
    ;
    puVar13 = (uint *)((int)local_14 + 0xfd8);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = pCVar12->m[0].w;
      pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
      puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
    }
    pCVar6 = (g_HeroActors[iVar3]->base_character).model.transformed_vertices + iVar5;
    if ((CVector3f *)pfVar9 != pCVar6) {
      *pfVar9 = pCVar6->x;
      pfVar9[1] = pCVar6->y;
      pfVar9[2] = pCVar6->z;
    }
    fVar11 = (float)((int)fVar11 + 0x10);
    local_14 = (float)((int)local_14 + 0x30);
    pfVar9 = pfVar9 + 3;
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar10 = &(pCVar2->base_character).model.bone_transform;
  if ((SBoneTransformData *)((int)in_stack_00000004 + 0x7fc) != pSVar10) {
    *(float *)((int)in_stack_00000004 + 0x7fc) = (pSVar10->root_position).x;
    *(float *)((int)in_stack_00000004 + 0x800) =
         (pCVar2->base_character).model.bone_transform.root_position.y;
    *(float *)((int)in_stack_00000004 + 0x804) =
         (pCVar2->base_character).model.bone_transform.root_position.z;
  }
  *(uint *)((int)in_stack_00000004 + 0x2388) = 0xffffffff;
  iVar5 = *(int *)((g_HeroActors[g_LocalHeroIndex]->base_character).cloth_data + 400);
  puVar13 = *(uint **)(iVar5 + 0x10c);
  puVar17 = *(uint **)((int)in_stack_00000004 + 0xc090);
  for (uVar7 = (uint)(*(int *)(iVar5 + 0x104) * 0xc) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar17 = *puVar13;
    puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
    puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar17 = *(byte *)puVar13;
    puVar13 = (uint *)((int)puVar13 + (uint)bVar19 * -2 + 1);
    puVar17 = (uint *)((int)puVar17 + (uint)bVar19 * -2 + 1);
  }
  iVar5 = *(int *)((int)in_stack_00000004 + 0x4bdf8);
  if (iVar5 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_120,(CVector3f *)(iVar5 + 0x20),(CVector3f *)(iVar5 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_c0,(CVector3f *)(*(int *)((int)in_stack_00000004 + 0x4bdf8) + 0x20),
               (CVector3f *)(*(int *)((int)in_stack_00000004 + 0x4bdf8) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_f0,
               &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position,
               (CVector3f *)&(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.orient);
    pCVar18 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)pCVar18);
    pCVar12 = &local_2a0;
    pfVar9 = local_90;
    pCVar16 = &local_2a0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar16->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar19 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_f0,&local_120,pCVar12);
    puVar13 = local_210;
    puVar17 = (uint *)&stack0xfffffd30;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar17 = *puVar13;
      puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10((CMatrix3x4f *)&stack0xfffffd30,pCVar12,pCVar18);
    pfVar9 = local_1e0;
    pCVar12 = &local_270;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar12->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_270,pCVar18,in_stack_fffffd30);
    pCVar12 = &local_60;
    pfVar9 = local_1b0;
    pCVar18 = &local_60;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar18->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar19 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0((CMatrix3x4f *)0x0,(float)pCVar12);
    pfVar9 = local_180;
    pCVar18 = &local_240;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar18->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar19 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_240,pCVar12,in_stack_fffffd30);
    pfVar9 = local_150;
    pCVar12 = &local_60;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar12->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    *(float *)((int)in_stack_00000004 + 0x20) = local_60.m[0].z;
    *(float *)((int)in_stack_00000004 + 0x24) = local_60.m[1].z;
    *(float *)((int)in_stack_00000004 + 0x28) = local_60.m[2].z;
    pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       ((CVector3f *)&local_60,(CMatrix3x3f *)&stack0xffffffdc);
    if ((CVector3f *)((int)in_stack_00000004 + 0x30) != pCVar6) {
      ((CVector3f *)((int)in_stack_00000004 + 0x30))->x = pCVar6->x;
      *(float *)((int)in_stack_00000004 + 0x34) = pCVar6->y;
      *(float *)((int)in_stack_00000004 + 0x38) = pCVar6->z;
      return;
    }
  }
  return;
}
