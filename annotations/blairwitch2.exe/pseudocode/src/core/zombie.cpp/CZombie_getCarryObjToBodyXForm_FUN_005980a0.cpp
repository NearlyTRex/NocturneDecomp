// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0
// Address: 005980a0
// Address Range: [[005980a0, 005984d7]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  int iVar2;
  CQuaternion4f *matrix;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1100 [955];
  CBoundingBox3D *in_stack_fffffdf8;
  CVector3f *this_ptr_01;
  CMatrix3x4f CStack_1d8;
  CMatrix3x4f CStack_1a8;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float afStack_148 [6];
  float afStack_130 [6];
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [2];
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  int iStack_10;
  
  bVar7 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  uVar1 = this_ptr->object_shape_class;
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf8);
    pfVar3 = afStack_130;
    pfVar5 = &fStack_178;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    }
    fStack_b8 = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    afStack_84[2] = fStack_178 + fStack_16c;
    afStack_84[(uint)bVar7 * -2 + 3] = afStack_b4[(uint)bVar7 * -2];
    afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_88 = afStack_84[2] * _DAT_005ef1c6;
    afStack_84[0] = afStack_84[3] * _DAT_005ef1c6;
    afStack_84[1] = fStack_74 * _DAT_005ef1c6;
    CStack_40.x = afStack_84[2] * _DAT_005ef1c6;
    *(float *)((int)&CStack_40 + (uint)bVar7 * -8 + 4) = afStack_84[(uint)bVar7 * -2];
    *(float *)((int)&CStack_40 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
         afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&CStack_dc != &CStack_40) {
      CStack_dc.x = CStack_40.x;
      CStack_dc.y = CStack_40.y;
      CStack_dc.z = CStack_40.z;
    }
    pCVar4 = &(this_ptr->base).base.carry_hands[hand_index].initial_carry_transform;
    pCVar6 = &CStack_1a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = _strnicmp
                      ((this_ptr->base).base.model.model_name,&DAT_005ef1c2,3);
    if (iVar2 == 0) {
      CStack_ac.z = -0.986001;
      CStack_ac.y = 0.950253;
      CStack_ac.x = -1.15383;
    }
    else {
      CStack_ac.z = 0.0;
      CStack_ac.y = 0.904;
      CStack_ac.x = 0.155;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&CStack_1a8,(CVector3f *)&DAT_0265370c,&CStack_ac);
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf8);
    pfVar3 = afStack_148;
    pfVar5 = &fStack_160;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_4c);
    this_ptr_01 = &CStack_94;
    CStack_4c.x = fStack_160 + fStack_154;
    CStack_4c.y = fStack_15c + fStack_150;
    CStack_4c.z = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    afStack_114[(uint)bVar7 * -2] = *(float *)((int)&CStack_4c + (uint)bVar7 * -8 + 4);
    afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&CStack_4c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
    core_actor_cpp_CVector3f_ctor_FUN_0040d340(this_ptr_01);
    CStack_94.x = fStack_118 * _DAT_005ef1c6;
    CStack_94.y = afStack_114[0] * _DAT_005ef1c6;
    CStack_94.z = afStack_114[1] * _DAT_005ef1c6;
    afStack_fc[2] = fStack_118 * _DAT_005ef1c6;
    afStack_fc[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_94 + (uint)bVar7 * -8 + 4);
    afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         *(float *)((int)&CStack_94 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
    fStack_ec = fStack_158 + (float)_DAT_005ef1ca;
    CStack_34.x = afStack_fc[2];
    *(float *)((int)&CStack_40 + ((uint)bVar7 * -2 + 3) * 4 + 4) = afStack_fc[(uint)bVar7 * -2 + 3];
    *(float *)((int)&CStack_40 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4 + 4) =
         afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (&CStack_dc != &CStack_34) {
      CStack_dc.x = CStack_34.x;
      CStack_dc.y = CStack_34.y;
      CStack_dc.z = CStack_34.z;
    }
  }
  matrix = (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m;
  if (iStack_10 == this_ptr->bone_indices[1]) {
    CStack_e8.x = -0.4;
    CStack_e8.y = 0.0;
    CStack_e8.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_e8,(CMatrix3x4f *)matrix,&CStack_28);
    fStack_70 = CStack_28.x;
    afStack_84[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + 4);
    afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (afStack_114 + 2 != afStack_84 + 5) {
      afStack_114[2] = fStack_70;
      afStack_114[3] = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    CStack_c4.x = 0.4;
    CStack_c4.y = 0.0;
    CStack_c4.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_c4,(CMatrix3x4f *)matrix,&CStack_d0);
    fStack_a0 = CStack_d0.x;
    afStack_9c[(uint)bVar7 * -2] = *(float *)((int)&CStack_d0 + (uint)bVar7 * -8 + 4);
    afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&CStack_d0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (afStack_114 + 2 != &fStack_a0) {
      afStack_114[2] = fStack_a0;
      afStack_114[3] = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&CStack_1a8,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,
             (CMatrix3x4f *)&stack0xfffffdf8);
  pfVar3 = (float *)&stack0xfffffdf8;
  pCVar4 = &CStack_1d8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_dc,&CStack_1d8,&CStack_1c);
  fStack_58 = CStack_1c.x;
  afStack_84[(uint)bVar7 * -2 + 0xc] = *(float *)((int)&CStack_1c + (uint)bVar7 * -8 + 4);
  afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       *(float *)((int)&CStack_1c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fStack_100 = afStack_114[2] - fStack_58;
  afStack_fc[0] = afStack_114[3] - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = afStack_114[2] - fStack_58;
  afStack_84[(uint)bVar7 * -2 + 9] = afStack_fc[(uint)bVar7 * -2];
  afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  CStack_1d8.m[0].z = CStack_1d8.m[0].z + fStack_64;
  CStack_1d8.m[1].z = CStack_1d8.m[1].z + fStack_60;
  CStack_1d8.m[2].z = CStack_1d8.m[2].z + fStack_5c;
  pCVar4 = &CStack_1d8;
  pCVar6 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return out_matrix;
}
