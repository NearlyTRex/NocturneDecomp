// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580
// Address: 00504580
// Address Range: [[00504580, 00504b0d]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

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
  float afStackY_115c [1005];
  float *pfVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_174;
  CVector3f CStack_168;
  float fStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  uint auStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [2];
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [5];
  int *piStack_3c;
  SGem *pSStack_38;
  CMatrix3x3f *pCStack_34;
  CMatrix3x3f *pCStack_30;
  int iStack_2c;
  SPanel *pSStack_28;
  SReflector *pSStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->panel_model);
  fStack_1c = 1.01;
  pCVar5 = &pCVar3->bounds;
  pfVar6 = &fStack_18c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
    pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
  }
  pSStack_38 = this_ptr->gems;
  iStack_2c = 0;
  pSStack_28 = this_ptr->panels;
  do {
    pSVar1 = pSStack_28;
    if (pSStack_28->exists != 0) {
      fStack_e4 = ray_origin->x - (pSStack_28->local_position).x;
      afStack_e0[0] = ray_origin->y - (pSStack_28->local_position).y;
      pCVar10 = &CStack_84;
      afStack_e0[1] = ray_origin->z - (pSStack_28->local_position).z;
      CStack_84.x = fStack_e4;
      *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + 4) = afStack_e0[(uint)bVar7 * -2];
      *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pCStack_34 = &pSVar1->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_34,pCVar10,&CStack_12c);
      this_ptr_00 = pCStack_34;
      fStack_15c = CStack_12c.x;
      afStack_158[(uint)bVar7 * -2] = *(float *)((int)&CStack_12c + (uint)bVar7 * -8 + 4);
      pCVar10 = ray_direction;
      afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (this_ptr_00,pCVar10,&CStack_d8);
      pCVar10 = &CStack_a8;
      pfVar9 = &fStack_b4;
      pfVar6 = &fStack_15c;
      pfVar8 = &fStack_18c;
      fStack_b4 = CStack_d8.x;
      auStack_b0[(uint)bVar7 * -2] = *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + 4);
      auStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_190 = (float)core_box_cpp_FUN_00420ee0(pfVar8,pfVar6,pfVar9,pCVar10);
      fStack_14 = fStack_190;
      if ((0.0 <= fStack_190) && (fStack_190 < fStack_1c)) {
        fStack_1c = fStack_190;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(pCStack_34,&CStack_a8,&CStack_c0);
        CStack_144.x = CStack_c0.x;
        *(uint *)((int)&CStack_144 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                  (&this_ptr->base,&CStack_144,&CStack_fc);
        CStack_cc.x = CStack_fc.x;
        *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_fc + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if (out_normal != &CStack_cc) {
          out_normal->x = CStack_cc.x;
          out_normal->y = CStack_cc.y;
          out_normal->z = CStack_cc.z;
        }
      }
    }
    iStack_20 = (int)&(pSStack_38->color).r + iStack_2c;
    iStack_18 = 0;
    do {
      triangle = (CDemonTriangle *)(iStack_20 + 0x3c + iStack_18);
      fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40
                            (triangle,ray_origin,ray_direction);
      fStack_198 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        fStack_6c = -(triangle->normal).x;
        pCVar10 = &CStack_174;
        afStack_68[0] = -(triangle->normal).y;
        afStack_68[1] = -(triangle->normal).z;
        CStack_174.x = fStack_6c;
        *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + 4) = afStack_68[(uint)bVar7 * -2];
        *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,pCVar10,&CStack_168)
        ;
        CStack_150.x = CStack_168.x;
        *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_168 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_168 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if (out_normal != &CStack_150) {
          out_normal->x = CStack_150.x;
          out_normal->y = CStack_150.y;
          out_normal->z = CStack_150.z;
        }
      }
      iStack_18 = iStack_18 + 0x38;
    } while (iStack_18 != 0x70);
    iStack_2c = iStack_2c + 0xb8;
    pSStack_28 = pSStack_28 + 1;
  } while (iStack_2c != 0x8a0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     (&this_ptr->reflector_model);
  if ((CBoundingBox3D *)&fStack_18c != &pCVar3->bounds) {
    fStack_18c = (pCVar3->bounds).min.x;
    fStack_188 = (pCVar3->bounds).min.y;
    fStack_184 = (pCVar3->bounds).min.z;
  }
  pCVar10 = &(pCVar3->bounds).max;
  if ((CVector3f *)&fStack_180 != pCVar10) {
    fStack_180 = pCVar10->x;
    fStack_17c = (pCVar3->bounds).max.y;
    fStack_178 = (pCVar3->bounds).max.z;
  }
  pSStack_24 = this_ptr->reflectors;
  piStack_3c = this_ptr->laser_color_r;
  do {
    pSVar2 = pSStack_24;
    if (0.0 < pSStack_24->interp_factor) {
      fStack_114 = ray_origin->x - (pSStack_24->position).x;
      afStack_110[0] = ray_origin->y - (pSStack_24->position).y;
      pCVar10 = &CStack_60;
      afStack_110[1] = ray_origin->z - (pSStack_24->position).z;
      CStack_60.x = fStack_114;
      *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + 4) = afStack_110[(uint)bVar7 * -2];
      *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pCStack_30 = &pSVar2->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_30,pCVar10,&CStack_78);
      afStack_50[2] = CStack_78.x;
      afStack_50[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + 4);
      afStack_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_30,ray_direction,&CStack_108);
      pCVar10 = &CStack_138;
      pfVar8 = &fStack_54;
      pfVar9 = afStack_50 + 2;
      pfVar6 = &fStack_18c;
      fStack_54 = CStack_108.x;
      afStack_50[(uint)bVar7 * -2] = *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + 4);
      afStack_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = (float)core_box_cpp_FUN_00420ee0(pfVar6,pfVar9,pfVar8,pCVar10);
      fStack_194 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(pCStack_30,&CStack_138,&CStack_f0);
        pCVar10 = &CStack_90;
        CStack_90.x = CStack_f0.x;
        *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,pCVar10,&CStack_9c);
        CStack_120.x = CStack_9c.x;
        *(uint *)((int)&CStack_120 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_120 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        if (out_normal != &CStack_120) {
          out_normal->x = CStack_120.x;
          out_normal->y = CStack_120.y;
          out_normal->z = CStack_120.z;
        }
      }
    }
    pSStack_24 = pSStack_24 + 1;
  } while (pSStack_24 != (SReflector *)piStack_3c);
  return fStack_1c;
}
