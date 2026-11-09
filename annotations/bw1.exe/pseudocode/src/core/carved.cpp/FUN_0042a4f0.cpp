// Name: core_carved.cpp_FUN_0042a4f0
// Address: 0042a4f0
// Address Range: [[0042a4f0, 0042a927]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_0042a4f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_0042a4f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1100 [955];
  CVector3f *this_ptr;
  float fStack_1cc;
  float fStack_1bc;
  float fStack_1ac;
  CMatrix3x4f aCStack_1a8 [48];
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
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [6];
  float afStack_b4 [2];
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [2];
  byte auStack_94 [4];
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
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
  float fStack_4c;
  float afStack_48 [4];
  uint uStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_1c;
  int iStack_10;
  
  bVar9 = 0;
  iVar2 = param_2 * 0x78 + param_1;
  iVar3 = *(int *)(iVar2 + 0x25b0);
  iStack_10 = *(int *)(iVar2 + 0x25a8);
  uVar1 = *(uint *)(param_1 + 0xc27c);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
    pfVar4 = afStack_130;
    pfVar6 = &fStack_178;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    }
    afStack_cc[5] = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    fStack_7c = fStack_178 + fStack_16c;
    afStack_90[(uint)bVar9 * -2 + 6] = afStack_b4[(uint)bVar9 * -2];
    afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    afStack_90[2] = fStack_7c * _DAT_005d54dd;
    afStack_90[3] = fStack_78 * _DAT_005d54dd;
    fStack_80 = fStack_74 * _DAT_005d54dd;
    afStack_48[2] = fStack_7c * _DAT_005d54dd;
    afStack_48[(uint)bVar9 * -2 + 3] = afStack_90[(uint)bVar9 * -2 + 3];
    afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    if (afStack_fc + 8 != afStack_48 + 2) {
      afStack_e8[3] = afStack_48[2];
      uStack_d8 = afStack_48[3];
      uStack_d4 = uStack_38;
    }
    puVar5 = (uint *)(param_2 * 0x78 + param_1 + 0x25b4);
    pCVar8 = aCStack_1a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pCVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      pCVar8 = pCVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
  }
  else {
    iVar2 = _strnicmp((char *)(param_1 + 0x24a8),&DAT_005d54d9,3);
    if (iVar2 == 0) {
      CStack_ac._8_4_ = 0xbf7c6a90;
      CStack_ac._4_4_ = 0x3f7343c8;
      CStack_ac._0_4_ = 0xbf93b0b4;
    }
    else {
      CStack_ac._8_4_ = 0;
      CStack_ac._4_4_ = 0x3f676c8b;
      CStack_ac._0_4_ = 0x3e1eb852;
    }
    core_xform_cpp_FUN_005b5760(aCStack_1a8,(CVector3f *)&DAT_02c8af28,&CStack_ac);
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
    pfVar4 = afStack_148;
    pfVar6 = &fStack_160;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)&fStack_4c);
    this_ptr = (CVector3f *)auStack_94;
    fStack_4c = fStack_160 + fStack_154;
    afStack_48[0] = fStack_15c + fStack_150;
    afStack_48[1] = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    afStack_114[(uint)bVar9 * -2] = afStack_48[(uint)bVar9 * -2];
    afStack_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(this_ptr);
    auStack_94 = (byte  [4])(fStack_118 * _DAT_005d54dd);
    afStack_90[0] = afStack_114[0] * _DAT_005d54dd;
    afStack_90[1] = afStack_114[1] * _DAT_005d54dd;
    afStack_fc[2] = fStack_118 * _DAT_005d54dd;
    afStack_fc[(uint)bVar9 * -2 + 3] = afStack_90[(uint)bVar9 * -2];
    afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    fStack_ec = fStack_158 + (float)_DAT_005d54e5;
    fStack_34 = afStack_fc[2];
    afStack_48[(uint)bVar9 * -2 + 6] = afStack_fc[(uint)bVar9 * -2 + 3];
    afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    if (afStack_fc + 8 != afStack_48 + 5) {
      afStack_e8[3] = fStack_34;
      uStack_d8 = uStack_30;
      uStack_d4 = uStack_2c;
    }
  }
  iVar3 = iStack_10 * 0x30 + param_1 + 0xfd8;
  if (iStack_10 == *(int *)(param_1 + 0xc290)) {
    afStack_e8[0] = -0.4;
    afStack_e8[1] = 0.0;
    afStack_e8[2] = 0.0;
    core_xform_cpp_FUN_005b5080(afStack_fc + 5,iVar3);
    fStack_70 = fStack_28;
    afStack_90[(uint)bVar9 * -2 + 9] = afStack_48[(uint)bVar9 * -2 + 9];
    afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    if (afStack_114 + 2 != afStack_90 + 8) {
      afStack_114[2] = fStack_70;
      afStack_114[3] = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    afStack_cc[2] = 0.4;
    afStack_cc[3] = 0.0;
    afStack_cc[4] = 0.0;
    core_xform_cpp_FUN_005b5080(afStack_cc + 2,iVar3);
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
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_1a8,param_1 + 0xfd8 + iStack_10 * 0x30);
  puVar5 = (uint *)&stack0xfffffdf8;
  puVar7 = (uint *)&stack0xfffffe28;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5080(afStack_fc + 8,&stack0xfffffe28);
  fStack_58 = fStack_1c;
  afStack_90[(uint)bVar9 * -2 + 0xf] = afStack_48[(uint)bVar9 * -2 + 0xc];
  afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
       afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  fStack_100 = afStack_114[2] - fStack_58;
  afStack_fc[0] = afStack_114[3] - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = afStack_114[2] - fStack_58;
  afStack_90[(uint)bVar9 * -2 + 0xc] = afStack_fc[(uint)bVar9 * -2];
  afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
       afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  puVar5 = (uint *)&stack0xfffffe28;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar9 * -2 + 1;
  }
  return;
}
