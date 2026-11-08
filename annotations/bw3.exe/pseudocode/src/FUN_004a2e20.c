// Name: FUN_004a2e20
// Address: 004a2e20
// Address Range: [[004a2e20, 004a36df]]
// Convention: unknown
// Signature: void FUN_004a2e20(undefined4 param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,int param_11,float param_12,undefined4 param_13,undefined4 param_14,float param_15,undefined4 param_16,undefined4 param_17,float param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2e20(uint param_1,float *param_2,float *param_3,float param_4,uint param_5,uint param_6,uint param_7,uint param_8,int param_9,int param_10,int param_11,float param_12,uint param_13,uint param_14,float param_15,uint param_16,uint param_17,float param_18,uint param_19,uint param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
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
  double local_178;
  double dStack_170;
  float local_168;
  float local_164;
  float local_160;
  float local_15c [4];
  uint local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float local_13c;
  uint local_138;
  uint local_134;
  float local_130;
  float local_124;
  uint local_120;
  uint local_11c;
  float local_118;
  uint local_114;
  uint local_110;
  float local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4 [4];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  uint local_c0;
  uint local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [3];
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  int local_18;
  float local_14;
  
  bVar7 = 0;
  if (param_25 < 3) {
    local_30 = param_25 + 1;
    while( true ) {
      pfStack_17c = (float *)param_9;
      pfStack_180 = (float *)param_8;
      iStack_184 = param_7;
      uStack_188 = param_6;
      pfStack_18c = (float *)0x01ED78C8;
      fStack_190 = 6.812478e-39;
      FUN_0053ecd0();
      pfStack_17c = local_e4 + 8;
      local_e8 = *param_2;
      local_e4[(uint)bVar7 * -2] = param_2[(uint)bVar7 * -2 + 1];
      local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           (param_2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      pfStack_180 = local_15c + 0x1d;
      iStack_184 = 0x01ED78C8;
      local_100 = local_e8 + *param_3;
      local_fc = local_e4[0] + param_3[1];
      local_f8 = local_e4[1] + param_3[2];
      local_c4 = local_e8 + *param_3;
      local_e4[(uint)bVar7 * -2 + 9] = local_15c[(uint)bVar7 * -2 + 0x18];
      local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
      uStack_188 = 0x4a2edd;
      local_14 = (float)FUN_0053ccc0();
      local_164 = local_14;
      local_178 = (double)local_14;
      if ((local_178 < 0.0) || (1.0 <= local_178)) {
        local_54 = -param_3[1];
        local_50 = -param_3[2];
        local_58 = -*param_3;
        local_d0 = -*param_3;
        local_e4[(uint)bVar7 * -2 + 6] = local_e4[(uint)bVar7 * -2 + 0x24];
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
        if (local_15c + 0x1a != local_e4 + 5) {
          local_f4 = local_d0;
          local_f0 = local_cc;
          local_ec = local_c8;
        }
        local_28 = SQRT(local_ec * local_ec + local_f4 * local_f4 + local_f0 * local_f0);
        if (local_28 <= 0.0) {
          local_f0 = 0.0;
          local_f4 = 0.0;
          local_ec = 0.0;
        }
        else {
          fVar1 = 1.0 / local_28;
          local_f4 = local_f4 * fVar1;
          local_f0 = local_f0 * fVar1;
          local_ec = local_ec * fVar1;
        }
      }
      else {
        local_a0 = *param_3 * local_14;
        local_9c = param_3[1] * local_14;
        local_98 = param_3[2] * local_14;
        local_64 = *param_3 * local_14;
        local_e4[(uint)bVar7 * -2 + 0x21] = local_e4[(uint)bVar7 * -2 + 0x12];
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        local_70 = *param_2 + local_64;
        local_6c = param_2[1] + local_60;
        local_68 = param_2[2] + local_5c;
        local_118 = *param_2 + local_64;
        local_15c[(uint)bVar7 * -2 + 0x12] = local_e4[(uint)bVar7 * -2 + 0x1e];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f];
        if (local_e4 + 8 != local_15c + 0x11) {
          local_c4 = local_118;
          local_c0 = local_114;
          local_bc = local_110;
        }
        if (local_15c + 0x1a != (float *)(0x01ED78C8 + 0x14d128)) {
          local_f4 = *(float *)(0x01ED78C8 + 0x14d128);
          local_f0 = *(float *)(0x01ED78C8 + 0x14d12c);
          local_ec = *(float *)(0x01ED78C8 + 0x14d130);
        }
      }
      pfStack_180 = *(float **)(0x01ED78C8 + 0x14d144);
      local_18 = (int)pfStack_180;
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      local_2c = *(int *)(iVar4 + 0x20b8c);
      *(uint *)(iVar4 + 0x20b8c) = 0;
      param_22 = 0.0;
      param_23 = 0.0;
      param_24 = 0.0;
      if (pfStack_180 != (float *)0x0) {
        pfStack_17c = param_2;
        iStack_184 = 0x4a3433;
        FUN_00408bf0();
        local_124 = local_7c;
        local_15c[(uint)bVar7 * -2 + 0xf] = local_e4[(uint)bVar7 * -2 + 0x1b];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
        if (&param_12 != local_15c + 0xe) {
          param_12 = local_124;
          param_13 = local_120;
          param_14 = local_11c;
        }
        pfStack_17c = (float *)(0x01ED78C8 + 0x14d138);
        pfStack_180 = (float *)local_18;
        iStack_184 = 0x4a3484;
        FUN_00408bf0();
        local_15c[2] = local_130;
        local_15c[(uint)bVar7 * -2 + 3] = local_15c[(uint)bVar7 * -2 + 0xc];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        if (&param_15 != local_15c + 2) {
          param_15 = local_15c[2];
          param_16 = local_15c[3];
          param_17 = local_14c;
        }
        pfStack_17c = (float *)(0x01ED78C8 + 0x14d128);
        pfStack_180 = (float *)local_18;
        iStack_184 = 0x4a34ce;
        FUN_00408b40();
        iVar4 = param_25;
        local_13c = local_10c;
        local_15c[(uint)bVar7 * -2 + 9] = local_15c[(uint)bVar7 * -2 + 0x15];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        if (&param_18 != local_15c + 8) {
          param_18 = local_13c;
          param_19 = local_138;
          param_20 = local_134;
        }
        if ((param_25 == 0) && (param_10 != 0)) {
          pfStack_17c = (float *)DAT_007e2cec;
          pfStack_180 = (float *)local_18;
          iStack_184 = 0x4a3519;
          pfStack_17c = (float *)FUN_0040c840();
          if (pfStack_17c != (float *)0x0) {
            pfStack_180 = (float *)0x4a352d;
            iVar2 = (**(code **)(*(int *)((int)pfStack_17c + 0x154) + 0xe0))();
            if (iVar2 != 0) {
              param_9 = iVar4;
              param_8 = 0xff;
              param_7 = 0xff;
            }
          }
        }
        pfStack_17c = (float *)_DAT_01c5bc48;
        pfStack_180 = (float *)local_18;
        iStack_184 = 0x4a3556;
        iVar4 = FUN_0040c840();
        if (iVar4 != 0) {
          pfStack_180 = (float *)0x4a356c;
          pfStack_17c = (float *)iVar4;
          iVar3 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))();
          iVar2 = _DAT_01d5ba14;
          if (iVar3 == 0) {
            *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b8c) = iVar4;
            iVar4 = *(int *)(iVar2 * 4 + 0x1d5ba04);
            if (local_2c == *(int *)(iVar4 + 0x20b8c)) {
              return;
            }
            *(uint *)(iVar4 + 0x20b90) = 0;
            return;
          }
        }
        fStack_148 = *param_3;
        local_15c[(uint)bVar7 * -2 + 6] = param_3[(uint)bVar7 * -2 + 1];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             (param_3 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        fStack_24 = SQRT(fStack_140 * fStack_140 + fStack_148 * fStack_148 + fStack_144 * fStack_144
                        );
        if (fStack_24 <= 0.0) {
          fStack_144 = 0.0;
          fStack_148 = 0.0;
          fStack_140 = 0.0;
        }
        else {
          fVar1 = 1.0 / fStack_24;
          fStack_148 = fStack_148 * fVar1;
          fStack_144 = fStack_144 * fVar1;
          fStack_140 = fStack_140 * fVar1;
        }
        fVar1 = fStack_140 * param_3[2] + fStack_148 * *param_3 + fStack_144 * param_3[1];
        dStack_170 = (double)fVar1;
        if ((float)_DAT_005c09f0 < fVar1) {
          if (dStack_170 < 1.0) {
            fVar8 = (float10)fVar1;
            pfStack_17c = (float *)0x4a36b9;
            FUN_005a4b74();
            fStack_1c = (float)fVar8;
          }
          else {
            fStack_1c = 0.0;
          }
        }
        else {
          fStack_1c = 3.1415927;
        }
        pfStack_17c = &param_4;
        param_21 = fStack_1c;
        pfStack_180 = (float *)local_18;
        iStack_184 = 0x4a363f;
        (**(code **)(*(int *)(local_18 + 0x154) + 0xb4))();
      }
      local_168 = 0.0;
      if (param_11 != 0) {
        local_168 = param_4;
      }
      if (0.0 < param_24) {
        local_20 = (local_ec * param_3[2] + local_f4 * *param_3 + local_f0 * param_3[1]) *
                   _DAT_005c09e4;
        local_b8 = local_f4 * local_20;
        local_b4 = local_f0 * local_20;
        local_b0 = local_ec * local_20;
        local_160 = local_f4 * local_20;
        local_15c[(uint)bVar7 * -2] = local_e4[(uint)bVar7 * -2 + 0xc];
        local_15c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        local_ac = local_160 - *param_3;
        local_a8 = local_15c[0] - param_3[1];
        local_a4 = local_15c[1] - param_3[2];
        local_e4[2] = local_160 - *param_3;
        local_e4[(uint)bVar7 * -2 + 3] = local_e4[(uint)bVar7 * -2 + 0xf];
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
        local_4c = -local_e4[2];
        local_48 = -local_e4[3];
        local_44 = -local_d4;
        local_94 = -local_e4[2];
        local_e4[(uint)bVar7 * -2 + 0x15] = local_e4[(uint)bVar7 * -2 + 0x27];
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
             local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x28];
        if (local_e4 + 2 != local_e4 + 0x14) {
          local_e4[2] = local_94;
          local_e4[3] = local_90;
          local_d4 = local_8c;
        }
        pfStack_17c = (float *)0x01ED78C8;
        pfStack_180 = (float *)0x4a31c7;
        FUN_0053e870();
        pfStack_17c = (float *)0x01ED78C8;
        pfStack_180 = (float *)0x4a31d6;
        FUN_0053ebe0();
        pfStack_17c = (float *)local_30;
        puVar5 = &param_4;
        puVar6 = (uint *)&stack0xfffffe30;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        FUN_004a2e20(param_1,local_e4 + 8,local_e4 + 2);
        pfStack_17c = (float *)0x01ED78C8;
        pfStack_180 = (float *)0x4a3218;
        FUN_0053ea20();
        local_168 = (1.0 - param_24) * (float)_DAT_005c09e8 * local_168;
      }
      if (param_22 <= 0.0) goto LAB_004a32cf;
      if ((param_22 != 1.0) || (param_23 != param_21)) break;
      pfStack_17c = (float *)local_18;
      pfStack_180 = (float *)0x01ED78C8;
      iStack_184 = 0x4a36d8;
      FUN_0053ec10();
    }
    pfStack_17c = (float *)0x01ED78C8;
    local_88[0] = *param_3;
    local_e4[(uint)bVar7 * -2 + 0x18] = param_3[(uint)bVar7 * -2 + 1];
    local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         (param_3 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    pfStack_180 = (float *)0x4a3270;
    FUN_0053ebe0();
    pfStack_17c = (float *)local_18;
    pfStack_180 = (float *)0x01ED78C8;
    iStack_184 = 0x4a3287;
    FUN_0053ec10();
    pfStack_17c = (float *)(param_25 + 1);
    puVar5 = &param_4;
    puVar6 = (uint *)&stack0xfffffe30;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004a2e20(param_1,local_e4 + 8,local_e4 + 0x17);
    local_168 = (1.0 - param_22) * (float)_DAT_005c09e8 * local_168;
LAB_004a32cf:
    pfStack_17c = (float *)param_5;
    pfStack_180 = (float *)param_9;
    iStack_184 = param_8;
    uStack_188 = param_7;
    pfStack_18c = local_15c + 0x1a;
    fStack_190 = local_168;
    pfStack_198 = local_e4 + 8;
    fStack_194 = param_4;
    pfStack_19c = local_15c + 0x1d;
    uStack_1a0 = param_1;
    uStack_1a4 = 0x4a3306;
    FUN_004a2aa0();
  }
  return;
}
