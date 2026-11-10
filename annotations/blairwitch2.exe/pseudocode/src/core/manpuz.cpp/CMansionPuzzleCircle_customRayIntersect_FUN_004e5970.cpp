// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970
// Address: 004e5970
// Address Range: [[004e5970, 004e5e62]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  SPanel *pSVar1;
  SReflector *pSVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  byte *puVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_1114 [1005];
  float *pfVar9;
  float *pfVar10;
  CVector3f *pCVar11;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [5];
  byte auStack_fc [12];
  float fStack_f0;
  float afStack_ec [5];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  float fStack_c0;
  uint auStack_bc [2];
  byte auStack_b4 [12];
  float fStack_a8;
  float afStack_a4 [5];
  float afStack_90 [3];
  float fStack_84;
  float afStack_78 [3];
  float afStack_6c [3];
  uint uStack_60;
  float afStack_54 [3];
  uint uStack_48;
  byte *puStack_3c;
  int *piStack_38;
  SGem *pSStack_34;
  byte *puStack_30;
  byte *puStack_2c;
  int iStack_28;
  SPanel *pSStack_24;
  SReflector *pSStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar8 = 0;
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->panel_model);
  fStack_1c = 1.01;
  pCVar5 = &pCVar3->bounds;
  pfVar7 = &stack0xfffffebc;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar8 * -8 + 4);
    pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
  }
  pSStack_34 = this_ptr->gems;
  iStack_28 = 0;
  pSStack_24 = this_ptr->panels;
  do {
    pSVar1 = pSStack_24;
    if (*(int *)pSStack_24 != 0) {
      fStack_a8 = ray_origin->x - *(float *)&pSStack_24->field_0xc;
      afStack_a4[0] = ray_origin->y - *(float *)&pSStack_24->field_0x10;
      pfVar7 = afStack_a4 + 0xb;
      afStack_a4[1] = ray_origin->z - *(float *)&pSStack_24->field_0x14;
      afStack_78[0] = fStack_a8;
      afStack_a4[(uint)bVar8 * -2 + 0xc] = afStack_a4[(uint)bVar8 * -2];
      afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      puStack_2c = &pSVar1->field_0x24;
      core_dirmat_cpp_FUN_004495a0(puStack_2c,pfVar7);
      puVar6 = puStack_2c;
      afStack_90[0] = afStack_a4[2];
      afStack_a4[(uint)bVar8 * -2 + 6] = afStack_a4[(uint)bVar8 * -2 + 3];
      pCVar11 = ray_direction;
      afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      core_dirmat_cpp_FUN_004495a0(puVar6,pCVar11);
      puVar6 = auStack_b4;
      pfVar9 = afStack_a4 + 0xe;
      pfVar10 = afStack_a4 + 5;
      pfVar7 = &stack0xfffffebc;
      afStack_6c[0] = afStack_110[2];
      afStack_a4[(uint)bVar8 * -2 + 0xf] = afStack_110[(uint)bVar8 * -2 + 3];
      afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_14c = (float)core_box_cpp_FUN_0041af70(pfVar7,pfVar10,pfVar9,puVar6);
      fStack_14 = fStack_14c;
      if ((0.0 <= fStack_14c) && (fStack_14c < fStack_1c)) {
        fStack_1c = fStack_14c;
        core_dirmat_cpp_FUN_00449530(puStack_2c,auStack_b4);
        CStack_120.x = fStack_84;
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) = afStack_a4[(uint)bVar8 * -2 + 9];
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        if (out_normal != &CStack_120) {
          out_normal->x = CStack_120.x;
          out_normal->y = CStack_120.y;
          out_normal->z = CStack_120.z;
        }
      }
    }
    puStack_3c = &pSStack_34->field_0x0 + iStack_28;
    iStack_18 = 0;
    do {
      puVar6 = puStack_3c + iStack_18 + 0x3c;
      fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                   (puVar6,ray_origin,ray_direction);
      fStack_148 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        fStack_f0 = -*(float *)(puVar6 + 0x24);
        afStack_ec[0] = -*(float *)(puVar6 + 0x28);
        afStack_ec[1] = -*(float *)(puVar6 + 0x2c);
        CStack_d8.x = -*(float *)(puVar6 + 0x24);
        *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4) = afStack_ec[(uint)bVar8 * -2];
        *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (out_normal != &CStack_d8) {
          out_normal->x = CStack_d8.x;
          out_normal->y = CStack_d8.y;
          out_normal->z = CStack_d8.z;
        }
      }
      iStack_18 = iStack_18 + 0x38;
    } while (iStack_18 != 0x70);
    iStack_28 = iStack_28 + 0xb8;
    pSStack_24 = pSStack_24 + 1;
  } while (iStack_28 != 0x8a0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     (&this_ptr->reflector_model);
  if ((CBoundingBox3D *)&stack0xfffffebc != &pCVar3->bounds) {
    fStack_144 = (pCVar3->bounds).min.x;
    fStack_140 = (pCVar3->bounds).min.y;
    fStack_13c = (pCVar3->bounds).min.z;
  }
  pCVar11 = &(pCVar3->bounds).max;
  if ((CVector3f *)&stack0xfffffec8 != pCVar11) {
    fStack_138 = pCVar11->x;
    fStack_134 = (pCVar3->bounds).max.y;
    fStack_130 = (pCVar3->bounds).max.z;
  }
  pSStack_20 = this_ptr->reflectors;
  piStack_38 = this_ptr->laser_color_r;
  do {
    pSVar2 = pSStack_20;
    if (0.0 < *(float *)&pSStack_20->field_0x18) {
      fStack_12c = ray_origin->x - *(float *)&pSStack_20->field_0x1c;
      fStack_128 = ray_origin->y - *(float *)&pSStack_20->field_0x20;
      pfVar7 = &fStack_114;
      fStack_124 = ray_origin->z - *(float *)&pSStack_20->field_0x24;
      fStack_114 = fStack_12c;
      afStack_110[(uint)bVar8 * -2] = (&stack0xfffffed8)[(uint)bVar8 * 0xfffffffe];
      afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5];
      puStack_30 = &pSVar2->field_0x34;
      core_dirmat_cpp_FUN_004495a0(puStack_30,pfVar7);
      afStack_ec[2] = (float)uStack_48;
      afStack_ec[(uint)bVar8 * -2 + 3] = afStack_a4[(uint)bVar8 * -2 + 0x18];
      afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
      core_dirmat_cpp_FUN_004495a0(puStack_30,ray_direction);
      puVar6 = auStack_fc;
      pfVar10 = afStack_a4 + 0x14;
      pfVar7 = afStack_ec + 2;
      pfVar9 = &stack0xfffffebc;
      afStack_54[0] = (float)uStack_60;
      afStack_a4[(uint)bVar8 * -2 + 0x15] = afStack_a4[(uint)bVar8 * -2 + 0x12];
      afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
      fStack_14 = (float)core_box_cpp_FUN_0041af70(pfVar9,pfVar7,pfVar10,puVar6);
      fStack_150 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_FUN_00449530(puStack_30,auStack_fc);
        CStack_cc.x = fStack_c0;
        *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + 4) = auStack_bc[(uint)bVar8 * -2];
        *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             auStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (out_normal != &CStack_cc) {
          out_normal->x = CStack_cc.x;
          out_normal->y = CStack_cc.y;
          out_normal->z = CStack_cc.z;
        }
      }
    }
    pSStack_20 = pSStack_20 + 1;
  } while (pSStack_20 != (SReflector *)piStack_38);
  return fStack_1c;
}
