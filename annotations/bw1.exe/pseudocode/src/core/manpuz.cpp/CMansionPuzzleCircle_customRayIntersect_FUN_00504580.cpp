// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580
// Address: 00504580
// Address Range: [[00504580, 00504b0d]]
// Convention: __cdecl
// Signature: float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CMatrix3x3f *pCVar1;
  SPanel *pSVar2;
  SReflector *pSVar3;
  CKeyFramedModel *pCVar4;
  int iVar5;
  CBoundingBox3D *pCVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_115c [1005];
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  CVector3f *pCVar12;
  byte *puVar13;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_168;
  uint uStack_15c;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [2];
  byte auStack_138 [12];
  uint uStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [5];
  float fStack_fc;
  uint uStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  CVector3f CStack_cc;
  uint uStack_c0;
  float afStack_bc [5];
  byte auStack_a8 [12];
  float fStack_9c;
  float afStack_98 [5];
  float afStack_84 [3];
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  float afStack_54 [3];
  float afStack_48 [3];
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
  
  bVar8 = 0;
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->panel_model);
  fStack_1c = 1.01;
  pCVar6 = &pCVar4->bounds;
  pfVar7 = &stack0xfffffe74;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = (pCVar6->min).x;
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
    pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
  }
  pSStack_38 = this_ptr->gems;
  iStack_2c = 0;
  pSStack_28 = this_ptr->panels;
  do {
    pSVar2 = pSStack_28;
    if (pSStack_28->exists != 0) {
      fStack_e4 = ray_origin->x - (pSStack_28->local_position).x;
      fStack_e0 = ray_origin->y - (pSStack_28->local_position).y;
      pfVar7 = afStack_98 + 5;
      fStack_dc = ray_origin->z - (pSStack_28->local_position).z;
      afStack_84[0] = fStack_e4;
      afStack_98[(uint)bVar8 * -2 + 6] = afStack_110[(uint)bVar8 * -2 + 0xc];
      afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      pCStack_34 = &pSVar2->rotation_matrix;
      core_dirmat_cpp_FUN_0045f700(pCStack_34,pfVar7);
      pCVar1 = pCStack_34;
      uStack_15c = uStack_12c;
      *(float *)((int)&stack0xfffffea8 + (uint)bVar8 * 0xfffffffe * 4) =
           afStack_128[(uint)bVar8 * -2];
      pCVar12 = ray_direction;
      *(float *)(auStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0x1c) =
           afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_dirmat_cpp_FUN_0045f700(pCVar1,pCVar12);
      puVar13 = auStack_a8;
      pfVar11 = afStack_bc + 2;
      puVar9 = &stack0xfffffea4;
      pfVar7 = &stack0xfffffe74;
      afStack_bc[2] = (float)uStack_d8;
      afStack_bc[(uint)bVar8 * -2 + 3] = afStack_110[(uint)bVar8 * -2 + 0xf];
      afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      fStack_190 = (float)core_box_cpp_FUN_00420ee0(pfVar7,puVar9,pfVar11,puVar13);
      fStack_14 = fStack_190;
      if ((0.0 <= fStack_190) && (fStack_190 < fStack_1c)) {
        fStack_1c = fStack_190;
        core_dirmat_cpp_FUN_0045f690(pCStack_34,auStack_a8);
        uStack_144 = uStack_c0;
        afStack_140[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2];
        afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_actor_cpp_FUN_00408ac0(this_ptr,&uStack_144);
        CStack_cc.x = fStack_fc;
        *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + 4) = afStack_110[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
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
      iVar5 = iStack_20 + 0x3c + iStack_18;
      fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40
                                   (iVar5,ray_origin,ray_direction);
      fStack_198 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        pfVar7 = &stack0xfffffe8c;
        fStack_6c = -*(float *)(iVar5 + 0x24);
        fStack_68 = -*(float *)(iVar5 + 0x28);
        fStack_64 = -*(float *)(iVar5 + 0x2c);
        fStack_174 = -*(float *)(iVar5 + 0x24);
        *(float *)((int)&stack0xfffffe90 + (uint)bVar8 * 0xfffffffe * 4) =
             afStack_98[(uint)bVar8 * -2 + 0xc];
        *(float *)(&stack0xfffffe94 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        core_actor_cpp_FUN_00408ac0(this_ptr,pfVar7);
        CStack_150.x = fStack_168;
        *(uint *)((int)&CStack_150 + (uint)bVar8 * -8 + 4) =
             *(uint *)(&stack0xfffffe9c + (uint)bVar8 * -8);
        *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8];
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
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     (&this_ptr->reflector_model);
  if ((CBoundingBox3D *)&stack0xfffffe74 != &pCVar4->bounds) {
    fStack_18c = (pCVar4->bounds).min.x;
    fStack_188 = (pCVar4->bounds).min.y;
    fStack_184 = (pCVar4->bounds).min.z;
  }
  pCVar12 = &(pCVar4->bounds).max;
  if ((CVector3f *)&stack0xfffffe80 != pCVar12) {
    fStack_180 = pCVar12->x;
    fStack_17c = (pCVar4->bounds).max.y;
    fStack_178 = (pCVar4->bounds).max.z;
  }
  pSStack_24 = this_ptr->reflectors;
  piStack_3c = this_ptr->laser_color_r;
  do {
    pSVar3 = pSStack_24;
    if (0.0 < pSStack_24->interp_factor) {
      fStack_114 = ray_origin->x - (pSStack_24->position).x;
      afStack_110[0] = ray_origin->y - (pSStack_24->position).y;
      pfVar7 = afStack_98 + 0xe;
      afStack_110[1] = ray_origin->z - (pSStack_24->position).z;
      afStack_60[0] = fStack_114;
      afStack_98[(uint)bVar8 * -2 + 0xf] = afStack_110[(uint)bVar8 * -2];
      afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pCStack_30 = &pSVar3->rotation_matrix;
      core_dirmat_cpp_FUN_0045f700(pCStack_30,pfVar7);
      afStack_48[0] = (float)uStack_78;
      afStack_98[(uint)bVar8 * -2 + 0x15] = afStack_98[(uint)bVar8 * -2 + 9];
      afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
           afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
      core_dirmat_cpp_FUN_0045f700(pCStack_30,ray_direction);
      puVar13 = auStack_138;
      pfVar11 = afStack_98 + 0x11;
      pfVar10 = afStack_98 + 0x14;
      pfVar7 = &stack0xfffffe74;
      afStack_54[0] = afStack_110[2];
      afStack_98[(uint)bVar8 * -2 + 0x12] = afStack_110[(uint)bVar8 * -2 + 3];
      afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
           afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_14 = (float)core_box_cpp_FUN_00420ee0(pfVar7,pfVar10,pfVar11,puVar13);
      fStack_194 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_FUN_0045f690(pCStack_30,auStack_138);
        pfVar7 = afStack_98 + 2;
        afStack_98[2] = (float)uStack_f0;
        afStack_98[(uint)bVar8 * -2 + 3] = afStack_110[(uint)bVar8 * -2 + 9];
        afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        core_actor_cpp_FUN_00408ac0(this_ptr,pfVar7);
        CStack_120.x = fStack_9c;
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) = afStack_98[(uint)bVar8 * -2];
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
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
