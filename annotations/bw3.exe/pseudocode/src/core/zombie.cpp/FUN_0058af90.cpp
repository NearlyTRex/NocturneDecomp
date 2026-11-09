// Name: core_zombie.cpp_FUN_0058af90
// Address: 0058af90
// Address Range: [[0058af90, 0058b3e9]]
// Convention: unknown
// Signature: undefined4 * core_zombie_cpp_FUN_0058af90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_zombie_cpp_FUN_0058af90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *unaff_ESI;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1104 [955];
  CVector3f *this_ptr;
  uint auStack_20c [12];
  uint auStack_1dc [3];
  float fStack_1d0;
  float fStack_1c0;
  float fStack_1b0;
  uint auStack_1ac [12];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint auStack_164 [6];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint auStack_134 [6];
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float afStack_f4 [2];
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  uint uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  float afStack_7c [6];
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  iVar2 = param_2 * 0x78 + param_1;
  iVar4 = *(int *)(iVar2 + 0x25b0);
  iVar3 = param_2;
  if ((*(int *)(param_1 + 0xd140) != 4) && (param_2 != *(int *)(param_1 + 0xd0e8))) {
    iVar3 = *(int *)(iVar2 + 0x25a8);
  }
  if (param_2 != *(int *)(param_1 + 0xd0e8)) {
    uVar1 = *(uint *)(param_1 + 0xd068);
    if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar5 = auStack_134;
      puVar6 = &fStack_14c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_f8 = fStack_14c + fStack_140;
      afStack_f4[0] = fStack_148 + fStack_13c;
      afStack_f4[1] = fStack_144 + fStack_138;
      afStack_64[2] = fStack_14c + fStack_140;
      afStack_64[(uint)bVar7 * -2 + 3] = *(float *)((int)afStack_f4 + (uint)bVar7 * 0xfffffff8);
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)afStack_f4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4);
      afStack_118[2] = afStack_64[2] * _DAT_005d8743;
      afStack_118[3] = afStack_64[3] * _DAT_005d8743;
      fStack_108 = fStack_54 * _DAT_005d8743;
      fStack_98 = afStack_64[2] * _DAT_005d8743;
      afStack_94[(uint)bVar7 * -2] = afStack_118[(uint)bVar7 * 0xfffffffe + 3];
      afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_118[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 4];
      if (&fStack_ec != &fStack_98) {
        fStack_ec = fStack_98;
        fStack_e8 = afStack_94[0];
        uStack_e4 = afStack_94[1];
      }
      puVar5 = (uint *)(param_1 + 0x25b4 + param_2 * 0x78);
      puVar6 = auStack_20c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
    }
    else {
      iVar2 = _strnicmp((char *)(param_1 + 0x24a8),&DAT_005d873f,3);
      if (iVar2 == 0) {
        afStack_7c[4] = -0.986001;
        afStack_7c[3] = 0.950253;
        afStack_7c[2] = -1.15383;
      }
      else {
        afStack_7c[4] = 0.0;
        afStack_7c[3] = 0.904;
        afStack_7c[2] = 0.155;
      }
      core_xform_cpp_FUN_00583940(auStack_20c,&DAT_02cfd900,afStack_7c + 2);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar5 = auStack_164;
      puVar6 = &fStack_17c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_d4);
      this_ptr = (CVector3f *)&fStack_80;
      fStack_d4 = fStack_17c + fStack_170;
      afStack_d0[0] = fStack_178 + fStack_16c;
      afStack_d0[1] = fStack_174 + fStack_168;
      afStack_94[2] = fStack_17c + fStack_170;
      afStack_94[(uint)bVar7 * -2 + 3] = afStack_d0[(uint)bVar7 * -2];
      afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(this_ptr);
      fStack_80 = afStack_94[2] * _DAT_005d8743;
      afStack_7c[0] = afStack_94[3] * _DAT_005d8743;
      afStack_7c[1] = fStack_84 * _DAT_005d8743;
      fStack_50 = afStack_94[2] * _DAT_005d8743;
      afStack_64[(uint)bVar7 * -2 + 6] = afStack_7c[(uint)bVar7 * -2];
      afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_48 = fStack_174 + (float)_DAT_005d8747;
      afStack_d0[2] = fStack_50;
      afStack_d0[(uint)bVar7 * -2 + 3] = afStack_64[(uint)bVar7 * -2 + 6];
      afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (&fStack_ec != afStack_d0 + 2) {
        fStack_ec = afStack_d0[2];
        fStack_e8 = afStack_d0[3];
        uStack_e4 = uStack_c0;
      }
    }
  }
  iVar4 = iVar3 * 0x30 + param_1 + 0xfd8;
  if (iVar3 == *(int *)(param_1 + 0xd0ec)) {
    uStack_e0 = 0xbecccccd;
    uStack_dc = 0;
    uStack_d8 = 0;
    core_xform_cpp_FUN_00583260(&uStack_e0,iVar4);
    fStack_b0 = fStack_20;
    afStack_d0[(uint)bVar7 * -2 + 9] = afStack_64[(uint)bVar7 * -2 + 0x12];
    afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    if (afStack_d0 + 0xb != afStack_d0 + 8) {
      fStack_a4 = fStack_b0;
      fStack_a0 = fStack_ac;
      fStack_9c = fStack_a8;
    }
  }
  else {
    uStack_104 = 0x3ecccccd;
    uStack_100 = 0;
    uStack_fc = 0;
    core_xform_cpp_FUN_00583260(&uStack_104,iVar4);
    fStack_bc = fStack_11c;
    afStack_d0[(uint)bVar7 * -2 + 6] = *(float *)((int)afStack_118 + (uint)bVar7 * 0xfffffff8);
    afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         *(float *)((int)afStack_f4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -8) * 4);
    if (afStack_d0 + 0xb != afStack_d0 + 5) {
      fStack_a4 = fStack_bc;
      fStack_a0 = fStack_b8;
      fStack_9c = fStack_b4;
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_20c,iVar3 * 0x30 + param_1 + 0xfd8);
  puVar5 = auStack_1ac;
  puVar6 = auStack_1dc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00583260(&fStack_ec,auStack_1dc);
  fStack_2c = afStack_7c[5];
  afStack_64[(uint)bVar7 * -2 + 0xf] = afStack_64[(uint)bVar7 * -2];
  afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_44 = fStack_a4 - fStack_2c;
  fStack_40 = fStack_a0 - fStack_28;
  fStack_3c = fStack_9c - fStack_24;
  fStack_38 = fStack_a4 - fStack_2c;
  afStack_64[(uint)bVar7 * -2 + 0xc] = afStack_64[(uint)bVar7 * -2 + 9];
  afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  fStack_1d0 = fStack_1d0 + fStack_38;
  fStack_1c0 = fStack_1c0 + fStack_34;
  fStack_1b0 = fStack_1b0 + fStack_30;
  puVar5 = auStack_1dc;
  puVar6 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  return unaff_ESI;
}
