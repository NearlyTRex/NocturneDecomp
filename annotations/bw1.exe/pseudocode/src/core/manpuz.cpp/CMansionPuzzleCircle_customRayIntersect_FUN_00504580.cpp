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
  CBoundingBox3D *pCVar6;
  byte bVar7;
  float afStackY_115c [1005];
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  CBoundingBox3D CStack_18c;
  CVector3f CStack_174;
  CVector3f CStack_168;
  CVector3f CStack_15c;
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
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [2];
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
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
  pCVar6 = &CStack_18c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pCVar6->min).x = (pCVar5->min).x;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pSStack_38 = this_ptr->gems;
  iStack_2c = 0;
  pSStack_28 = this_ptr->panels;
  do {
    pSVar1 = pSStack_28;
    if (pSStack_28->exists != 0) {
      fStack_e4 = ray_origin->x - (pSStack_28->local_position).x;
      afStack_e0[0] = ray_origin->y - (pSStack_28->local_position).y;
      pCVar8 = &CStack_84;
      afStack_e0[1] = ray_origin->z - (pSStack_28->local_position).z;
      CStack_84.x = fStack_e4;
      *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + 4) = afStack_e0[(uint)bVar7 * -2];
      *(float *)((int)&CStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pCStack_34 = &pSVar1->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_34,pCVar8,&CStack_12c);
      this_ptr_00 = pCStack_34;
      CStack_15c.x = CStack_12c.x;
      *(uint *)((int)&CStack_15c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4);
      pCVar8 = ray_direction;
      *(uint *)((int)&CStack_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (this_ptr_00,pCVar8,&CStack_d8);
      pCVar10 = &CStack_a8;
      pCVar9 = &CStack_b4;
      pCVar8 = &CStack_15c;
      pCVar5 = &CStack_18c;
      CStack_b4.x = CStack_d8.x;
      *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_190 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420ee0
                             (pCVar5,pCVar8,pCVar9,pCVar10);
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
        pCVar8 = &CStack_174;
        afStack_68[0] = -(triangle->normal).y;
        afStack_68[1] = -(triangle->normal).z;
        CStack_174.x = fStack_6c;
        *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + 4) = afStack_68[(uint)bVar7 * -2];
        *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,pCVar8,&CStack_168);
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
  if (&CStack_18c != &pCVar3->bounds) {
    CStack_18c.min.x = (pCVar3->bounds).min.x;
    CStack_18c.min.y = (pCVar3->bounds).min.y;
    CStack_18c.min.z = (pCVar3->bounds).min.z;
  }
  pCVar8 = &(pCVar3->bounds).max;
  if (&CStack_18c.max != pCVar8) {
    CStack_18c.max.x = pCVar8->x;
    CStack_18c.max.y = (pCVar3->bounds).max.y;
    CStack_18c.max.z = (pCVar3->bounds).max.z;
  }
  pSStack_24 = this_ptr->reflectors;
  piStack_3c = this_ptr->laser_color_r;
  do {
    pSVar2 = pSStack_24;
    if (0.0 < pSStack_24->interp_factor) {
      fStack_114 = ray_origin->x - (pSStack_24->position).x;
      afStack_110[0] = ray_origin->y - (pSStack_24->position).y;
      pCVar8 = &CStack_60;
      afStack_110[1] = ray_origin->z - (pSStack_24->position).z;
      CStack_60.x = fStack_114;
      *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + 4) = afStack_110[(uint)bVar7 * -2];
      *(float *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pCStack_30 = &pSVar2->rotation_matrix;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_30,pCVar8,&CStack_78);
      CStack_48.x = CStack_78.x;
      *(uint *)((int)&CStack_48 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (pCStack_30,ray_direction,&CStack_108);
      pCVar8 = &CStack_138;
      pCVar10 = &CStack_54;
      pCVar9 = &CStack_48;
      pCVar5 = &CStack_18c;
      CStack_54.x = CStack_108.x;
      *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420ee0
                            (pCVar5,pCVar9,pCVar10,pCVar8);
      fStack_194 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(pCStack_30,&CStack_138,&CStack_f0);
        pCVar8 = &CStack_90;
        CStack_90.x = CStack_f0.x;
        *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,pCVar8,&CStack_9c);
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
