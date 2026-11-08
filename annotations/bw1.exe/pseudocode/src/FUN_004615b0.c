// Name: FUN_004615b0
// Address: 004615b0
// Address Range: [[004615b0, 004623aa]]
// Convention: unknown
// Signature: int FUN_004615b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004615b0(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_128c [1010];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *puVar7;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_22c;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
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
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint uStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar3 = 0;
  iStack_10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iStack_10 != 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b0) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc280));
    fStack_184 = fStack_238;
    (&stack0xfffffe80)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffdcc + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffdd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xfffffe7c) {
      fStack_1fc = fStack_184;
      fStack_1f8 = fStack_180;
      fStack_1f4 = fStack_17c;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc298));
    fStack_148 = fStack_dc;
    (&stack0xfffffebc)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff28 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffec0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xfffffeb8) {
      fStack_1d8 = fStack_148;
      fStack_1d4 = fStack_144;
      fStack_1d0 = fStack_140;
    }
    fStack_280 = fStack_1fc + fStack_1d8;
    fStack_27c = fStack_1f8 + fStack_1d4;
    fStack_278 = fStack_1f4 + fStack_1d0;
    fStack_94 = fStack_1fc + fStack_1d8;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffd84 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffd88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_70 = fStack_94 * _DAT_005d8ee0;
    fStack_6c = fStack_90 * _DAT_005d8ee0;
    fStack_68 = fStack_8c * _DAT_005d8ee0;
    fStack_124 = fStack_94 * _DAT_005d8ee0;
    (&stack0xfffffee0)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xfffffedc) {
      fStack_250 = fStack_124;
      fStack_24c = fStack_120;
      fStack_248 = fStack_11c;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    *(uint *)(param_3 + iStack_10 * 4) = *(uint *)(param_1 + 0xc2b0);
    iVar2 = iStack_10 + 1;
  }
  iStack_10 = iVar2;
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b4) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc284));
    fStack_1cc = fStack_274;
    (&stack0xfffffe38)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffd90 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffd94 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xfffffe34) {
      fStack_1fc = fStack_1cc;
      fStack_1f8 = fStack_1c8;
      fStack_1f4 = fStack_1c4;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc29c));
    fStack_f4 = fStack_25c;
    (&stack0xffffff10)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffda8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffdac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xffffff0c) {
      fStack_1d8 = fStack_f4;
      fStack_1d4 = fStack_f0;
      fStack_1d0 = fStack_ec;
    }
    fStack_160 = fStack_1fc + fStack_1d8;
    fStack_15c = fStack_1f8 + fStack_1d4;
    fStack_158 = fStack_1f4 + fStack_1d0;
    fStack_e8 = fStack_1fc + fStack_1d8;
    *(uint *)((int)&stack0xffffff1c + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffea4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff20 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffea8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_130 = fStack_e8 * _DAT_005d8ee0;
    fStack_12c = fStack_e4 * _DAT_005d8ee0;
    fStack_128 = fStack_e0 * _DAT_005d8ee0;
    fStack_58 = fStack_e8 * _DAT_005d8ee0;
    (&stack0xffffffac)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffed4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffed8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xffffffa8) {
      fStack_250 = fStack_58;
      fStack_24c = fStack_54;
      fStack_248 = fStack_50;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffe28) {
      *pfVar1 = fStack_1d8;
      pfVar1[1] = fStack_1d4;
      pfVar1[2] = fStack_1d0;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2b4);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b8) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc288));
    fStack_28 = fStack_178;
    (&stack0xffffffdc)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffe8c + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe90 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xffffffd8) {
      fStack_1fc = fStack_28;
      fStack_1f8 = fStack_24;
      fStack_1f4 = fStack_20;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc2a0));
    fStack_1c0 = fStack_16c;
    (&stack0xfffffe44)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffe98 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe48 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe9c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xfffffe40) {
      fStack_1d8 = fStack_1c0;
      fStack_1d4 = fStack_1bc;
      fStack_1d0 = fStack_1b8;
    }
    fStack_1c = fStack_1fc + fStack_1d8;
    fStack_18 = fStack_1f8 + fStack_1d4;
    fStack_14 = fStack_1f4 + fStack_1d0;
    fStack_190 = fStack_1fc + fStack_1d8;
    *(uint *)((int)&stack0xfffffe74 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe78 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_2a4 = fStack_190 * _DAT_005d8ee0;
    fStack_2a0 = fStack_18c * _DAT_005d8ee0;
    fStack_29c = fStack_188 * _DAT_005d8ee0;
    fStack_1a8 = fStack_190 * _DAT_005d8ee0;
    (&stack0xfffffe5c)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffd60 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe60 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffd64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xfffffe58) {
      fStack_250 = fStack_1a8;
      fStack_24c = fStack_1a4;
      fStack_248 = fStack_1a0;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    *(uint *)(iStack_10 * 4 + param_3) = *(uint *)(param_1 + 0xc2b8);
    iStack_10 = iStack_10 + 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2bc) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc28c));
    fStack_100 = fStack_118;
    (&stack0xffffff04)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffeec + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff08 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffef0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xffffff00) {
      fStack_1fc = fStack_100;
      fStack_1f8 = fStack_fc;
      fStack_1f4 = fStack_f8;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc2a4));
    fStack_214 = fStack_64;
    (&stack0xfffffdf0)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffdf4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xfffffdec) {
      fStack_1d8 = fStack_214;
      fStack_1d4 = fStack_210;
      fStack_1d0 = fStack_20c;
    }
    fStack_154 = fStack_1fc + fStack_1d8;
    fStack_150 = fStack_1f8 + fStack_1d4;
    fStack_14c = fStack_1f4 + fStack_1d0;
    fStack_1e4 = fStack_1fc + fStack_1d8;
    *(uint *)((int)&stack0xfffffe20 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffeb0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe24 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffeb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_298 = fStack_1e4 * _DAT_005d8ee0;
    fStack_294 = fStack_1e0 * _DAT_005d8ee0;
    fStack_290 = fStack_1dc * _DAT_005d8ee0;
    fStack_ac = fStack_1e4 * _DAT_005d8ee0;
    (&stack0xffffff58)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffd6c + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffd70 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xffffff54) {
      fStack_250 = fStack_ac;
      fStack_24c = fStack_a8;
      fStack_248 = fStack_a4;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2bc);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c0) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc290));
    fStack_28c = fStack_208;
    (&stack0xfffffd78)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffdfc + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe00 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xfffffd74) {
      fStack_1fc = fStack_28c;
      fStack_1f8 = fStack_288;
      fStack_1f4 = fStack_284;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc2a8));
    fStack_268 = fStack_1f0;
    (&stack0xfffffd9c)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffe14 + (uint)bVar3 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xfffffda0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffe18 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xfffffd98) {
      fStack_1d8 = fStack_268;
      fStack_1d4 = fStack_264;
      fStack_1d0 = fStack_260;
    }
    fStack_c4 = fStack_1fc + fStack_1d8;
    fStack_c0 = fStack_1f8 + fStack_1d4;
    fStack_bc = fStack_1f4 + fStack_1d0;
    fStack_244 = fStack_1fc + fStack_1d8;
    (&stack0xfffffdc0)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff40 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffdc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_b8 = fStack_244 * _DAT_005d8ee0;
    fStack_b4 = fStack_240 * _DAT_005d8ee0;
    fStack_b0 = fStack_23c * _DAT_005d8ee0;
    fStack_220 = fStack_244 * _DAT_005d8ee0;
    (&stack0xfffffde4)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff4c + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffde8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xfffffde0) {
      fStack_250 = fStack_220;
      fStack_24c = fStack_21c;
      fStack_248 = fStack_218;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2c0);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2c4) * 4) != 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc294));
    fStack_19c = fStack_10c;
    (&stack0xfffffe68)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffef8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe6c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffefc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe04 != &stack0xfffffe64) {
      fStack_1fc = fStack_19c;
      fStack_1f8 = fStack_198;
      fStack_1f4 = fStack_194;
    }
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc2ac));
    fStack_34 = fStack_22c;
    (&stack0xffffffd0)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xfffffdd8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffddc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffe28 != &stack0xffffffcc) {
      fStack_1d8 = fStack_34;
      fStack_1d4 = fStack_30;
      fStack_1d0 = fStack_2c;
    }
    fStack_d0 = fStack_1fc + fStack_1d8;
    fStack_cc = fStack_1f8 + fStack_1d4;
    fStack_c8 = fStack_1f4 + fStack_1d0;
    fStack_13c = fStack_1fc + fStack_1d8;
    *(uint *)((int)&stack0xfffffec8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff34 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffecc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_a0 = fStack_13c * _DAT_005d8ee0;
    fStack_9c = fStack_138 * _DAT_005d8ee0;
    fStack_98 = fStack_134 * _DAT_005d8ee0;
    fStack_1b4 = fStack_13c * _DAT_005d8ee0;
    (&stack0xfffffe50)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff64 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xfffffe54 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xfffffe4c) {
      fStack_250 = fStack_1b4;
      fStack_24c = fStack_1b0;
      fStack_248 = fStack_1ac;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(param_3 + iVar2) = *(uint *)(param_1 + 0xc2c4);
  }
  if (iStack_10 == 0) {
    FUN_00569130(param_1 + 0x158,*(uint *)(param_1 + 0xc268));
    fStack_7c = fStack_88;
    (&stack0xffffff88)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xfffffdb0 != &stack0xffffff84) {
      fStack_250 = fStack_7c;
      fStack_24c = fStack_78;
      fStack_248 = fStack_74;
    }
    pfVar1 = (float *)(iStack_10 * 0xc + param_2);
    if (pfVar1 != &stack0xfffffdb0) {
      *pfVar1 = fStack_250;
      pfVar1[1] = fStack_24c;
      pfVar1[2] = fStack_248;
    }
    iVar2 = iStack_10 * 4;
    iStack_10 = iStack_10 + 1;
    *(uint *)(iVar2 + param_3) = 0;
  }
  if ((((*(int *)(param_1 + 0xc9c0) == 0) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) &&
      (*(int *)(param_1 + 0xc2d0) < *(int *)(param_1 + 0xc2d4))) && (iStack_c = 0, 0 < iStack_10)) {
    do {
      FUN_00408b40(param_1,param_2);
      puVar7 = &DAT_00612258;
      uVar6 = 0x3f800000;
      uVar5 = 0x3f000000;
      uVar4 = 0x3f800000;
      uStack_4c = uStack_40;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      FUN_004b70f0(0x01C57074,&stack0xffffffb4,uVar4,uVar5,uVar6,puVar7);
      param_2 = param_2 + 0xc;
      iStack_c = iStack_c + 1;
    } while (iStack_c < iStack_10);
  }
  return iStack_10;
}
