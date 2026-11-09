// Name: core_ghoul.cpp_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e051f]]
// Convention: unknown
// Signature: undefined4 core_ghoul_cpp_FUN_004e0240(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_ghoul_cpp_FUN_004e0240(int param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10fc [1014];
  uint uVar4;
  float *pfVar5;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float fStack_90;
  float fStack_84;
  uint uStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
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
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  iVar2 = param_1 + 0x158;
  fStack_c = (float)core_motion_cpp_FUN_00524a40(iVar2,0xb);
  if (fStack_c <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_FUN_00569130(iVar2,_DAT_01cd0d9c);
  fStack_cc = fStack_a8;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 6] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0xf];
  uVar4 = _DAT_01cd0da4;
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 7] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x10];
  core_skeleton_cpp_FUN_00569130(iVar2,uVar4);
  afStack_e0[2] = fStack_9c;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 3] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x12];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 4] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x13];
  fStack_f0 = afStack_e0[2] + fStack_cc;
  fStack_ec = afStack_e0[3] + fStack_c8;
  fStack_e8 = fStack_d0 + fStack_c4;
  fStack_c0 = afStack_e0[2] + fStack_cc;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 9] =
       (float)*(uint *)((int)&stack0xffffff14 + (uint)bVar3 * -8);
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 10] =
       (float)*(uint *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  fStack_6c = fStack_c0 * _DAT_005e3d91;
  fStack_68 = fStack_bc * _DAT_005e3d91;
  fStack_64 = fStack_b8 * _DAT_005e3d91;
  fStack_108 = fStack_c0 * _DAT_005e3d91;
  *(float *)((int)&stack0xfffffefc + (uint)bVar3 * -8) = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x1e]
  ;
  *(float *)((int)&stack0xffffff00 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x1f];
  core_skeleton_cpp_FUN_00569130(iVar2,_DAT_01cd0da0);
  fStack_b4 = fStack_90;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 0xc] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x15];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0xd] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x16];
  core_skeleton_cpp_FUN_00569130(iVar2,_DAT_01cd0da8);
  fStack_114 = fStack_84;
  *(float *)((int)&stack0xfffffef0 + (uint)bVar3 * -8) = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x18]
  ;
  *(float *)((int)&stack0xfffffef4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x19];
  fStack_54 = fStack_114 + fStack_b4;
  fStack_50 = fStack_110 + fStack_b0;
  fStack_4c = fStack_10c + fStack_ac;
  fStack_48 = fStack_114 + fStack_b4;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 0x27] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x24];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x28] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x25];
  fVar1 = fStack_108;
  fStack_18 = fStack_48 * _DAT_005e3d91;
  fStack_14 = fStack_44 * _DAT_005e3d91;
  fStack_10 = fStack_40 * _DAT_005e3d91;
  fStack_24 = fStack_48 * _DAT_005e3d91;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 0x30] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x33];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x31] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x34];
  fStack_30 = fVar1 + fStack_24;
  fStack_2c = fStack_104 + fStack_20;
  fStack_28 = fStack_100 + fStack_1c;
  fStack_3c = fVar1 + fStack_24;
  afStack_e0[(uint)bVar3 * 0xfffffffe + 0x2a] = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x2d];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x2b] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x2e];
  pfVar5 = &stack0xffffff04;
  fStack_60 = fStack_3c * _DAT_005e3d91;
  fStack_5c = fStack_38 * _DAT_005e3d91;
  fStack_58 = fStack_34 * _DAT_005e3d91;
  fStack_fc = fStack_3c * _DAT_005e3d91;
  *(float *)((int)&stack0xffffff08 + (uint)bVar3 * 0xfffffffe * 4) =
       afStack_e0[(uint)bVar3 * 0xfffffffe + 0x21];
  *(float *)(&stack0xffffff0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x22];
  core_actor_cpp_FUN_00408b40(param_1,pfVar5);
  uStack_e4 = uStack_78;
  *(float *)((int)afStack_e0 + (uint)bVar3 * -8) = afStack_e0[(uint)bVar3 * 0xfffffffe + 0x1b];
  afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
       afStack_e0[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x1c];
  if (param_2 != &uStack_e4) {
    *param_2 = uStack_e4;
    param_2[1] = afStack_e0[0];
    param_2[2] = afStack_e0[1];
  }
  return 1;
}
