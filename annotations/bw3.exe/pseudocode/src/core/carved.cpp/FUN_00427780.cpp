// Name: core_carved.cpp_FUN_00427780
// Address: 00427780
// Address Range: [[00427780, 00427bb7]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00427780(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00427780(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1100 [955];
  CVector3f *this_ptr;
  uint auStack_1d8 [3];
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
  uint uStack_d8;
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
  
  bVar6 = 0;
  iVar2 = param_2 * 0x78 + param_1;
  iVar3 = *(int *)(iVar2 + 0x25b0);
  iStack_10 = *(int *)(iVar2 + 0x25a8);
  uVar1 = *(uint *)(param_1 + 0xd068);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
    puVar4 = auStack_130;
    puVar5 = &fStack_178;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_b8 = fStack_178 + fStack_16c;
    afStack_b4[0] = fStack_174 + fStack_168;
    afStack_b4[1] = fStack_170 + fStack_164;
    fStack_7c = fStack_178 + fStack_16c;
    afStack_90[(uint)bVar6 * -2 + 6] = *(float *)((int)afStack_b4 + (uint)bVar6 * 0xfffffff8);
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         *(float *)((int)afStack_b4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
    afStack_90[2] = fStack_7c * _DAT_005b7cd7;
    afStack_90[3] = fStack_78 * _DAT_005b7cd7;
    fStack_80 = fStack_74 * _DAT_005b7cd7;
    afStack_48[2] = fStack_7c * _DAT_005b7cd7;
    afStack_48[(uint)bVar6 * -2 + 3] = afStack_90[(uint)bVar6 * -2 + 3];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if (&fStack_dc != afStack_48 + 2) {
      fStack_dc = afStack_48[2];
      uStack_d8 = afStack_48[3];
      uStack_d4 = uStack_38;
    }
    puVar4 = (uint *)(param_2 * 0x78 + param_1 + 0x25b4);
    puVar5 = auStack_1a8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    iVar2 = _strnicmp((char *)(param_1 + 0x24a8),&DAT_005b7cd3,3);
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
    core_xform_cpp_FUN_00583940(auStack_1a8,&DAT_02cfd900,&uStack_ac);
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
    puVar4 = auStack_148;
    puVar5 = &fStack_160;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_4c);
    this_ptr = (CVector3f *)auStack_94;
    fStack_4c = fStack_160 + fStack_154;
    afStack_48[0] = fStack_15c + fStack_150;
    afStack_48[1] = fStack_158 + fStack_14c;
    fStack_118 = fStack_160 + fStack_154;
    *(float *)((int)afStack_114 + (uint)bVar6 * 0xfffffff8) = afStack_48[(uint)bVar6 * -2];
    *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -5) * 4) =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_actor_cpp_CVector3f_ctor_FUN_0040d220(this_ptr);
    auStack_94 = (byte  [4])(fStack_118 * _DAT_005b7cd7);
    afStack_90[0] = afStack_114[0] * _DAT_005b7cd7;
    afStack_90[1] = afStack_114[1] * _DAT_005b7cd7;
    afStack_fc[2] = fStack_118 * _DAT_005b7cd7;
    *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + 3) * 4) = afStack_90[(uint)bVar6 * -2];
    *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_ec = fStack_158 + (float)_DAT_005b7cdf;
    fStack_34 = afStack_fc[2];
    afStack_48[(uint)bVar6 * -2 + 6] = *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + 3) * 4);
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
    if (&fStack_dc != afStack_48 + 5) {
      fStack_dc = fStack_34;
      uStack_d8 = uStack_30;
      uStack_d4 = uStack_2c;
    }
  }
  iVar3 = iStack_10 * 0x30 + param_1 + 0xfd8;
  if (iStack_10 == *(int *)(param_1 + 0xd07c)) {
    uStack_e8 = 0xbecccccd;
    uStack_e4 = 0;
    uStack_e0 = 0;
    core_xform_cpp_FUN_00583260(&uStack_e8,iVar3);
    fStack_70 = fStack_28;
    afStack_90[(uint)bVar6 * -2 + 9] = afStack_48[(uint)bVar6 * -2 + 9];
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    if (&fStack_10c != afStack_90 + 8) {
      fStack_10c = fStack_70;
      fStack_108 = fStack_6c;
      fStack_104 = fStack_68;
    }
  }
  else {
    uStack_c4 = 0x3ecccccd;
    uStack_c0 = 0;
    uStack_bc = 0;
    core_xform_cpp_FUN_00583260(&uStack_c4,iVar3);
    fStack_a0 = fStack_d0;
    *(uint *)((int)afStack_9c + (uint)bVar6 * 0xfffffff8) =
         *(uint *)((int)auStack_cc + (uint)bVar6 * 0xfffffff8);
    *(uint *)((int)afStack_9c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
         *(uint *)((int)auStack_cc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
    if (&fStack_10c != &fStack_a0) {
      fStack_10c = fStack_a0;
      fStack_108 = afStack_9c[0];
      fStack_104 = afStack_9c[1];
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1a8,param_1 + 0xfd8 + iStack_10 * 0x30);
  puVar4 = (uint *)&stack0xfffffdf8;
  puVar5 = auStack_1d8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260(&fStack_dc,auStack_1d8);
  fStack_58 = fStack_1c;
  afStack_90[(uint)bVar6 * -2 + 0xf] = afStack_48[(uint)bVar6 * -2 + 0xc];
  afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
       afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  fStack_100 = fStack_10c - fStack_58;
  afStack_fc[0] = fStack_108 - fStack_54;
  afStack_fc[1] = fStack_104 - fStack_50;
  fStack_64 = fStack_10c - fStack_58;
  afStack_90[(uint)bVar6 * -2 + 0xc] = *(float *)((int)afStack_fc + (uint)bVar6 * 0xfffffff8);
  afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       *(float *)((int)afStack_fc + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
  fStack_1cc = fStack_1cc + fStack_64;
  fStack_1bc = fStack_1bc + fStack_60;
  fStack_1ac = fStack_1ac + fStack_5c;
  puVar4 = auStack_1d8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
