// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005bd120
// Address: 005bd120
// Address Range: [[005bd120, 005bd557]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005bd120(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005bd120(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  uint uVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  SCarryHand *pSVar7;
  float *pfVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  float afStackY_1100 [955];
  CVector3f *this_ptr_00;
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
  float afStack_e8 [4];
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
  
  bVar11 = 0;
  iVar4 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78 + 8);
  iStack_10 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78);
  uVar1 = this_ptr->object_shape_class;
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
    pfVar6 = afStack_130;
    pfVar8 = &fStack_178;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar11 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    }
    afStack_cc[5] = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    afStack_84[2] = fStack_178 + fStack_16c;
    afStack_84[(uint)bVar11 * -2 + 3] = afStack_b4[(uint)bVar11 * -2];
    afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_88 = afStack_84[2] * _DAT_005fa798;
    afStack_84[0] = afStack_84[3] * _DAT_005fa798;
    afStack_84[1] = fStack_74 * _DAT_005fa798;
    fStack_40 = afStack_84[2] * _DAT_005fa798;
    afStack_3c[(uint)bVar11 * -2] = afStack_84[(uint)bVar11 * -2];
    afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (afStack_fc + 8 != &fStack_40) {
      afStack_e8[3] = fStack_40;
      fStack_d8 = afStack_3c[0];
      uStack_d4 = afStack_3c[1];
    }
    pSVar7 = (this_ptr->base).base.carry_hands + hand_index * 0x78 + 0xc;
    pCVar10 = &CStack_1a8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar10->m[0].w = *(float *)pSVar7;
      pSVar7 = pSVar7 + ((uint)bVar11 * -2 + 1) * 4;
      pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = _strnicmp
                      ((this_ptr->base).base.model.model_name,&DAT_005fa794,3);
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
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
    pfVar6 = afStack_148;
    pfVar8 = &fStack_160;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar11 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_4c);
    this_ptr_00 = &CStack_94;
    CStack_4c.x = fStack_160 + fStack_154;
    CStack_4c.y = fStack_15c + fStack_150;
    CStack_4c.z = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    afStack_114[(uint)bVar11 * -2] = *(float *)((int)&CStack_4c + (uint)bVar11 * -8 + 4);
    afStack_114[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_4c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(this_ptr_00);
    CStack_94.x = fStack_118 * _DAT_005fa798;
    CStack_94.y = afStack_114[0] * _DAT_005fa798;
    CStack_94.z = afStack_114[1] * _DAT_005fa798;
    afStack_fc[2] = fStack_118 * _DAT_005fa798;
    afStack_fc[(uint)bVar11 * -2 + 3] = *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + 4);
    afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    fStack_ec = fStack_158 + (float)_DAT_005fa79c;
    afStack_3c[2] = afStack_fc[2];
    afStack_3c[(uint)bVar11 * -2 + 3] = afStack_fc[(uint)bVar11 * -2 + 3];
    afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (afStack_fc + 8 != afStack_3c + 2) {
      afStack_e8[3] = afStack_3c[2];
      fStack_d8 = afStack_3c[3];
      uStack_d4 = uStack_2c;
    }
  }
  puVar3 = &(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30;
  if (iStack_10 == this_ptr->bone_indices[1]) {
    afStack_e8[0] = -0.4;
    afStack_e8[1] = 0.0;
    afStack_e8[2] = 0.0;
    core_xform_cpp_FUN_005b5080(afStack_fc + 5,puVar3);
    fStack_70 = fStack_28;
    afStack_84[(uint)bVar11 * -2 + 6] = afStack_3c[(uint)bVar11 * -2 + 6];
    afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
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
    core_xform_cpp_FUN_005b5080(afStack_cc + 2,puVar3);
    fStack_a0 = fStack_d0;
    afStack_9c[(uint)bVar11 * -2] = afStack_cc[(uint)bVar11 * -2];
    afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (afStack_114 + 2 != &fStack_a0) {
      afStack_114[2] = fStack_a0;
      afStack_114[3] = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_1a8,&(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30);
  puVar5 = (uint *)&stack0xfffffdf8;
  puVar9 = (uint *)&stack0xfffffe28;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5080(afStack_fc + 8,&stack0xfffffe28);
  fStack_58 = fStack_1c;
  afStack_84[(uint)bVar11 * -2 + 0xc] = afStack_3c[(uint)bVar11 * -2 + 9];
  afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  fStack_100 = afStack_114[2] - fStack_58;
  afStack_fc[0] = afStack_114[3] - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = afStack_114[2] - fStack_58;
  afStack_84[(uint)bVar11 * -2 + 9] = afStack_fc[(uint)bVar11 * -2];
  afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  pfVar6 = (float *)&stack0xfffffe28;
  pCVar10 = out_matrix;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar10->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar11 * -2 + 1;
    pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  return out_matrix;
}
