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
  BADSPACEBASE *in_ESP;
  float fVar11;
  CMatrix3x4f *pCVar12;
  float fVar13;
  uint *puVar14;
  uint unaff_EDI;
  uint *puVar15;
  uint *puVar16;
  float *pfVar17;
  uint *puVar18;
  byte bVar19;
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_0000002c;
  int in_stack_00000030;
  CMatrix3x4f *in_stack_fffffd40;
  CMatrix3x4f *in_stack_fffffd44;
  CMatrix3x4f *in_stack_fffffd48;
  CMatrix3x4f *in_stack_fffffd4c;
  CMatrix3x4f *in_stack_fffffd50;
  CMatrix3x4f *in_stack_fffffd54;
  uint uStack_290;
  CMatrix3x4f CStack_28c;
  uint uStack_258;
  CMatrix3x4f CStack_254;
  uint uStack_220;
  CMatrix3x4f CStack_21c;
  uint auStack_1c4 [13];
  uint auStack_190 [13];
  uint auStack_15c [13];
  uint auStack_128 [3];
  byte auStack_11c [56];
  byte auStack_e4 [44];
  CMatrix3x4f CStack_b8;
  uint auStack_7c [14];
  uint local_44;
  byte auStack_40 [4];
  uint uStack_3c;
  CVector3f CStack_38;
  uint local_2c;
  uint uStack_1c;
  int local_14;
  
  bVar19 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)((int)in_stack_00000004 + 0x158));
  local_14 = pCVar4->bone_count;
  pfVar9 = (float *)((int)in_stack_00000008 + 0x1b0);
  fVar11 = in_stack_00000008;
  fVar13 = in_stack_00000008;
  for (iVar5 = 0; iVar3 = g_LocalHeroIndex, iVar5 < local_14; iVar5 = iVar5 + 1) {
    pCVar1 = (g_HeroActors[g_LocalHeroIndex]->base_character).model.bone_transform.bone_rotations +
             iVar5;
    puVar15 = (uint *)((int)fVar11 + 0x80c + (uint)bVar19 * -8);
    puVar14 = (uint *)((int)pCVar1 + ((uint)bVar19 * -2 + 1) * 4);
    *(float *)((int)fVar11 + 0x808) = pCVar1->w;
    puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
    puVar18 = puVar14 + (uint)bVar19 * -2 + 1;
    *puVar15 = *puVar14;
    *puVar16 = *puVar18;
    puVar16[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
    pCVar12 = (g_HeroActors[iVar3]->base_character).model.bone_transform.bone_world_matrices + iVar5
    ;
    puVar14 = (uint *)((int)fVar13 + 0xfd8);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = pCVar12->m[0].w;
      pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
    }
    pCVar6 = (g_HeroActors[iVar3]->base_character).model.transformed_vertices + iVar5;
    if ((CVector3f *)pfVar9 != pCVar6) {
      *pfVar9 = pCVar6->x;
      pfVar9[1] = pCVar6->y;
      pfVar9[2] = pCVar6->z;
    }
    fVar11 = (float)((int)fVar11 + 0x10);
    fVar13 = (float)((int)fVar13 + 0x30);
    pfVar9 = pfVar9 + 3;
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar10 = &(pCVar2->base_character).model.bone_transform;
  if ((SBoneTransformData *)((int)in_stack_00000008 + 0x7fc) != pSVar10) {
    *(float *)((int)in_stack_00000008 + 0x7fc) = (pSVar10->root_position).x;
    *(float *)((int)in_stack_00000008 + 0x800) =
         (pCVar2->base_character).model.bone_transform.root_position.y;
    *(float *)((int)in_stack_00000008 + 0x804) =
         (pCVar2->base_character).model.bone_transform.root_position.z;
  }
  *(uint *)((int)in_stack_00000008 + 0x2388) = 0xffffffff;
  iVar5 = *(int *)((g_HeroActors[g_LocalHeroIndex]->base_character).cloth_data + 400);
  puVar14 = *(uint **)(iVar5 + 0x10c);
  puVar18 = *(uint **)((int)in_stack_00000008 + 0xc090);
  for (uVar7 = (uint)(*(int *)(iVar5 + 0x104) * 0xc) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar18 = *puVar14;
    puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
    puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar18 = *(byte *)puVar14;
    puVar14 = (uint *)((int)puVar14 + (uint)bVar19 * -2 + 1);
    puVar18 = (uint *)((int)puVar18 + (uint)bVar19 * -2 + 1);
  }
  iVar5 = *(int *)((int)in_stack_00000008 + 0x4bdf8);
  if (iVar5 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)auStack_11c,(CVector3f *)(iVar5 + 0x20),(CVector3f *)(iVar5 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&CStack_b8,(CVector3f *)(*(int *)((int)in_stack_0000000c + 0x4bdf8) + 0x20),
               (CVector3f *)(*(int *)((int)in_stack_0000000c + 0x4bdf8) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_e4,
               &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position,
               (CVector3f *)&(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.orient);
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)&CStack_b8.m[0].y);
    puVar14 = auStack_7c;
    puVar18 = &uStack_290;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_e4 + 8),(CMatrix3x4f *)(auStack_11c + 0x10),&CStack_28c);
    pfVar9 = &CStack_21c.m[2].x;
    pfVar17 = (float *)&stack0xfffffd44;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar17 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xfffffd48,in_stack_fffffd40,in_stack_fffffd44);
    puVar14 = auStack_1c4;
    puVar18 = &uStack_258;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_254,in_stack_fffffd48,in_stack_fffffd4c);
    puVar14 = auStack_190;
    puVar18 = &local_44;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0((CMatrix3x4f *)0x0,(float)auStack_40);
    puVar14 = auStack_15c;
    puVar18 = &uStack_220;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,in_stack_fffffd50,in_stack_fffffd54);
    puVar14 = auStack_128;
    puVar18 = &uStack_3c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    *(uint *)(in_stack_0000002c + 0x20) = local_2c;
    *(uint *)(in_stack_0000002c + 0x24) = uStack_1c;
    *(uint *)(in_stack_0000002c + 0x28) = unaff_EDI;
    pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (&CStack_38,(CMatrix3x3f *)&stack0x00000004);
    if ((CVector3f *)(in_stack_00000030 + 0x30) != pCVar6) {
      ((CVector3f *)(in_stack_00000030 + 0x30))->x = pCVar6->x;
      *(float *)(in_stack_00000030 + 0x34) = pCVar6->y;
      *(float *)(in_stack_00000030 + 0x38) = pCVar6->z;
      return;
    }
  }
  return;
}
