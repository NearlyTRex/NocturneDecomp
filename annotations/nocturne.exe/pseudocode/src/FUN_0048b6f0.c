// Name: FUN_0048b6f0
// Address: 0048b6f0
// Address Range: [[0048b6f0, 0048c0c9]]
// Convention: unknown
// Signature: void FUN_0048b6f0(undefined4 param_1,float *param_2,float *param_3,float *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b6f0(uint param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c [12];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  double local_90;
  float *local_80;
  float *local_7c;
  float *local_78;
  float *local_74;
  float *local_70;
  float *local_6c;
  float *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  int local_54;
  float *local_50;
  float *local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  if (param_5 < 3) {
    local_20 = param_4 + 8;
    local_50 = param_4 + 9;
    local_4c = param_4 + 10;
    local_1c = param_4 + 0xb;
    local_18 = param_4 + 0xe;
    local_54 = param_5 + 1;
    local_60 = param_3 + 1;
    local_5c = param_3 + 2;
    local_80 = param_2 + 1;
    local_58 = param_2 + 2;
    while( true ) {
      FUN_00511840(0x01E57284,param_4[2],param_4[3],param_4[4],param_4[5]);
      local_e0 = *param_2;
      local_dc = *local_80;
      local_d8 = *local_58;
      local_134 = local_e0 + *param_3;
      local_130 = local_dc + param_3[1];
      local_12c = local_d8 + param_3[2];
      local_24 = (float *)FUN_0050fb00(0x01E57284,&local_e0,&local_134);
      local_90 = (double)(float)local_24;
      if ((local_90 < 0.0) || (1.0 <= local_90)) {
        local_110 = -*param_3;
        local_10c = -param_3[1];
        local_108 = -param_3[2];
        if (&local_a4 != &local_110) {
          local_a4 = local_110;
          local_a0 = local_10c;
          local_9c = local_108;
        }
        local_40 = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
        if (local_40 <= 0.0) {
          local_9c = 0.0;
          local_a0 = 0.0;
          local_a4 = 0.0;
        }
        else {
          fVar2 = 1.0 / local_40;
          local_a4 = local_a4 * fVar2;
          local_a0 = local_a0 * fVar2;
          local_9c = local_9c * fVar2;
        }
      }
      else {
        local_128 = *param_3 * (float)local_24;
        local_124 = param_3[1] * (float)local_24;
        local_120 = (float)local_24 * param_3[2];
        local_140 = *param_2 + local_128;
        local_13c = param_2[1] + local_124;
        local_138 = param_2[2] + local_120;
        if (&local_134 != &local_140) {
          local_134 = local_140;
          local_130 = local_13c;
          local_12c = local_138;
        }
        if (&local_a4 != (float *)(0x01E57284 + 0x14cd40)) {
          local_a4 = *(float *)(0x01E57284 + 0x14cd40);
          local_a0 = *(float *)(0x01E57284 + 0x14cd44);
          local_9c = *(float *)(0x01E57284 + 0x14cd48);
        }
      }
      iVar1 = *(int *)(0x01E57284 + 0x14cd5c);
      param_4[0x12] = 0.0;
      param_4[0x13] = 0.0;
      param_4[0x14] = 0.0;
      local_14 = local_24;
      if (iVar1 != 0) {
        pfVar3 = (float *)FUN_0040a290(iVar1,local_c8,param_2);
        if (pfVar3 != local_20) {
          *local_20 = *pfVar3;
          local_20[1] = pfVar3[1];
          local_20[2] = pfVar3[2];
        }
        pfVar3 = (float *)FUN_0040a290(iVar1,local_b0,0x01E57284 + 0x14cd50);
        if (pfVar3 != local_1c) {
          *local_1c = *pfVar3;
          local_1c[1] = pfVar3[1];
          local_1c[2] = pfVar3[2];
        }
        pfVar3 = (float *)FUN_0040a220(iVar1,local_11c,0x01E57284 + 0x14cd40);
        if (pfVar3 != local_18) {
          *local_18 = *pfVar3;
          local_18[1] = pfVar3[1];
          local_18[2] = pfVar3[2];
        }
        if ((((param_5 == 0) && (param_4[6] != 0.0)) &&
            (iVar4 = FUN_0040d890(iVar1,DAT_00765a98), iVar4 != 0)) &&
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xd8))(iVar4), iVar4 != 0)) {
          param_4[4] = 3.57331e-43;
          param_4[5] = 0.0;
          param_4[3] = 3.57331e-43;
        }
        local_ec = *param_3;
        local_e8 = *local_60;
        local_e4 = *local_5c;
        local_48 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_48 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar2 = 1.0 / local_48;
          local_ec = local_ec * fVar2;
          local_e8 = local_e8 * fVar2;
          local_e4 = local_e4 * fVar2;
        }
        fVar2 = local_e4 * param_3[2] + local_ec * *param_3 + local_e8 * param_3[1];
        local_98 = (double)fVar2;
        if ((float)_DAT_005814ec < fVar2) {
          if (local_98 < 1.0) {
            fVar5 = (float10)fVar2;
            FUN_00565ca4();
            local_2c = (float)fVar5;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        param_4[0x11] = local_2c;
        (**(code **)(*(int *)(iVar1 + 0x14c) + 0xac))(iVar1,param_4);
      }
      local_28 = 0.0;
      if (param_4[7] != 0.0) {
        local_28 = *param_4;
      }
      if (0.0 < param_4[0x14]) {
        local_30 = (local_9c * param_3[2] + local_a4 * *param_3 + local_a0 * param_3[1]) *
                   _DAT_005814dc;
        local_d4 = local_a4 * local_30;
        local_d0 = local_a0 * local_30;
        local_cc = local_9c * local_30;
        local_bc = local_d4 - *param_3;
        local_b8 = local_d0 - param_3[1];
        local_f8 = -local_bc;
        local_b4 = local_cc - param_3[2];
        local_f4 = -local_b8;
        local_f0 = -local_b4;
        if (&local_bc != &local_f8) {
          local_bc = local_f8;
          local_b8 = local_f4;
          local_b4 = local_f0;
        }
        local_34 = local_1c + 1;
        local_3c = local_1c + 2;
        local_38 = local_18 + 1;
        local_44 = local_18 + 2;
        FUN_005113e0(0x01E57284,*param_4 * param_4[0x14],param_4[1],param_4[2],param_4[3],
                     param_4[4],param_4[5],param_4[6],param_4[7],*local_20,*local_50,*local_4c,
                     *local_1c,*local_34,*local_3c,*local_18,*local_38,*local_44,param_4[0x11],
                     param_4[0x12],param_4[0x13],param_4[0x14]);
        FUN_00511750(0x01E57284);
        local_23c = *param_4;
        local_238 = param_4[1];
        local_234 = param_4[2];
        local_230 = param_4[3];
        local_22c = param_4[4];
        local_228 = param_4[5];
        local_224 = param_4[6];
        local_220 = param_4[7];
        local_21c = *local_20;
        local_218 = *local_50;
        local_214 = *local_4c;
        local_210 = *local_1c;
        local_20c = *local_34;
        local_208 = *local_3c;
        local_204 = *local_18;
        local_200 = *local_38;
        local_1fc = *local_44;
        local_1f8 = param_4[0x11];
        local_1f4 = param_4[0x12];
        local_1f0 = param_4[0x13];
        local_1ec = param_4[0x14];
        FUN_0048b6f0(param_1,&local_134,&local_bc,&local_23c,local_54);
        FUN_00511590(0x01E57284);
        local_28 = (1.0 - param_4[0x14]) * (float)_DAT_005814e4 * local_28;
      }
      if (param_4[0x12] <= 0.0) goto LAB_0048bfa9;
      if ((param_4[0x12] != 1.0) || (param_4[0x13] != param_4[0x11])) break;
      FUN_00511780(0x01E57284,iVar1);
    }
    local_104 = *param_3;
    local_100 = param_3[1];
    local_fc = param_3[2];
    local_190 = param_4[1];
    local_18c = param_4[2];
    local_188 = param_4[3];
    local_184 = param_4[4];
    local_180 = param_4[5];
    local_17c = param_4[6];
    local_178 = param_4[7];
    local_7c = param_4 + 8;
    local_174 = *local_7c;
    local_78 = param_4 + 9;
    local_170 = *local_78;
    local_74 = param_4 + 10;
    local_16c = *local_74;
    local_168 = param_4[0xb];
    local_64 = param_4 + 0xc;
    local_164 = *local_64;
    local_70 = param_4 + 0xd;
    local_160 = *local_70;
    local_6c = param_4 + 0xe;
    local_15c = *local_6c;
    local_68 = param_4 + 0xf;
    local_158 = *local_68;
    local_14 = param_4 + 0x10;
    local_154 = *local_14;
    local_150 = param_4[0x11];
    local_14c = param_4[0x12];
    local_148 = param_4[0x13];
    local_144 = param_4[0x14];
    local_194 = *param_4 * param_4[0x12];
    FUN_00511750(0x01E57284);
    FUN_00511780(0x01E57284,iVar1);
    local_1e8 = *param_4;
    local_1e4 = param_4[1];
    local_1e0 = param_4[2];
    local_1dc = param_4[3];
    local_1d8 = param_4[4];
    local_1d4 = param_4[5];
    local_1d0 = param_4[6];
    local_1cc = param_4[7];
    local_1c8 = *local_7c;
    local_1c4 = *local_78;
    local_1c0 = *local_74;
    local_1bc = param_4[0xb];
    local_1b8 = *local_64;
    local_1b4 = *local_70;
    local_1b0 = *local_6c;
    local_1ac = *local_68;
    local_1a8 = *local_14;
    local_1a4 = param_4[0x11];
    local_1a0 = param_4[0x12];
    local_19c = param_4[0x13];
    local_198 = param_4[0x14];
    FUN_0048b6f0(param_1,&local_134,&local_104,&local_1e8,param_5 + 1);
    local_28 = (1.0 - param_4[0x12]) * (float)_DAT_005814e4 * local_28;
LAB_0048bfa9:
    FUN_0048b370(param_1,&local_e0,&local_134,*param_4,local_28,&local_a4,param_4[3],param_4[4],
                 param_4[5],param_4[1]);
  }
  return;
}
