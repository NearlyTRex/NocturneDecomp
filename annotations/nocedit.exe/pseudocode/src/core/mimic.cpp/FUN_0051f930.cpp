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
  int iVar9;
  float *pfVar10;
  SBoneTransformData *pSVar11;
  uint *puVar12;
  CMatrix3x4f *pCVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  CMatrix3x4f *pCVar19;
  byte bVar20;
  int in_stack_00000004;
  CMatrix3x4f local_2d0;
  CMatrix3x4f local_2a0;
  CMatrix3x4f local_270;
  CMatrix3x4f local_240;
  CMatrix3x4f local_210;
  CMatrix3x4f local_1e0;
  CMatrix3x4f local_1b0;
  CMatrix3x4f local_180;
  CMatrix3x4f local_150;
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  CMatrix3x4f local_90;
  CMatrix3x4f local_60;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  bVar20 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
  local_18 = pCVar4->bone_count;
  pfVar10 = (float *)(in_stack_00000004 + 0x1b0);
  local_14 = in_stack_00000004;
  iVar8 = in_stack_00000004;
  for (iVar5 = 0; iVar3 = g_LocalHeroIndex, iVar5 < local_18; iVar5 = iVar5 + 1) {
    pCVar1 = (g_HeroActors[g_LocalHeroIndex]->base_character).model.bone_transform.bone_rotations +
             iVar5;
    puVar17 = (uint *)(iVar8 + 0x80c + (uint)bVar20 * -8);
    puVar12 = (uint *)((int)pCVar1 + ((uint)bVar20 * -2 + 1) * 4);
    *(float *)(iVar8 + 0x808) = pCVar1->w;
    puVar18 = puVar17 + (uint)bVar20 * -2 + 1;
    puVar16 = puVar12 + (uint)bVar20 * -2 + 1;
    *puVar17 = *puVar12;
    *puVar18 = *puVar16;
    puVar18[(uint)bVar20 * -2 + 1] = puVar16[(uint)bVar20 * -2 + 1];
    pCVar15 = (g_HeroActors[iVar3]->base_character).model.bone_transform.bone_world_matrices + iVar5
    ;
    puVar12 = (uint *)(local_14 + 0xfd8);
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      puVar12 = puVar12 + (uint)bVar20 * -2 + 1;
    }
    pCVar6 = (g_HeroActors[iVar3]->base_character).model.transformed_vertices + iVar5;
    if ((CVector3f *)pfVar10 != pCVar6) {
      *pfVar10 = pCVar6->x;
      pfVar10[1] = pCVar6->y;
      pfVar10[2] = pCVar6->z;
    }
    iVar8 = iVar8 + 0x10;
    local_14 = local_14 + 0x30;
    pfVar10 = pfVar10 + 3;
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar11 = &(pCVar2->base_character).model.bone_transform;
  if ((SBoneTransformData *)(in_stack_00000004 + 0x7fc) != pSVar11) {
    *(float *)(in_stack_00000004 + 0x7fc) = (pSVar11->root_position).x;
    *(float *)(in_stack_00000004 + 0x800) =
         (pCVar2->base_character).model.bone_transform.root_position.y;
    *(float *)(in_stack_00000004 + 0x804) =
         (pCVar2->base_character).model.bone_transform.root_position.z;
  }
  *(uint *)(in_stack_00000004 + 0x2388) = 0xffffffff;
  iVar8 = *(int *)((g_HeroActors[g_LocalHeroIndex]->base_character).cloth_data + 400);
  puVar12 = *(uint **)(iVar8 + 0x10c);
  puVar16 = *(uint **)(in_stack_00000004 + 0xc090);
  for (uVar7 = (uint)(*(int *)(iVar8 + 0x104) * 0xc) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar16 = *puVar12;
    puVar12 = puVar12 + (uint)bVar20 * -2 + 1;
    puVar16 = puVar16 + (uint)bVar20 * -2 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(byte *)puVar16 = *(byte *)puVar12;
    puVar12 = (uint *)((int)puVar12 + (uint)bVar20 * -2 + 1);
    puVar16 = (uint *)((int)puVar16 + (uint)bVar20 * -2 + 1);
  }
  iVar8 = *(int *)(in_stack_00000004 + 0x4bdf8);
  if (iVar8 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_120,(CVector3f *)(iVar8 + 0x20),(CVector3f *)(iVar8 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_c0,(CVector3f *)(*(int *)(in_stack_00000004 + 0x4bdf8) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004 + 0x4bdf8) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_f0,
               &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position,
               (CVector3f *)&(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.orient);
    pCVar14 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_90);
    pCVar15 = &local_2a0;
    pCVar13 = &local_90;
    pCVar19 = &local_2a0;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar19->m[0].w = pCVar13->m[0].w;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_f0,&local_120,&local_210);
    pCVar13 = &local_210;
    pCVar19 = &local_2d0;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(float *)pCVar19 = pCVar13->m[0].w;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2d0,pCVar15,&local_1e0);
    pCVar15 = &local_1e0;
    pCVar13 = &local_270;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar13->m[0].w = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_270,pCVar14,&local_1b0);
    pCVar15 = &local_60;
    pCVar14 = &local_1b0;
    pCVar13 = &local_60;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar13->m[0].w = pCVar14->m[0].w;
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(0.0,&local_180);
    pCVar14 = &local_180;
    pCVar13 = &local_240;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar13->m[0].w = pCVar14->m[0].w;
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_240,pCVar15,&local_150);
    pCVar15 = &local_150;
    pCVar14 = &local_60;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar14->m[0].w = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    *(float *)(in_stack_00000004 + 0x20) = local_60.m[0].z;
    *(float *)(in_stack_00000004 + 0x24) = local_60.m[1].z;
    *(float *)(in_stack_00000004 + 0x28) = local_60.m[2].z;
    pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_60,&local_24);
    if ((CVector3f *)(in_stack_00000004 + 0x30) != pCVar6) {
      ((CVector3f *)(in_stack_00000004 + 0x30))->x = pCVar6->x;
      *(float *)(in_stack_00000004 + 0x34) = pCVar6->y;
      *(float *)(in_stack_00000004 + 0x38) = pCVar6->z;
      return;
    }
  }
  return;
}
