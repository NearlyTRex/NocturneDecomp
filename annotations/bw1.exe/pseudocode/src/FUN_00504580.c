// Name: FUN_00504580
// Address: 00504580
// Address Range: [[00504580, 00504b0d]]
// Convention: unknown
// Signature: float FUN_00504580(int param_1,float *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float FUN_00504580(int param_1,float *param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_115c [1005];
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  byte *puVar10;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_168;
  uint uStack_15c;
  float fStack_150;
  float afStack_14c [5];
  byte auStack_138 [12];
  uint uStack_12c;
  float afStack_128 [4];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  float fStack_fc;
  uint uStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  float afStack_b4 [3];
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
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = FUN_00468900(param_1 + 0x158);
  fStack_1c = 1.01;
  puVar4 = (uint *)(iVar2 + 0x338);
  puVar5 = &stack0xfffffe74;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iStack_38 = param_1 + 0xaa0;
  iStack_2c = 0;
  piStack_28 = (int *)(param_1 + 0x5f0);
  do {
    piVar1 = piStack_28;
    if (*piStack_28 != 0) {
      fStack_e4 = *param_2 - (float)piStack_28[3];
      fStack_e0 = param_2[1] - (float)piStack_28[4];
      pfVar8 = afStack_98 + 5;
      fStack_dc = param_2[2] - (float)piStack_28[5];
      afStack_84[0] = *param_2 - (float)piStack_28[3];
      afStack_98[(uint)bVar6 * -2 + 6] = afStack_128[(uint)bVar6 * -2 + 0x12];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      piStack_34 = piVar1 + 9;
      FUN_0045f700(piStack_34,pfVar8);
      piVar1 = piStack_34;
      uStack_15c = uStack_12c;
      *(float *)((int)&stack0xfffffea8 + (uint)bVar6 * 0xfffffffe * 4) =
           afStack_128[(uint)bVar6 * -2];
      uVar9 = param_3;
      *(float *)(auStack_138 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0x1c) =
           afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_0045f700(piVar1,uVar9);
      puVar10 = auStack_a8;
      pfVar8 = afStack_128 + 0x1d;
      puVar4 = &stack0xfffffea4;
      puVar5 = &stack0xfffffe74;
      afStack_b4[0] = (float)uStack_d8;
      afStack_128[(uint)bVar6 * -2 + 0x1e] = afStack_128[(uint)bVar6 * -2 + 0x15];
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
      fStack_190 = (float)FUN_00420ee0(puVar5,puVar4,pfVar8,puVar10);
      fStack_14 = fStack_190;
      if ((0.0 <= fStack_190) && (fStack_190 < fStack_1c)) {
        fStack_1c = fStack_190;
        FUN_0045f690(piStack_34,auStack_a8);
        afStack_14c[2] = (float)uStack_c0;
        afStack_14c[(uint)bVar6 * 0xfffffffe + 3] = afStack_128[(uint)bVar6 * -2 + 0x1b];
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5] =
             afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        FUN_00408ac0(param_1,afStack_14c + 2);
        fStack_cc = fStack_fc;
        afStack_128[(uint)bVar6 * -2 + 0x18] = afStack_128[(uint)bVar6 * -2 + 0xc];
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
             afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (param_4 != afStack_128 + 0x17) {
          *param_4 = fStack_cc;
          param_4[1] = fStack_c8;
          param_4[2] = fStack_c4;
        }
      }
    }
    iStack_20 = iStack_38 + iStack_2c;
    iStack_18 = 0;
    do {
      iVar2 = iStack_20 + 0x3c + iStack_18;
      fStack_14 = (float)FUN_0048ff40(iVar2,param_2,param_3);
      fStack_198 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        pfVar8 = &stack0xfffffe8c;
        fStack_6c = -*(float *)(iVar2 + 0x24);
        fStack_68 = -*(float *)(iVar2 + 0x28);
        fStack_64 = -*(float *)(iVar2 + 0x2c);
        fStack_174 = -*(float *)(iVar2 + 0x24);
        *(float *)((int)&stack0xfffffe90 + (uint)bVar6 * 0xfffffffe * 4) =
             afStack_98[(uint)bVar6 * -2 + 0xc];
        *(float *)(&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        FUN_00408ac0(param_1,pfVar8);
        fStack_150 = fStack_168;
        *(uint *)((int)afStack_14c + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffe9c + (uint)bVar6 * -8);
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
             *(float *)(&stack0xfffffea0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (param_4 != &fStack_150) {
          *param_4 = fStack_150;
          param_4[1] = afStack_14c[0];
          param_4[2] = afStack_14c[1];
        }
      }
      iStack_18 = iStack_18 + 0x38;
    } while (iStack_18 != 0x70);
    iStack_2c = iStack_2c + 0xb8;
    piStack_28 = piStack_28 + 0x19;
  } while (iStack_2c != 0x8a0);
  iVar2 = FUN_00468900(param_1 + 0x450);
  if (&stack0xfffffe74 != (uint *)(iVar2 + 0x338)) {
    uStack_18c = *(uint *)(iVar2 + 0x338);
    uStack_188 = *(uint *)(iVar2 + 0x33c);
    uStack_184 = *(uint *)(iVar2 + 0x340);
  }
  if (&stack0xfffffe80 != (uint *)(iVar2 + 0x344)) {
    uStack_180 = *(uint *)(iVar2 + 0x344);
    uStack_17c = *(uint *)(iVar2 + 0x348);
    uStack_178 = *(uint *)(iVar2 + 0x34c);
  }
  iStack_24 = param_1 + 0x1340;
  iStack_3c = param_1 + 0x1400;
  do {
    iVar2 = iStack_24;
    if (0.0 < *(float *)(iStack_24 + 0x18)) {
      fStack_114 = *param_2 - *(float *)(iStack_24 + 0x1c);
      fStack_110 = param_2[1] - *(float *)(iStack_24 + 0x20);
      pfVar8 = afStack_98 + 0xe;
      fStack_10c = param_2[2] - *(float *)(iStack_24 + 0x24);
      afStack_60[0] = fStack_114;
      afStack_98[(uint)bVar6 * -2 + 0xf] = afStack_128[(uint)bVar6 * -2 + 6];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      iStack_30 = iVar2 + 0x34;
      FUN_0045f700(iStack_30,pfVar8);
      afStack_48[0] = (float)uStack_78;
      afStack_98[(uint)bVar6 * -2 + 0x15] = afStack_98[(uint)bVar6 * -2 + 9];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      FUN_0045f700(iStack_30,param_3);
      puVar10 = auStack_138;
      pfVar8 = afStack_98 + 0x11;
      pfVar7 = afStack_98 + 0x14;
      puVar4 = &stack0xfffffe74;
      afStack_54[0] = (float)uStack_108;
      afStack_98[(uint)bVar6 * -2 + 0x12] = afStack_128[(uint)bVar6 * -2 + 9];
      afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      fStack_14 = (float)FUN_00420ee0(puVar4,pfVar7,pfVar8,puVar10);
      fStack_194 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        FUN_0045f690(iStack_30,auStack_138);
        pfVar8 = afStack_98 + 2;
        afStack_98[2] = (float)uStack_f0;
        afStack_98[(uint)bVar6 * -2 + 3] = afStack_128[(uint)bVar6 * -2 + 0xf];
        afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        FUN_00408ac0(param_1,pfVar8);
        afStack_128[2] = fStack_9c;
        afStack_128[(uint)bVar6 * -2 + 3] = afStack_98[(uint)bVar6 * -2];
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (param_4 != afStack_128 + 2) {
          *param_4 = afStack_128[2];
          param_4[1] = afStack_128[3];
          param_4[2] = fStack_118;
        }
      }
    }
    iStack_24 = iStack_24 + 0x60;
  } while (iStack_24 != iStack_3c);
  return fStack_1c;
}
