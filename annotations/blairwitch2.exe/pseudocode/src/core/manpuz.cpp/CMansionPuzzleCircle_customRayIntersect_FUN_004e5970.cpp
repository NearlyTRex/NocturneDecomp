// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970
// Address: 004e5970
// Address Range: [[004e5970, 004e5e62]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CMatrix3x3f *this_ptr_00;
  SPanel *pSVar1;
  SReflector *pSVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  CDemonTriangle *triangle;
  float *pfVar6;
  byte bVar7;
  float afStackY_1114 [1005];
  float *pfVar8;
  float *pfVar9;
  CVector3f *pCVar10;
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
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [5];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [2];
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  int iStack_3c;
  int *piStack_38;
  SGem *pSStack_34;
  CMatrix3x3f *pCStack_30;
  CMatrix3x3f *pCStack_2c;
  int iStack_28;
  SPanel *pSStack_24;
  SReflector *pSStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->panel_model);
  fStack_1c = 1.01;
  pCVar5 = &pCVar3->bounds;
  pfVar6 = &stack0xfffffebc;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  pSStack_34 = this_ptr->gems;
  iStack_28 = 0;
  pSStack_24 = this_ptr->panels;
  do {
    pSVar1 = pSStack_24;
    if (pSStack_24->exists != 0) {
      fStack_a8 = ray_origin->x - (pSStack_24->local_position).x;
      afStack_a4[0] = ray_origin->y - (pSStack_24->local_position).y;
      pCVar10 = &CStack_78;
      afStack_a4[1] = ray_origin->z - (pSStack_24->local_position).z;
      CStack_78.x = fStack_a8;
      *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + 4) = afStack_a4[(uint)bVar7 * -2];
      *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pCStack_2c = &pSVar1->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (pCStack_2c,pCVar10,&CStack_9c);
      this_ptr_00 = pCStack_2c;
      fStack_90 = CStack_9c.x;
      afStack_8c[(uint)bVar7 * -2] = *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + 4);
      pCVar10 = ray_direction;
      afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (this_ptr_00,pCVar10,&CStack_108);
      pCVar10 = &CStack_b4;
      pfVar8 = &fStack_6c;
      pfVar9 = &fStack_90;
      pfVar6 = &stack0xfffffebc;
      fStack_6c = CStack_108.x;
      afStack_68[(uint)bVar7 * -2] = *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + 4);
      afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14c = (float)core_box_cpp_FUN_0041af70(pfVar6,pfVar9,pfVar8,pCVar10);
      fStack_14 = fStack_14c;
      if ((0.0 <= fStack_14c) && (fStack_14c < fStack_1c)) {
        fStack_1c = fStack_14c;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(pCStack_2c,&CStack_b4,&CStack_84);
        CStack_120.x = CStack_84.x;
        *(uint *)((int)&CStack_120 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_120 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if (out_normal != &CStack_120) {
          out_normal->x = CStack_120.x;
          out_normal->y = CStack_120.y;
          out_normal->z = CStack_120.z;
        }
      }
    }
    iStack_3c = (int)&(pSStack_34->color).r + iStack_28;
    iStack_18 = 0;
    do {
      triangle = (CDemonTriangle *)(iStack_3c + 0x3c + iStack_18);
      fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                            (triangle,ray_origin,ray_direction);
      fStack_148 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        fStack_f0 = -(triangle->normal).x;
        afStack_ec[0] = -(triangle->normal).y;
        afStack_ec[1] = -(triangle->normal).z;
        CStack_d8.x = fStack_f0;
        *(float *)((int)&CStack_d8 + (uint)bVar7 * -8 + 4) = afStack_ec[(uint)bVar7 * -2];
        *(float *)((int)&CStack_d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
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
  pCVar10 = &(pCVar3->bounds).max;
  if ((CVector3f *)&stack0xfffffec8 != pCVar10) {
    fStack_138 = pCVar10->x;
    fStack_134 = (pCVar3->bounds).max.y;
    fStack_130 = (pCVar3->bounds).max.z;
  }
  pSStack_20 = this_ptr->reflectors;
  piStack_38 = this_ptr->laser_color_r;
  do {
    pSVar2 = pSStack_20;
    if (0.0 < pSStack_20->interp_factor) {
      fStack_12c = ray_origin->x - (pSStack_20->position).x;
      fStack_128 = ray_origin->y - (pSStack_20->position).y;
      pCVar10 = &CStack_114;
      fStack_124 = ray_origin->z - (pSStack_20->position).z;
      CStack_114.x = fStack_12c;
      *(float *)((int)&CStack_114 + (uint)bVar7 * -8 + 4) =
           (&stack0xfffffed8)[(uint)bVar7 * 0xfffffffe];
      *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&stack0xfffffedc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      pCStack_30 = &pSVar2->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (pCStack_30,pCVar10,&CStack_48);
      afStack_ec[2] = CStack_48.x;
      afStack_ec[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_48 + (uint)bVar7 * -8 + 4);
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (pCStack_30,ray_direction,&CStack_60);
      pCVar10 = &CStack_fc;
      pfVar9 = &fStack_54;
      pfVar6 = afStack_ec + 2;
      pfVar8 = &stack0xfffffebc;
      fStack_54 = CStack_60.x;
      afStack_50[(uint)bVar7 * -2] = *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + 4);
      afStack_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = (float)core_box_cpp_FUN_0041af70(pfVar8,pfVar6,pfVar9,pCVar10);
      fStack_150 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(pCStack_30,&CStack_fc,&CStack_c0);
        CStack_cc.x = CStack_c0.x;
        *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
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
