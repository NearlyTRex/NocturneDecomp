// Name: FUN_0058eb50
// Address: 0058eb50
// Address Range: [[0058eb50, 0058f654]]
// Convention: unknown
// Signature: void FUN_0058eb50(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058eb50(int param_1,int param_2,float param_3)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  byte *puVar8;
  byte bVar9;
  float afStackY_1160 [969];
  float *pfVar10;
  float fStack_21c;
  byte auStack_218 [120];
  byte auStack_1a0 [40];
  float fStack_178;
  float afStack_174 [5];
  float fStack_160;
  float afStack_154 [3];
  float fStack_148;
  float fStack_13c;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  float afStack_c0 [6];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  uint uStack_7c;
  float fStack_60;
  uint local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int local_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  int iStack_2c;
  float *local_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  local_28 = (float *)(param_1 + 0x1ffe0);
  if (param_2 == 1) {
    local_28 = (float *)(param_1 + 0x1ffc0);
  }
  if (*(int *)(param_1 + 0x20004) == 0) {
    local_28[3] = 0.0;
    local_28[1] = 0.0;
    iVar4 = *(int *)(param_2 * 0x78 + param_1 + 0x25b0);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x74))(iVar4);
    }
    if ((uVar3 & 4) == 0) {
      local_28[2] = 0.0;
      *local_28 = 0.0;
      return;
    }
    local_4c = 3;
  }
  else {
    local_4c = *(int *)(*(int *)(param_1 + 0x20004) + 0x2e0);
  }
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x1fae4) == 2) && (local_4c == 0)) {
      return;
    }
    local_5c = _DAT_02c83634;
    local_30 = -1.3089969;
    local_34 = 0.5235988;
    uVar7 = _DAT_02c8360c;
  }
  else {
    local_5c = _DAT_02c83638;
    uVar7 = _DAT_02c83610;
    if (local_4c == 0) {
      local_34 = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_34 = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar6 = *(float *)(param_1 + 0xc204) * _DAT_005f6ed9 * (float)_DAT_005f6ee1 * param_3 + *local_28;
  local_28[1] = 0.0;
  *local_28 = fVar6;
  if (fVar6 < 0xBF860A92) {
    *local_28 = 0xBF860A92;
  }
  if (0x3F9C61AA < *local_28) {
    *local_28 = 0x3F9C61AA;
  }
  if (local_28[3] < local_30) {
    local_28[3] = local_30;
  }
  if (local_34 < local_28[3]) {
    local_28[3] = local_34;
  }
  if (local_28[1] < local_30) {
    local_28[1] = local_30;
  }
  if (local_34 < local_28[1]) {
    local_28[1] = local_34;
  }
  local_28[7] = 0.0;
  fStack_38 = local_28[1];
  fStack_3c = *local_28;
  if ((local_4c == 3) || (fVar6 = *(float *)(param_1 + 0x1fae4), fVar6 != 0.0)) {
    local_28[3] = 0.0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20004);
    afStack_120[2] = fVar6;
    afStack_120[3] = fVar6;
    fStack_110 = fVar6;
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))(iVar4);
      fStack_dc = afStack_9c[2];
      afStack_d8[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * -2 + 3];
      afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (afStack_120 + 2 != &fStack_dc) {
        afStack_120[2] = fStack_dc;
        afStack_120[3] = afStack_d8[0];
        fStack_110 = afStack_d8[1];
      }
    }
    if (local_4c == 0) {
      FUN_00569040(param_1 + 0x158,uVar7);
      fStack_f4 = fStack_148;
      afStack_108[(uint)bVar9 * -2 + 6] = afStack_174[(uint)bVar9 * -2 + 0xc];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      if (afStack_c0 + 5 != afStack_108 + 5) {
        afStack_c0[5] = fStack_f4;
        fStack_a8 = fStack_f0;
        fStack_a4 = fStack_ec;
      }
    }
    else {
      FUN_00569040(param_1 + 0x158,local_5c);
      fStack_124 = fStack_10c;
      afStack_120[(uint)bVar9 * -2] = afStack_108[(uint)bVar9 * -2];
      afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (afStack_c0 + 5 != afStack_174 + 0x14) {
        afStack_c0[5] = fStack_124;
        fStack_a8 = afStack_120[0];
        fStack_a4 = afStack_120[1];
      }
    }
    FUN_00408b40(param_1,afStack_c0 + 5);
    pfVar10 = local_28;
    afStack_154[0] = afStack_d8[2];
    afStack_174[(uint)bVar9 * -2 + 9] = afStack_d8[(uint)bVar9 * -2 + 3];
    afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_130 = *pfVar10;
    uStack_128 = 0;
    fStack_12c = local_28[1];
    FUN_0045f3e0(auStack_1a0,afStack_174 + 0x11);
    afStack_c0[2] = 0.0;
    afStack_c0[3] = 0.0;
    afStack_c0[4] = 1.0;
    FUN_0045f690(auStack_1a0,afStack_c0 + 2);
    fStack_178 = fStack_c4;
    afStack_174[(uint)bVar9 * -2] = afStack_c0[(uint)bVar9 * -2];
    afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    fStack_24 = 1e+30;
    iStack_40 = 0;
    for (iStack_44 = 0; iStack_44 < *(int *)(0x01E82168 + 0x152f30); iStack_44 = iStack_44 + 1) {
      iVar4 = FUN_0040c600(*(uint *)(0x01E82168 + iStack_40 + 0x152f34),DAT_007c637c);
      if ((iVar4 == 0) ||
         ((iVar5 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar5 == 0 &&
          (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x70))(iVar4), iVar4 == 0)))) {
        iStack_20 = *(int *)(0x01E82168 + iStack_40 + 0x152f34);
        FUN_005c0357(auStack_218,10,&DAT_005fb430);
        iStack_2c = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x54))(iStack_20,auStack_218);
        if ((0 < iStack_2c) && (iStack_1c = 0, 0 < iStack_2c)) {
          puVar8 = auStack_218;
          do {
            FUN_00408b40(iStack_20,puVar8);
            pfVar10 = afStack_174 + 2;
            afStack_174[2] = (float)uStack_7c;
            afStack_174[(uint)bVar9 * -2 + 3] = afStack_9c[(uint)bVar9 * -2 + 9];
            afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
            FUN_00408bb0(param_1,pfVar10);
            afStack_108[2] = fStack_160;
            afStack_108[(uint)bVar9 * -2 + 3] = afStack_174[(uint)bVar9 * -2 + 6];
            afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            fStack_a0 = afStack_108[2] - afStack_c0[5];
            afStack_9c[0] = afStack_108[3] - fStack_a8;
            afStack_9c[1] = fStack_f8 - fStack_a4;
            fStack_e8 = afStack_108[2] - afStack_c0[5];
            afStack_108[(uint)bVar9 * -2 + 9] = afStack_9c[(uint)bVar9 * -2];
            afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((0.0 < (double)fStack_e0) && ((double)fStack_e0 <= _DAT_005f6f09)) {
              FUN_005a7520(afStack_108 + 8);
              fVar6 = fStack_e0;
              fStack_21c = 0.5235988;
              fStack_88 = fStack_13c;
              afStack_9c[(uint)bVar9 * -2 + 6] = afStack_174[(uint)bVar9 * -2 + 0xf];
              afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
              if (fVar6 < (float)_DAT_005f6f11) {
                fStack_21c = 1.5707964;
              }
              if (((ABS(fStack_88) <= fStack_21c) && (local_30 <= fStack_84)) &&
                 (fStack_84 <= local_34)) {
                fVar6 = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
                fVar1 = 1.0 / fVar6;
                fStack_e4 = fStack_e4 * fVar1;
                fStack_e8 = fStack_e8 * fVar1;
                fStack_e0 = fStack_e0 * fVar1;
                fVar6 = fVar6 * (float)_DAT_005f6ee9 +
                        ((float)_DAT_005f6ee1 -
                        (fStack_e0 * afStack_174[1] +
                        fStack_e8 * fStack_178 + fStack_e4 * afStack_174[0]));
                if (fVar6 < fStack_24) {
                  FUN_00559220(0x01E82168);
                  FUN_005592d0(0x01E82168,2);
                  FUN_00559250(0x01E82168,param_1);
                  FUN_00559250(0x01E82168,iStack_20);
                  iVar4 = FUN_00557230(0x01E82168,afStack_174 + 8,afStack_174 + 2);
                  FUN_00559220(0x01E82168);
                  if (iVar4 == 0) {
                    fStack_38 = fStack_84;
                    fStack_3c = fStack_88;
                    local_28[7] = 1.4013e-45;
                    fStack_24 = fVar6;
                  }
                }
              }
            }
            iStack_1c = iStack_1c + 1;
            puVar8 = puVar8 + 0xc;
          } while (iStack_1c < iStack_2c);
        }
      }
      iStack_40 = iStack_40 + 4;
    }
  }
  dVar2 = _DAT_005f6ef1;
  if (local_4c != 0) {
    dVar2 = _DAT_005f6ef9;
  }
  fStack_48 = param_3 * _DAT_005f6ed9 * (float)dVar2;
  fStack_54 = (float)FUN_0040cd60(fStack_38 - local_28[3]);
  fStack_18 = fStack_54;
  fStack_18 = (float)FUN_0040cd60(fStack_3c - local_28[2]);
  fStack_58 = -fStack_48;
  if (fStack_54 < fStack_58) {
    fStack_54 = fStack_58;
  }
  if (fStack_48 < fStack_54) {
    fStack_54 = fStack_48;
  }
  fStack_60 = -fStack_48;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_60) {
    fStack_50 = fStack_60;
  }
  if (fStack_48 < fStack_50) {
    fStack_50 = fStack_48;
  }
  fStack_18 = (float)FUN_0040cd60(local_28[3] + fStack_54);
  local_28[3] = fStack_18;
  fVar6 = (float)FUN_0040cd60(local_28[2] + fStack_50);
  local_28[2] = fVar6;
  local_28[5] = 1.0;
  if (((local_28[7] == 1.4013e-45) && (ABS(local_28[3] - fStack_38) < (float)_DAT_005f6f01)) &&
     (ABS(local_28[2] - fStack_3c) < (float)_DAT_005f6f01)) {
    local_28[7] = 2.8026e-45;
    return;
  }
  return;
}
