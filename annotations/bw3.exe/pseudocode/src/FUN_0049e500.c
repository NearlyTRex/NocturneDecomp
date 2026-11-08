// Name: FUN_0049e500
// Address: 0049e500
// Address Range: [[0049e500, 0049f370]]
// Convention: unknown
// Signature: void FUN_0049e500(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e500(float *param_1)

{
  byte *puVar1;
  float fVar2;
  int *piVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1140 [6];
  int aiStackY_1128 [6];
  float afStackY_1110 [39];
  int aiStackY_1074 [9];
  float afStackY_1050 [931];
  uint *puVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  float local_194;
  float local_188;
  byte local_180 [4];
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  float local_158;
  float local_154 [2];
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  int aiStack_13c [4];
  int local_12c;
  float local_128;
  float local_124 [2];
  int local_11c;
  int local_118;
  int local_114;
  float local_110;
  float local_10c [4];
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float local_dc [4];
  float local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  float local_bc;
  float afStack_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  uint local_8c;
  int aiStack_88 [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float afStack_64 [4];
  float local_54;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if (param_1[3] <= 0.0) {
    return;
  }
  fVar2 = param_1[9];
  if (fVar2 == 2.8026e-45) {
    fVar5 = (float10)param_1[7];
    FUN_005a3120();
    local_18 = (float)(int)ROUND(fVar5);
    puVar1 = &DAT_005fd7ec + (int)local_18 * 0x18;
LAB_0049e569:
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    param_1[3] = 0.0;
  }
  else {
    if (fVar2 == 9.80909e-45) {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      puVar1 = &DAT_005fd804 + (int)local_18 * 0x18;
      goto LAB_0049e569;
    }
    if (fVar2 == 5.60519e-45) {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      puVar1 = &DAT_005fd81c + (int)local_18 * 0x18;
      goto LAB_0049e569;
    }
    if (fVar2 == 4.2039e-45) {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      puVar1 = &DAT_005fd834 + (int)local_18 * 0x18;
      goto LAB_0049e569;
    }
    if (fVar2 == 7.00649e-45) {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      puVar1 = &DAT_005fd84c + (int)local_18 * 0x18;
      goto LAB_0049e569;
    }
    if (fVar2 == 8.40779e-45) {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      FUN_0046e5e0(DAT_005f2afc,&DAT_005fd8dc + (int)local_18 * 0x18);
    }
    else {
      fVar5 = (float10)param_1[7];
      FUN_005a3120();
      local_18 = (float)(int)ROUND(fVar5);
      FUN_0046e5e0(DAT_005f2afc,&DAT_005fd60c + (int)local_18 * 0x18);
    }
  }
  fVar2 = param_1[9];
  if ((((fVar2 == 2.8026e-45) || (fVar2 == 5.60519e-45)) || (fVar2 == 4.2039e-45)) ||
     ((fVar2 == 8.40779e-45 || (pfVar11 = param_1, fVar2 == 9.80909e-45)))) {
    FUN_0046d1c0(DAT_005f2afc);
    local_dc[2] = local_bc;
    local_dc[(uint)bVar4 * -2 + 3] = afStack_b8[(uint)bVar4 * -2];
    local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_110 = local_dc[2] - *param_1;
    local_10c[0] = local_dc[3] - param_1[1];
    local_10c[1] = local_cc - param_1[2];
    local_158 = local_dc[2] - *param_1;
    local_154[(uint)bVar4 * -2] = local_10c[(uint)bVar4 * -2];
    local_154[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_b8 + 5 != &local_158) {
      local_a4 = local_158;
      local_a0 = local_154[0];
      local_9c = local_154[1];
    }
    local_34 = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
    if (local_34 <= 0.0) {
      local_a0 = 0.0;
      local_a4 = 0.0;
      local_9c = 0.0;
    }
    else {
      fVar2 = 1.0 / local_34;
      local_a4 = local_a4 * fVar2;
      local_a0 = local_a0 * fVar2;
      local_9c = local_9c * fVar2;
    }
    if (param_1[9] == 9.80909e-45) {
      local_a4 = local_a4 * _DAT_005c0880;
      local_a0 = local_a0 * _DAT_005c0880;
      local_9c = local_9c * _DAT_005c0880;
    }
    local_a4 = local_a4 + *param_1;
    local_a0 = local_a0 + param_1[1];
    local_9c = local_9c + param_1[2];
    pfVar11 = afStack_b8 + 5;
  }
  FUN_0046ce90(DAT_005f2afc,pfVar11);
  FUN_0046d250(DAT_005f2afc);
  uVar12 = 0;
  puVar10 = &local_140;
  local_140 = local_8c;
  aiStack_13c[(uint)bVar4 * -2] = aiStack_88[(uint)bVar4 * -2];
  piVar3 = DAT_005f2afc;
  aiStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       aiStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  FUN_0046cf30(piVar3,puVar10,uVar12);
  local_188 = 0x40400000;
  if ((param_1[9] == 8.40779e-45) || (local_188 = _DAT_005df900, param_1[9] == 0.0)) {
    local_188 = (local_188 - param_1[3]) / local_188;
  }
  else {
    local_188 = 0.5;
  }
  fVar2 = param_1[9];
  if (((fVar2 == 2.8026e-45) || (fVar2 == 4.2039e-45)) || (fVar2 == 5.60519e-45)) {
    local_20 = 4.4;
  }
  else if (fVar2 == 7.00649e-45) {
    local_20 = 1.9;
  }
  else if (fVar2 == 8.40779e-45) {
    if ((float)_DAT_005c0898 <= local_188) {
      local_20 = 4.4;
    }
    else {
      local_20 = local_188 * (float)_DAT_005c0888 * (float)_DAT_005c08a0 + (float)_DAT_005c0890;
    }
  }
  else {
    local_20 = local_188 * (float)_DAT_005c0888 + (float)_DAT_005c0890;
  }
  fVar2 = local_20;
  local_194 = local_20;
  if ((param_1[9] == 0.0) && (dVar14 = (double)local_188, local_188 < (float)_DAT_005c0890)) {
    FUN_0046d1c0(DAT_005f2afc,dVar14);
    local_e0 = local_68;
    local_dc[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2];
    local_dc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_128 = local_e0 - *param_1;
    local_124[0] = local_dc[0] - param_1[1];
    local_124[1] = local_dc[1] - param_1[2];
    afStack_b8[2] = local_e0 - *param_1;
    afStack_b8[(uint)bVar4 * -2 + 3] = local_124[(uint)bVar4 * -2];
    afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_194 = (float)(((float10)1 +
                        ((float10)1 - (float10)dVar14 * (float10)_DAT_005c08a8) *
                        ((float10)1 -
                        (float10)ABS(local_a8 * param_1[6] +
                                     afStack_b8[2] * param_1[4] + afStack_b8[3] * param_1[5]) /
                        (SQRT((float10)param_1[6] * (float10)param_1[6] +
                              (float10)param_1[4] * (float10)param_1[4] +
                              (float10)param_1[5] * (float10)param_1[5]) *
                        SQRT((float10)local_a8 * (float10)local_a8 +
                             (float10)afStack_b8[2] * (float10)afStack_b8[2] +
                             (float10)afStack_b8[3] * (float10)afStack_b8[3]))) *
                        (float10)_DAT_005c08a0) * (float10)fVar2);
  }
  if ((param_1[9] == 9.80909e-45) || (param_1[9] == 2.8026e-45)) {
    afStack_64[2] = (float)FUN_0040ce40(0,0x3f800000);
    local_18 = afStack_64[2];
    afStack_64[3] = (float)FUN_0040ce40(0,0x3f800000);
    local_38 = SQRT(local_54 * local_54 +
                    afStack_64[2] * afStack_64[2] + afStack_64[3] * afStack_64[3]);
    uVar13 = 0x40c90fdb;
    uVar12 = 0;
    local_10c[2] = (float)_DAT_02cfd900;
    local_18 = afStack_64[3];
    local_10c[(uint)bVar4 * -2 + 3] = *(float *)(&DAT_02cfd904 + (uint)bVar4 * -8);
    local_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)(&DAT_02cfd908 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fVar2 = (float)FUN_0040ce40(uVar12,uVar13);
    fVar5 = (float10)fsin((float10)fVar2);
    fVar6 = (float10)fcos((float10)fVar2);
    local_10c[2] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    aiStack_88[2] = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    aiStack_88[3] = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_78 = (int)ROUND(local_fc * _DAT_005df8e4);
    local_18 = fVar2;
    FUN_005632a3(*DAT_005f2afc,aiStack_88 + 2);
    fVar5 = (float10)fVar2 + (float10)_DAT_005c08d0;
    fVar6 = (float10)fsin(fVar5);
    fVar7 = (float10)fcos(fVar5);
    local_10c[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar7 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_f8 = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_f4 = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_f0 = (int)ROUND(local_fc * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x30,&local_f8);
    fVar5 = (float10)(float)fVar5 + (float10)_DAT_005c08d0;
    fVar6 = (float10)fsin(fVar5);
    fVar7 = (float10)fcos(fVar5);
    local_10c[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar7 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    aiStack_13c[2] = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    aiStack_13c[3] = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_12c = (int)ROUND(local_fc * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x60,aiStack_13c + 2);
    fVar6 = (float10)fsin((float10)(float)fVar5 + (float10)_DAT_005c08d0);
    fVar5 = (float10)fcos((float10)(float)fVar5 + (float10)_DAT_005c08d0);
    local_10c[2] = (float)(fVar6 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_10c[3] = (float)(fVar5 * (float10)_DAT_005c08c8 * (float10)128.0 * (float10)_DAT_005c08b8)
    ;
    local_ec = (int)ROUND(local_10c[2] * _DAT_005df8e4);
    local_e8 = (int)ROUND(local_10c[3] * _DAT_005df8e4);
    local_e4 = (int)ROUND(local_fc * _DAT_005df8e4);
    piVar3 = &local_ec;
  }
  else {
    local_94 = local_20 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_98 = -local_194 * _DAT_005c08b0 * (float)_DAT_005c08b8;
    local_90 = 0.0;
    local_c8 = (int)ROUND(local_98 * _DAT_005df8e4);
    local_c4 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_c0 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = local_98;
    FUN_005632a3(*DAT_005f2afc,&local_c8);
    local_98 = local_194 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_74 = (int)ROUND(local_98 * _DAT_005df8e4);
    local_70 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_6c = (int)ROUND(local_90 * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x30,&local_74);
    local_94 = -local_20 * (float)_DAT_005c08c0 * (float)_DAT_005c08b8;
    local_11c = (int)ROUND(local_98 * _DAT_005df8e4);
    local_118 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_114 = (int)ROUND(local_90 * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x60,&local_11c);
    local_98 = local_18;
    local_14c = (int)ROUND(local_18 * _DAT_005df8e4);
    local_148 = (int)ROUND(local_94 * _DAT_005df8e4);
    local_144 = (int)ROUND(local_90 * _DAT_005df8e4);
    piVar3 = &local_14c;
  }
  FUN_005632a3(*DAT_005f2afc + 0x90,piVar3);
  piVar3 = DAT_005f2afc;
  *(uint *)(*DAT_005f2afc + 0x18) = 0x20000;
  *(uint *)(*piVar3 + 0x1c) = 0x20000;
  *(uint *)(*piVar3 + 0x48) = 0xfe0000;
  *(uint *)(*piVar3 + 0x4c) = 0x20000;
  *(uint *)(*piVar3 + 0x78) = 0xfe0000;
  *(uint *)(*piVar3 + 0x7c) = 0xfe0000;
  *(uint *)(*piVar3 + 0xa8) = 0x20000;
  *(uint *)(*piVar3 + 0xac) = 0xfe0000;
  fVar2 = param_1[9];
  if (fVar2 == 0.0) {
    fVar5 = (float10)1 - (float10)local_188;
LAB_0049ec85:
    fVar5 = fVar5 * (float10)_DAT_005c08d8;
  }
  else {
    if (fVar2 == 8.40779e-45) {
      local_30 = local_188 * _DAT_005c08d4;
      if ((float)_DAT_005c0898 <= local_188) {
        fVar5 = (float10)_DAT_005c08d4 - (float10)local_30;
      }
      else {
        fVar5 = (float10)local_30;
      }
      goto LAB_0049ec85;
    }
    if ((fVar2 == 5.60519e-45) || (fVar2 == 4.2039e-45)) {
      local_1c = 0xffff;
      goto LAB_0049ec97;
    }
    if (fVar2 == 9.80909e-45) {
      local_1c = 48000;
      goto LAB_0049ec97;
    }
    if (fVar2 != 2.8026e-45) {
      local_1c = 0x8000;
      goto LAB_0049ec97;
    }
    local_18 = (float)FUN_0040ce40(0x463b8000,0x469c4000);
    fVar5 = (float10)local_18;
  }
  FUN_005a3120();
  local_1c = (int)ROUND(fVar5);
LAB_0049ec97:
  if (param_1[9] == 0.0) {
    fVar9 = ((float10)_DAT_005c08d4 - (float10)local_188) * (float10)local_188;
    fVar5 = ((float10)1 - fVar9) * (float10)_DAT_005c08dc;
    fVar8 = (float10)_DAT_005c08e4;
    fVar6 = (fVar9 * (float10)_DAT_005c08e0 + fVar5) * fVar8;
    fVar7 = (fVar9 * (float10)_DAT_005c08e8 + fVar5) * fVar8;
    fVar8 = (fVar9 * (float10)_DAT_005c08ec + fVar5) * fVar8;
    FUN_005a3120();
    FUN_005a3120();
    FUN_005a3120();
    local_2c = (int)ROUND(fVar6);
    local_24 = (int)ROUND(fVar7);
    local_28 = (int)ROUND(fVar8);
  }
  else {
    local_24 = 0xff00;
    local_28 = 0xff00;
    local_2c = 0xff00;
  }
  piVar3 = DAT_005f2afc;
  *(int *)(*DAT_005f2afc + 0x20) = local_2c;
  *(int *)(*piVar3 + 0x24) = local_24;
  *(int *)(*piVar3 + 0x28) = local_28;
  *(int *)(*piVar3 + 0x2c) = local_1c;
  *(int *)(*piVar3 + 0x50) = local_2c;
  *(int *)(*piVar3 + 0x54) = local_24;
  *(int *)(*piVar3 + 0x58) = local_28;
  *(int *)(*piVar3 + 0x5c) = local_1c;
  *(int *)(*piVar3 + 0x80) = local_2c;
  *(int *)(*piVar3 + 0x84) = local_24;
  *(int *)(*piVar3 + 0x88) = local_28;
  *(int *)(*piVar3 + 0x8c) = local_1c;
  *(int *)(*piVar3 + 0xb0) = local_2c;
  *(int *)(*piVar3 + 0xb4) = local_24;
  *(int *)(*piVar3 + 0xb8) = local_28;
  *(int *)(*piVar3 + 0xbc) = local_1c;
  local_16c = 0;
  local_170 = 0;
  local_174 = 0;
  local_178 = 0;
  local_168 = 0;
  local_15c = 3;
  local_17c = 4;
  local_160 = 2;
  local_164 = 1;
  FUN_0046d4b0(piVar3,1);
  FUN_0046c510(DAT_005f2afc,local_180);
  FUN_0046d4b0(DAT_005f2afc,0);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
