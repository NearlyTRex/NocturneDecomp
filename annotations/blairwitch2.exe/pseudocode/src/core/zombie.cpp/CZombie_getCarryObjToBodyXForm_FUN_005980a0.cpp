// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0
// Address: 005980a0
// Address Range: [[005980a0, 005984d7]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  uint uVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  SCarryHand *pSVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  float afStackY_1100 [955];
  CVector3f *this_ptr_00;
  float afStack_1d8 [3];
  float fStack_1cc;
  float fStack_1bc;
  float fStack_1ac;
  uint auStack_1a8 [12];
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
  uint auStack_148 [6];
  uint auStack_130 [6];
  float fStack_118;
  float afStack_114 [2];
  float fStack_10c;
  float fStack_108;
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
  uint auStack_cc [2];
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float afStack_b4 [2];
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
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
  
  bVar10 = 0;
  iVar4 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78 + 8);
  iStack_10 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78);
  uVar1 = this_ptr->object_shape_class;
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
    puVar5 = auStack_130;
    puVar8 = &fStack_178;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    fStack_b8 = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    afStack_84[2] = fStack_178 + fStack_16c;
    afStack_84[(uint)bVar10 * -2 + 3] = *(float *)((int)afStack_b4 + (uint)bVar10 * 0xfffffff8);
    afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)afStack_b4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4);
    fStack_88 = afStack_84[2] * _DAT_005ef1c6;
    afStack_84[0] = afStack_84[3] * _DAT_005ef1c6;
    afStack_84[1] = fStack_74 * _DAT_005ef1c6;
    fStack_40 = afStack_84[2] * _DAT_005ef1c6;
    afStack_3c[(uint)bVar10 * -2] = afStack_84[(uint)bVar10 * -2];
    afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (&fStack_dc != &fStack_40) {
      fStack_dc = fStack_40;
      fStack_d8 = afStack_3c[0];
      uStack_d4 = afStack_3c[1];
    }
    pSVar7 = (this_ptr->base).base.carry_hands + hand_index * 0x78 + 0xc;
    puVar5 = auStack_1a8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *(uint *)pSVar7;
      pSVar7 = pSVar7 + ((uint)bVar10 * -2 + 1) * 4;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
  }
  else {
    iVar2 = _strnicmp
                      (&(this_ptr->base).base.model.field_0x2260,&DAT_005ef1c2,3);
    if (iVar2 == 0) {
      uStack_a4 = 0xbf7c6a90;
      uStack_a8 = 0x3f7343c8;
      uStack_ac = 0xbf93b0b4;
    }
    else {
      uStack_a4 = 0;
      uStack_a8 = 0x3f676c8b;
      uStack_ac = 0x3e1eb852;
    }
    core_xform_cpp_FUN_00591c10(auStack_1a8,&DAT_0265370c,&uStack_ac);
    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
    puVar5 = auStack_148;
    puVar8 = &fStack_160;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_4c);
    this_ptr_00 = &CStack_94;
    CStack_4c.x = fStack_160 + fStack_154;
    CStack_4c.y = fStack_15c + fStack_150;
    CStack_4c.z = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    *(uint *)((int)afStack_114 + (uint)bVar10 * 0xfffffff8) =
         *(uint *)((int)&CStack_4c + (uint)bVar10 * -8 + 4);
    *(uint *)((int)afStack_fc + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + -5) * 4) =
         *(uint *)((int)&CStack_4c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_actor_cpp_CVector3f_ctor_FUN_0040d340(this_ptr_00);
    CStack_94.x = fStack_118 * _DAT_005ef1c6;
    CStack_94.y = afStack_114[0] * _DAT_005ef1c6;
    CStack_94.z = afStack_114[1] * _DAT_005ef1c6;
    afStack_fc[2] = fStack_118 * _DAT_005ef1c6;
    *(uint *)((int)afStack_fc + ((uint)bVar10 * -2 + 3) * 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar10 * -8 + 4);
    *(uint *)((int)afStack_fc + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 4) * 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fStack_ec = fStack_158 + (float)_DAT_005ef1ca;
    afStack_3c[2] = afStack_fc[2];
    afStack_3c[(uint)bVar10 * -2 + 3] = *(float *)((int)afStack_fc + ((uint)bVar10 * -2 + 3) * 4);
    afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)afStack_fc + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 4) * 4);
    if (&fStack_dc != afStack_3c + 2) {
      fStack_dc = afStack_3c[2];
      fStack_d8 = afStack_3c[3];
      uStack_d4 = uStack_2c;
    }
  }
  puVar3 = &(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30;
  if (iStack_10 == this_ptr->bone_indices[1]) {
    uStack_e8 = 0xbecccccd;
    uStack_e4 = 0;
    uStack_e0 = 0;
    core_xform_cpp_FUN_00591530(&uStack_e8,puVar3);
    fStack_70 = fStack_28;
    afStack_84[(uint)bVar10 * -2 + 6] = afStack_3c[(uint)bVar10 * -2 + 6];
    afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (&fStack_10c != afStack_84 + 5) {
      fStack_10c = fStack_70;
      fStack_108 = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    uStack_c4 = 0x3ecccccd;
    uStack_c0 = 0;
    uStack_bc = 0;
    core_xform_cpp_FUN_00591530(&uStack_c4,puVar3);
    fStack_a0 = fStack_d0;
    *(uint *)((int)afStack_9c + (uint)bVar10 * 0xfffffff8) =
         *(uint *)((int)auStack_cc + (uint)bVar10 * 0xfffffff8);
    *(uint *)((int)afStack_9c + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4) =
         *(uint *)((int)auStack_cc + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4);
    if (&fStack_10c != &fStack_a0) {
      fStack_10c = fStack_a0;
      fStack_108 = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (auStack_1a8,&(this_ptr->base).base.model.field_0xe80 + iStack_10 * 0x30);
  puVar5 = (uint *)&stack0xfffffdf8;
  puVar8 = afStack_1d8;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_FUN_00591530(&fStack_dc,afStack_1d8);
  fStack_58 = fStack_1c;
  afStack_84[(uint)bVar10 * -2 + 0xc] = afStack_3c[(uint)bVar10 * -2 + 9];
  afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  fStack_100 = fStack_10c - fStack_58;
  afStack_fc[0] = fStack_108 - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = fStack_10c - fStack_58;
  afStack_84[(uint)bVar10 * -2 + 9] = *(float *)((int)afStack_fc + (uint)bVar10 * 0xfffffff8);
  afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       *(float *)((int)afStack_fc + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4);
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  pfVar6 = afStack_1d8;
  pCVar9 = out_matrix;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar9->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
  }
  return out_matrix;
}
