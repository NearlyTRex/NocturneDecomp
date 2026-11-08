// Name: FUN_00424c80
// Address: 00424c80
// Address Range: [[00424c80, 004254ae]]
// Convention: unknown
// Signature: void FUN_00424c80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424c80(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_10d8 [1003];
  float local_120;
  float local_11c;
  byte local_118 [4];
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0;
  float afStack_ec [4];
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  float afStack_80 [4];
  float local_70;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  local_110 = FUN_0046b960(DAT_0060b280);
  if (local_110 != 0) {
    return;
  }
  pcVar4 = "7headlite.raw" + 1;
  pcVar5 = &DAT_007bda80;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  local_10c = local_110;
  local_108 = local_110;
  local_104 = local_110;
  FUN_0046ca00(DAT_0060b280,&DAT_007bda78);
  iVar3 = 0;
  do {
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18 + iVar3) = 0x800000;
    iVar3 = iVar3 + 0x30;
    *(uint *)(*piVar2 + -0x14 + iVar3) = 0x800000;
  } while (iVar3 != 0x12c0);
  local_40 = 0x267;
  local_114 = 3;
  local_100 = 0;
  local_fc = 1;
  local_f8 = 2;
  local_f4 = 3;
  local_38 = param_1 + 0x2ed4;
  local_58 = param_1 + 0x2f88;
  local_3c = 0x28000;
  do {
    FUN_0046b8e0(DAT_0060b280,local_3c / 5);
    local_1c = 0;
    local_28 = local_38;
    do {
      piVar2 = DAT_0060b280;
      *(uint *)(*DAT_0060b280 + local_1c + 0x20) = 0;
      *(uint *)(*piVar2 + local_1c + 0x24) = 0xffff;
      *(uint *)(*piVar2 + local_1c + 0x28) = 0;
      FUN_00408de0(param_1,local_28);
      afStack_80[2] = local_f0;
      afStack_80[(uint)bVar7 * -2 + 3] = afStack_ec[(uint)bVar7 * -2];
      iVar3 = local_1c;
      afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_80 + 2) {
        local_c0 = afStack_80[2];
        local_bc = afStack_80[3];
        local_b8 = local_70;
      }
      local_a8 = (int)ROUND(local_c0 * _DAT_005f4060);
      local_a4 = (int)ROUND(local_bc * _DAT_005f4060);
      local_a0 = (int)ROUND(local_b8 * _DAT_005f4060);
      FUN_0055d723(*DAT_0060b280 + local_1c,&local_a8);
      local_1c = iVar3 + 0x30;
      local_28 = local_28 + 0xc;
    } while (local_1c != 0x90);
    FUN_00469c60(DAT_0060b280,local_118,0x267);
    local_38 = local_38 + 0x24;
    local_3c = local_3c + -0x8000;
  } while (local_38 != local_58);
  local_34 = param_1 + 0x2f88;
  local_54 = param_1 + 0x303c;
  local_44 = 0x28000;
  do {
    FUN_0046b8e0(DAT_0060b280,local_44 / 5);
    local_20 = 0;
    local_24 = local_34;
    do {
      piVar2 = DAT_0060b280;
      *(uint *)(*DAT_0060b280 + local_20 + 0x20) = 0;
      *(uint *)(*piVar2 + local_20 + 0x24) = 0;
      *(uint *)(*piVar2 + local_20 + 0x28) = 0xffff;
      FUN_00408de0(param_1,local_24);
      afStack_ec[2] = local_84;
      afStack_ec[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2];
      iVar3 = local_20;
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_ec + 2) {
        local_c0 = afStack_ec[2];
        local_bc = afStack_ec[3];
        local_b8 = local_dc;
      }
      local_cc = (int)ROUND(local_c0 * _DAT_005f4060);
      local_c8 = (int)ROUND(local_bc * _DAT_005f4060);
      local_c4 = (int)ROUND(local_b8 * _DAT_005f4060);
      FUN_0055d723(*DAT_0060b280 + local_20,&local_cc);
      local_20 = iVar3 + 0x30;
      local_24 = local_24 + 0xc;
    } while (local_20 != 0x90);
    FUN_00469c60(DAT_0060b280,local_118,local_40);
    local_34 = local_34 + 0x24;
    local_44 = local_44 + -0x8000;
  } while (local_34 != local_54);
  local_50 = *(float *)(param_1 + 0x3444) * *(float *)(param_1 + 0x2824);
  if (local_50 < *(float *)(param_1 + 0x3440) * *(float *)(param_1 + 0x2824)) {
    local_50 = *(float *)(param_1 + 0x24fc);
  }
  local_11c = *(float *)(param_1 + 0x3440) * *(float *)(param_1 + 0x2824);
  if (local_50 < local_11c) {
    local_50 = *(float *)(param_1 + 0x2824) * (float)_DAT_005ccd16 + local_11c;
  }
  local_5c = *(float *)(param_1 + 0x3440) * *(float *)(param_1 + 0x2824);
  local_120 = *(float *)(param_1 + 0x3434) * *(float *)(param_1 + 0x2824);
  iVar6 = 0x30;
  iVar3 = 0;
  local_30 = 0;
  do {
    local_2c = local_30 * 2;
    fVar8 = (float10)local_2c * (float10)_DAT_005ccd1e * (float10)_DAT_005ccd22;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_bc = local_5c;
    local_c0 = (float)(fVar9 * (float10)local_120);
    local_b8 = (float)(fVar8 * (float10)local_120);
    local_b4 = (int)ROUND(local_c0 * _DAT_005f4060);
    local_b0 = (int)ROUND(local_5c * _DAT_005f4060);
    local_ac = (int)ROUND(local_b8 * _DAT_005f4060);
    local_18 = local_2c;
    FUN_0055d723(*DAT_0060b280 + iVar3,&local_b4);
    piVar2 = DAT_0060b280;
    *(uint *)(iVar3 + 0x20 + *DAT_0060b280) = 0xffff;
    *(uint *)(iVar3 + 0x24 + *piVar2) = 0;
    *(uint *)(iVar3 + 0x28 + *piVar2) = 0;
    local_bc = local_50;
    local_4c = local_2c + 1;
    local_9c = (int)ROUND(local_c0 * _DAT_005f4060);
    local_98 = (int)ROUND(local_50 * _DAT_005f4060);
    local_94 = (int)ROUND(local_b8 * _DAT_005f4060);
    FUN_0055d723(*piVar2 + iVar6,&local_9c);
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x20 + iVar6) = 0xffff;
    *(uint *)(*piVar2 + 0x24 + iVar6) = 0;
    *(uint *)(*piVar2 + 0x28 + iVar6) = 0;
    if (0 < local_30) {
      local_114 = 4;
      local_100 = local_2c + -2;
      local_fc = local_2c + -1;
      local_f8 = local_4c;
      local_f4 = local_2c;
      FUN_0046b8e0(piVar2,0x4000);
      FUN_00469c60(DAT_0060b280,local_118,local_40);
    }
    iVar3 = iVar3 + 0x60;
    local_30 = local_30 + 1;
    iVar6 = iVar6 + 0x60;
  } while (local_30 < 0x19);
  local_90 = (int)ROUND(_DAT_0265370c * _DAT_005f4060);
  local_8c = (int)ROUND(_DAT_02653710 * _DAT_005f4060);
  local_88 = (int)ROUND(_DAT_02653714 * _DAT_005f4060);
  FUN_0055d723(*DAT_0060b280,&local_90);
  piVar2 = DAT_0060b280;
  *(uint *)(*DAT_0060b280 + 0x20) = 0xffff;
  iVar3 = 0;
  *(uint *)(*piVar2 + 0x24) = 0;
  iVar6 = 0x30;
  local_48 = 0;
  *(uint *)(*piVar2 + 0x28) = 0;
  do {
    local_18 = local_48;
    fVar8 = (float10)local_48 * (float10)_DAT_005ccd1e * (float10)_DAT_005ccd22;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_c0 = (float)((float10)*(float *)(param_1 + 0x2824) *
                      (float10)*(float *)(param_1 + 0x3430) * fVar9);
    local_bc = 0.0;
    local_b8 = (float)(fVar8 * (float10)*(float *)(param_1 + 0x3430) *
                      (float10)*(float *)(param_1 + 0x2824));
    local_d8 = (int)ROUND(local_c0 * _DAT_005f4060);
    local_d4 = (int)ROUND(_DAT_005f4060 * 0.0);
    local_d0 = (int)ROUND(local_b8 * _DAT_005f4060);
    FUN_0055d723(*DAT_0060b280 + iVar6,&local_d8);
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x20 + iVar6) = 0xffff;
    *(uint *)(*piVar2 + 0x24 + iVar6) = 0;
    *(uint *)(*piVar2 + 0x28 + iVar6) = 0;
    if (0 < iVar3) {
      local_114 = 3;
      local_100 = 0;
      local_fc = iVar3 + -1;
      local_f8 = iVar3;
      FUN_0046b8e0(piVar2,0x4000);
      FUN_00469c60(DAT_0060b280,local_118,local_40);
    }
    iVar3 = iVar3 + 1;
    local_48 = local_48 + 2;
    iVar6 = iVar6 + 0x30;
  } while (iVar3 < 0x19);
  FUN_0046b8e0(DAT_0060b280,0xffff);
  return;
}
