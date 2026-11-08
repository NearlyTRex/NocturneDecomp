// Name: FUN_0049f520
// Address: 0049f520
// Address Range: [[0049f520, 0049fcdc]]
// Convention: unknown
// Signature: ushort FUN_0049f520(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_0049f520(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  byte *puVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int aiStackY_103c [975];
  byte local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
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
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int aiStack_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int aiStack_20 [4];
  int local_10;
  int local_c;
  int local_8;
  
  bVar8 = 0;
  fVar3 = (float)param_1[5];
  uVar9 = (ushort)(0.0 < fVar3) << 8 | (ushort)NAN(fVar3) << 10 | (ushort)(fVar3 == 0.0) << 0xe;
  if (0.0 < fVar3) {
    iVar5 = *param_1;
    if (iVar5 == 2) {
      iVar5 = FUN_005a35cc();
      puVar6 = &DAT_005fd984 + (iVar5 % 6) * 0x18;
    }
    else if (iVar5 == 3) {
      iVar5 = FUN_005a35cc();
      puVar6 = &DAT_005fda14 + (iVar5 % 6) * 0x18;
    }
    else if (iVar5 == 4) {
      iVar5 = FUN_005a35cc();
      puVar6 = &DAT_005fdaa4 + (iVar5 % 6) * 0x18;
    }
    else if (iVar5 == 5) {
      iVar5 = FUN_005a35cc();
      puVar6 = &DAT_005fdb34 + (iVar5 % 6) * 0x18;
    }
    else {
      iVar5 = FUN_005a35cc();
      puVar6 = &DAT_005fd8f4 + (iVar5 % 6) * 0x18;
    }
    FUN_0046e5e0(DAT_005f2afc,puVar6);
    local_e4 = 4;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c4 = 3;
    local_cc = 1;
    local_c8 = 2;
    uVar7 = FUN_005a35cc();
    if ((uVar7 & 1) == 0) {
      _DAT_0060b05c = 0x80000;
      _DAT_0060b08c = 0x80000;
      _DAT_0060b0bc = 0xf80000;
      DAT_0060b02c = 0xf80000;
    }
    else {
      _DAT_0060b05c = 0xf80000;
      _DAT_0060b08c = 0xf80000;
      _DAT_0060b0bc = 0x80000;
      DAT_0060b02c = 0x80000;
    }
    _DAT_0060b0c0 = 0xf80000;
    DAT_0060b090 = 0xf80000;
    _DAT_0060b060 = 0x80000;
    _DAT_0060b030 = 0x80000;
    DAT_0060b034 = 0xffff;
    DAT_0060b038 = 0xffff;
    DAT_0060b03c = 0xffff;
    DAT_0060b064 = 0xffff;
    DAT_0060b068 = 0xffff;
    DAT_0060b06c = 0xffff;
    _DAT_0060b094 = 0xffff;
    _DAT_0060b098 = 0xffff;
    _DAT_0060b09c = 0xffff;
    _DAT_0060b0c4 = 0xffff;
    _DAT_0060b0c8 = 0xffff;
    _DAT_0060b0cc = 0xffff;
    FUN_0046d4c0(DAT_005f2afc,param_1[0xb]);
    pfVar1 = (float *)(param_1 + 1);
    FUN_0046d4b0(DAT_005f2afc,1);
    if (*param_1 == 0) {
      FUN_0046ce90(DAT_005f2afc,pfVar1);
      FUN_0046d250(DAT_005f2afc);
      local_54 = local_24;
      aiStack_50[(uint)bVar8 * -2] = aiStack_20[(uint)bVar8 * -2];
      aiStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           aiStack_20[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      local_54 = 0;
      FUN_0046cf30(DAT_005f2afc,&local_54,0);
      local_7c = 0.0;
      if (0.0 < (float)param_1[6]) {
        local_84 = (float)param_1[6];
      }
      else {
        local_84 = (float)param_1[4] * (float)_DAT_005c08f8;
      }
      local_80 = (float)param_1[4];
      local_30 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_2c = (int)ROUND(local_80 * _DAT_005df8e4);
      local_28 = (int)ROUND(_DAT_005df8e4 * 0.0);
      FUN_005632a3(*DAT_005f2afc,&local_30);
      local_84 = -local_84;
      local_c0 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_bc = (int)ROUND(local_80 * _DAT_005df8e4);
      local_b8 = (int)ROUND(local_7c * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x30,&local_c0);
      local_80 = 0.0;
      local_90 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_8c = (int)ROUND(_DAT_005df8e4 * 0.0);
      local_88 = (int)ROUND(local_7c * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x60,&local_90);
      local_84 = -local_84;
      local_78 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_74 = (int)ROUND(local_80 * _DAT_005df8e4);
      local_70 = (int)ROUND(local_7c * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x90,&local_78);
      FUN_0046c730(DAT_005f2afc,local_e8);
      thunk_FUN_004e5ef0(DAT_005f2afc);
    }
    else {
      local_60 = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_5c = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_58 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc,&local_60);
      aiStack_50[2] = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      aiStack_50[3] = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_40 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      pfVar2 = (float *)(param_1 + 7);
      FUN_0056356c(*DAT_005f2afc + 0x30,aiStack_50 + 2);
      local_a8 = (int)ROUND(*pfVar2 * _DAT_005df8e4);
      local_a4 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_a0 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc + 0x60,&local_a8);
      local_3c = (int)ROUND(*pfVar2 * _DAT_005df8e4);
      local_38 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_34 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc + 0x90,&local_3c);
      piVar4 = DAT_005f2afc;
      fVar10 = (float10)(float)param_1[10];
      fVar11 = (float10)_DAT_005c08f0;
      fVar12 = (float10)(float)param_1[6] * fVar11;
      *(uint *)(*DAT_005f2afc + 0x10) = 0x80000000;
      FUN_005a3120();
      local_c = (int)ROUND(fVar12);
      *(int *)(*piVar4 + 4) = *(int *)(*piVar4 + 4) - local_c;
      *(uint *)(*piVar4 + 0x40) = 0x80000000;
      *(int *)(*piVar4 + 0x34) = *(int *)(*piVar4 + 0x34) + local_c;
      fVar11 = fVar11 * fVar10;
      *(uint *)(*piVar4 + 0x70) = 0x80000000;
      FUN_005a3120();
      local_8 = (int)ROUND(fVar11);
      *(int *)(*piVar4 + 100) = *(int *)(*piVar4 + 100) + local_8;
      *(uint *)(*piVar4 + 0xa0) = 0x80000000;
      *(int *)(*piVar4 + 0x94) = *(int *)(*piVar4 + 0x94) - local_8;
      FUN_0046c730(piVar4,local_e8);
      aiStack_20[2] = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      aiStack_20[3] = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_10 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc,aiStack_20 + 2);
      local_b4 = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_b0 = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_ac = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc + 0x30,&local_b4);
      local_9c = (int)ROUND(*pfVar2 * _DAT_005df8e4);
      local_98 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_94 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc + 0x60,&local_9c);
      local_6c = (int)ROUND(*pfVar2 * _DAT_005df8e4);
      local_68 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_64 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      FUN_0056356c(*DAT_005f2afc + 0x90,&local_6c);
      piVar4 = DAT_005f2afc;
      *(uint *)(*DAT_005f2afc + 0x10) = 0x80000000;
      *(int *)*piVar4 = *(int *)*piVar4 - local_c;
      *(uint *)(*piVar4 + 0x40) = 0x80000000;
      *(int *)(*piVar4 + 0x30) = *(int *)(*piVar4 + 0x30) + local_c;
      *(uint *)(*piVar4 + 0x70) = 0x80000000;
      *(int *)(*piVar4 + 0x60) = *(int *)(*piVar4 + 0x60) + local_8;
      *(uint *)(*piVar4 + 0xa0) = 0x80000000;
      *(int *)(*piVar4 + 0x90) = *(int *)(*piVar4 + 0x90) - local_8;
      FUN_0046c730(piVar4,local_e8);
    }
    uVar9 = FUN_0046d4b0(DAT_005f2afc,0);
  }
  return uVar9;
}
