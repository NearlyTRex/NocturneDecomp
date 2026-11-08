// Name: FUN_004b6420
// Address: 004b6420
// Address Range: [[004b6420, 004b6c56]]
// Convention: unknown
// Signature: void FUN_004b6420(undefined4 param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,int param_11,float param_12,undefined4 param_13,undefined4 param_14,float param_15,undefined4 param_16,undefined4 param_17,float param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6420(uint param_1,float *param_2,float *param_3,float param_4,uint param_5,uint param_6,uint param_7,uint param_8,int param_9,int param_10,int param_11,float param_12,uint param_13,uint param_14,float param_15,uint param_16,uint param_17,float param_18,uint param_19,uint param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_1148 [987];
  uint uStack_1a4;
  uint uStack_1a0;
  float *pfStack_19c;
  float *pfStack_198;
  float fStack_194;
  float fStack_190;
  float *pfStack_18c;
  uint uStack_188;
  int iStack_184;
  float *pfStack_180;
  float *pfStack_17c;
  double dStack_178;
  double local_170;
  float local_168;
  float local_164;
  float fStack_160;
  float afStack_15c [4];
  uint local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  uint local_108;
  uint local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_e4;
  uint local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8;
  uint local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [3];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float afStack_48 [5];
  int local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  int local_20;
  float local_18;
  
  bVar6 = 0;
  if (param_25 < 3) {
    local_34 = param_25 + 1;
    while( true ) {
      pfStack_17c = (float *)param_9;
      pfStack_180 = (float *)param_8;
      iStack_184 = param_7;
      uStack_188 = param_6;
      pfStack_18c = (float *)0x01E82168;
      fStack_190 = 6.923685e-39;
      FUN_00559310();
      pfStack_17c = afStack_15c + 0x3e;
      local_100 = *param_2;
      afStack_15c[(uint)bVar6 * -2 + 0x18] = param_2[(uint)bVar6 * -2 + 1];
      afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           (param_2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      pfStack_180 = afStack_15c + 0x17;
      iStack_184 = 0x01E82168;
      local_118 = local_100 + *param_3;
      local_114 = local_fc + param_3[1];
      local_110 = local_f8 + param_3[2];
      local_64 = local_100 + *param_3;
      afStack_15c[(uint)bVar6 * -2 + 0x3f] = afStack_15c[(uint)bVar6 * -2 + 0x12];
      afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x40] =
           afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      uStack_188 = 0x4b64cb;
      local_18 = (float)FUN_00557300();
      local_164 = local_18;
      local_170 = (double)local_18;
      if ((local_170 < 0.0) || (1.0 <= local_170)) {
        local_138 = -param_3[1];
        local_134 = -param_3[2];
        local_13c = -*param_3;
        local_d0 = -*param_3;
        afStack_15c[(uint)bVar6 * -2 + 0x24] = afStack_15c[(uint)bVar6 * -2 + 9];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if (afStack_15c + 0x41 != afStack_15c + 0x23) {
          local_58 = local_d0;
          local_54 = local_cc;
          local_50 = local_c8;
        }
        local_2c = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
        if (local_2c <= 0.0) {
          local_54 = 0.0;
          local_58 = 0.0;
          local_50 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_2c;
          local_58 = local_58 * fVar1;
          local_54 = local_54 * fVar1;
          local_50 = local_50 * fVar1;
        }
      }
      else {
        local_148 = *param_3 * local_18;
        local_144 = param_3[1] * local_18;
        local_140 = param_3[2] * local_18;
        local_c4 = *param_3 * local_18;
        afStack_15c[(uint)bVar6 * -2 + 0x27] = afStack_15c[(uint)bVar6 * -2 + 6];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        local_b8 = *param_2 + local_c4;
        local_b4 = param_2[1] + local_c0;
        local_b0 = param_2[2] + local_bc;
        local_ac = *param_2 + local_c4;
        afStack_15c[(uint)bVar6 * -2 + 0x2d] = afStack_15c[(uint)bVar6 * -2 + 0x2a];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
        if (afStack_15c + 0x3e != afStack_15c + 0x2c) {
          local_64 = local_ac;
          local_60 = local_a8;
          local_5c = local_a4;
        }
        if (afStack_15c + 0x41 != (float *)(0x01E82168 + 0x14d128)) {
          local_58 = *(float *)(0x01E82168 + 0x14d128);
          local_54 = *(float *)(0x01E82168 + 0x14d12c);
          local_50 = *(float *)(0x01E82168 + 0x14d130);
        }
      }
      pfStack_180 = *(float **)(0x01E82168 + 0x14d144);
      local_20 = (int)pfStack_180;
      param_22 = 0.0;
      param_23 = 0.0;
      param_24 = 0.0;
      if (pfStack_180 != (float *)0x0) {
        pfStack_17c = param_2;
        iStack_184 = 0x4b6632;
        FUN_00408bb0();
        local_e8 = local_7c;
        afStack_15c[(uint)bVar6 * -2 + 0x1e] = afStack_15c[(uint)bVar6 * -2 + 0x39];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3a];
        if (&param_12 != afStack_15c + 0x1d) {
          param_12 = local_e8;
          param_13 = local_e4;
          param_14 = local_e0;
        }
        pfStack_17c = (float *)(0x01E82168 + 0x14d138);
        pfStack_180 = (float *)local_20;
        iStack_184 = 0x4b668b;
        FUN_00408bb0();
        afStack_15c[2] = local_124;
        afStack_15c[(uint)bVar6 * -2 + 3] = afStack_15c[(uint)bVar6 * -2 + 0xf];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        if (&param_15 != afStack_15c + 2) {
          param_15 = afStack_15c[2];
          param_16 = afStack_15c[3];
          param_17 = local_14c;
        }
        pfStack_17c = (float *)(0x01E82168 + 0x14d128);
        pfStack_180 = (float *)local_20;
        iStack_184 = 0x4b66d5;
        FUN_00408b00();
        iVar3 = param_25;
        local_10c = local_130;
        afStack_15c[(uint)bVar6 * -2 + 0x15] = afStack_15c[(uint)bVar6 * -2 + 0xc];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (&param_18 != afStack_15c + 0x14) {
          param_18 = local_10c;
          param_19 = local_108;
          param_20 = local_104;
        }
        if ((param_25 == 0) && (param_10 != 0)) {
          pfStack_17c = (float *)DAT_007c637c;
          pfStack_180 = (float *)local_20;
          iStack_184 = 0x4b6720;
          pfStack_17c = (float *)FUN_0040c600();
          if (pfStack_17c != (float *)0x0) {
            pfStack_180 = (float *)0x4b6734;
            iVar2 = (**(code **)(*(int *)((int)pfStack_17c + 0x154) + 0xe0))();
            if (iVar2 != 0) {
              param_9 = iVar3;
              param_8 = 0xff;
              param_7 = 0xff;
            }
          }
        }
        local_f4 = *param_3;
        afStack_15c[(uint)bVar6 * -2 + 0x1b] = param_3[(uint)bVar6 * -2 + 1];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             (param_3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        local_30 = SQRT(local_ec * local_ec + local_f4 * local_f4 + local_f0 * local_f0);
        if (local_30 <= 0.0) {
          local_f0 = 0.0;
          local_f4 = 0.0;
          local_ec = 0.0;
        }
        else {
          fVar1 = 1.0 / local_30;
          local_f4 = local_f4 * fVar1;
          local_f0 = local_f0 * fVar1;
          local_ec = local_ec * fVar1;
        }
        fVar1 = local_ec * param_3[2] + local_f4 * *param_3 + local_f0 * param_3[1];
        dStack_178 = (double)fVar1;
        if ((float)_DAT_005df634 < fVar1) {
          if (dStack_178 < 1.0) {
            fVar7 = (float10)fVar1;
            pfStack_17c = (float *)0x4b6c2f;
            FUN_005c1d04();
            fStack_24 = (float)fVar7;
          }
          else {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 3.1415927;
        }
        param_21 = fStack_24;
        pfStack_17c = &param_4;
        pfStack_180 = (float *)local_20;
        iStack_184 = 0x4b6837;
        (**(code **)(*(int *)(local_20 + 0x154) + 0xb4))();
      }
      local_168 = 0.0;
      if (param_11 != 0) {
        local_168 = param_4;
      }
      if (0.0 < param_24) {
        fStack_28 = (local_50 * param_3[2] + local_58 * *param_3 + local_54 * param_3[1]) *
                    _DAT_005df628;
        fStack_dc = local_58 * fStack_28;
        fStack_d8 = local_54 * fStack_28;
        fStack_d4 = local_50 * fStack_28;
        fStack_88 = local_58 * fStack_28;
        afStack_15c[(uint)bVar6 * -2 + 0x36] = afStack_15c[(uint)bVar6 * -2 + 0x21];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x37] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        fStack_4c = fStack_88 - *param_3;
        afStack_48[0] = fStack_84 - param_3[1];
        afStack_48[1] = fStack_80 - param_3[2];
        fStack_160 = fStack_88 - *param_3;
        afStack_15c[(uint)bVar6 * -2] = afStack_48[(uint)bVar6 * -2];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_70 = -fStack_160;
        fStack_6c = -afStack_15c[0];
        fStack_68 = -afStack_15c[1];
        fStack_a0 = -fStack_160;
        afStack_15c[(uint)bVar6 * -2 + 0x30] = afStack_15c[(uint)bVar6 * -2 + 0x3c];
        afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31] =
             afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
        if (&fStack_160 != afStack_15c + 0x2f) {
          fStack_160 = fStack_a0;
          afStack_15c[0] = fStack_9c;
          afStack_15c[1] = fStack_98;
        }
        pfStack_17c = (float *)0x01E82168;
        pfStack_180 = (float *)0x4b69a7;
        FUN_00558eb0();
        pfStack_17c = (float *)0x01E82168;
        pfStack_180 = (float *)0x4b69b6;
        FUN_00559220();
        pfStack_17c = (float *)local_34;
        puVar4 = &param_4;
        puVar5 = (uint *)&stack0xfffffe30;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        FUN_004b6420(param_1,afStack_15c + 0x3e,&fStack_160);
        pfStack_17c = (float *)0x01E82168;
        pfStack_180 = (float *)0x4b69f5;
        FUN_00559060();
        local_168 = (1.0 - param_24) * (float)_DAT_005df62c * local_168;
      }
      if (param_22 <= 0.0) goto LAB_004b6aac;
      if ((param_22 != 1.0) || (param_23 != param_21)) break;
      pfStack_17c = (float *)local_20;
      pfStack_180 = (float *)0x01E82168;
      iStack_184 = 0x4b6c4f;
      FUN_00559250();
    }
    pfStack_17c = (float *)0x01E82168;
    afStack_94[0] = *param_3;
    afStack_15c[(uint)bVar6 * -2 + 0x33] = param_3[(uint)bVar6 * -2 + 1];
    afStack_15c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x34] =
         (param_3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pfStack_180 = (float *)0x4b6a4d;
    FUN_00559220();
    pfStack_17c = (float *)local_20;
    pfStack_180 = (float *)0x01E82168;
    iStack_184 = 0x4b6a64;
    FUN_00559250();
    pfStack_17c = (float *)(param_25 + 1);
    puVar4 = &param_4;
    puVar5 = (uint *)&stack0xfffffe30;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_004b6420(param_1,afStack_15c + 0x3e,afStack_15c + 0x32);
    local_168 = (1.0 - param_22) * (float)_DAT_005df62c * local_168;
LAB_004b6aac:
    pfStack_17c = (float *)param_5;
    pfStack_180 = (float *)param_9;
    iStack_184 = param_8;
    uStack_188 = param_7;
    pfStack_18c = afStack_15c + 0x41;
    fStack_190 = local_168;
    pfStack_198 = afStack_15c + 0x3e;
    fStack_194 = param_4;
    pfStack_19c = afStack_15c + 0x17;
    uStack_1a0 = param_1;
    uStack_1a4 = 0x4b6ae3;
    FUN_004b6070();
  }
  return;
}
