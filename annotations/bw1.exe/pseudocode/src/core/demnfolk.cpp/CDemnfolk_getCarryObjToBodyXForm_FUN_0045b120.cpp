// Name: core_demnfolk.cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_0045b120
// Address: 0045b120
// Address Range: [[0045b120, 0045b557]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_demnfolk_cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_0045b120(CDemnfolk *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_demnfolk_cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_0045b120(CDemnfolk *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1100 [955];
  CBoundingBox3D *in_stack_fffffdf8;
  CVector3f *this_ptr_01;
  float fStack_1cc;
  float fStack_1bc;
  float fStack_1ac;
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
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [6];
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
  float fStack_40;
  float afStack_3c [4];
  uint uStack_2c;
  float fStack_28;
  float fStack_1c;
  int iStack_10;
  
  bVar9 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  uVar1 = this_ptr->object_shape_class;
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf8);
    pfVar4 = afStack_130;
    pfVar6 = &fStack_178;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    }
    afStack_cc[5] = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    afStack_84[2] = fStack_178 + fStack_16c;
    afStack_84[(uint)bVar9 * -2 + 3] = afStack_b4[(uint)bVar9 * -2];
    afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    fStack_88 = afStack_84[2] * _DAT_005d80b7;
    afStack_84[0] = afStack_84[3] * _DAT_005d80b7;
    afStack_84[1] = fStack_74 * _DAT_005d80b7;
    fStack_40 = afStack_84[2] * _DAT_005d80b7;
    afStack_3c[(uint)bVar9 * -2] = afStack_84[(uint)bVar9 * -2];
    afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_fc + 8 != &fStack_40) {
      fStack_dc = fStack_40;
      fStack_d8 = afStack_3c[0];
      uStack_d4 = afStack_3c[1];
    }
    pCVar5 = &(this_ptr->base).base.carry_hands[hand_index].initial_carry_transform;
    pCVar8 = &CStack_1a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar8->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = _strnicmp
                      ((this_ptr->base).base.model.model_name,&DAT_005d80b3,3);
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
    core_xform_cpp_FUN_005b5760(&CStack_1a8,(CVector3f *)&DAT_02c8af28,&CStack_ac);
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf8);
    pfVar4 = afStack_148;
    pfVar6 = &fStack_160;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_4c);
    this_ptr_01 = &CStack_94;
    CStack_4c.x = fStack_160 + fStack_154;
    CStack_4c.y = fStack_15c + fStack_150;
    CStack_4c.z = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    afStack_114[(uint)bVar9 * -2] = *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + 4);
    afStack_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_4c + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8);
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(this_ptr_01);
    CStack_94.x = fStack_118 * _DAT_005d80b7;
    CStack_94.y = afStack_114[0] * _DAT_005d80b7;
    CStack_94.z = afStack_114[1] * _DAT_005d80b7;
    afStack_fc[2] = fStack_118 * _DAT_005d80b7;
    afStack_fc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_94 + (uint)bVar9 * -8 + 4);
    afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         *(float *)((int)&CStack_94 + ((uint)bVar9 * -2 + (uint)bVar9 * -2) * 4 + 8);
    fStack_ec = fStack_158 + (float)_DAT_005d80bb;
    afStack_3c[2] = afStack_fc[2];
    afStack_3c[(uint)bVar9 * -2 + 3] = afStack_fc[(uint)bVar9 * -2 + 3];
    afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    if (afStack_fc + 8 != afStack_3c + 2) {
      fStack_dc = afStack_3c[2];
      fStack_d8 = afStack_3c[3];
      uStack_d4 = uStack_2c;
    }
  }
  if (iStack_10 == this_ptr->bone_indices[1]) {
    uStack_e8 = 0xbecccccd;
    uStack_e4 = 0;
    uStack_e0 = 0;
    core_xform_cpp_FUN_005b5080();
    fStack_70 = fStack_28;
    afStack_84[(uint)bVar9 * -2 + 6] = afStack_3c[(uint)bVar9 * -2 + 6];
    afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (afStack_114 + 2 != afStack_84 + 5) {
      afStack_114[2] = fStack_70;
      afStack_114[3] = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    afStack_cc[2] = 0.4;
    afStack_cc[3] = 0.0;
    afStack_cc[4] = 0.0;
    core_xform_cpp_FUN_005b5080();
    fStack_a0 = fStack_d0;
    afStack_9c[(uint)bVar9 * -2] = afStack_cc[(uint)bVar9 * -2];
    afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_114 + 2 != &fStack_a0) {
      afStack_114[2] = fStack_a0;
      afStack_114[3] = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_1a8,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,
             (CMatrix3x4f *)&stack0xfffffdf8);
  puVar3 = (uint *)&stack0xfffffdf8;
  puVar7 = (uint *)&stack0xfffffe28;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5080();
  fStack_58 = fStack_1c;
  afStack_84[(uint)bVar9 * -2 + 0xc] = afStack_3c[(uint)bVar9 * -2 + 9];
  afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
       afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  fStack_100 = afStack_114[2] - fStack_58;
  afStack_fc[0] = afStack_114[3] - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = afStack_114[2] - fStack_58;
  afStack_84[(uint)bVar9 * -2 + 9] = afStack_fc[(uint)bVar9 * -2];
  afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  pfVar4 = (float *)&stack0xfffffe28;
  pCVar5 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
  }
  return out_matrix;
}
