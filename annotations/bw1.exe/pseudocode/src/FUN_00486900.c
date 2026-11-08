// Name: FUN_00486900
// Address: 00486900
// Address Range: [[00486900, 00486ddf]]
// Convention: unknown
// Signature: void FUN_00486900(undefined4 *param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486900(uint *param_1,char *param_2,uint param_3)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  uint *extraout_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_106c [996];
  byte local_cc [4];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  float local_84;
  float afStack_80 [5];
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  pcVar8 = (char *)(param_1 + 3);
  do {
    cVar1 = *param_2;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *param_1 = param_3;
  FUN_0048f210(&DAT_01fe5c1c);
  local_54 = local_84;
  local_50[(uint)bVar11 * -2] = afStack_80[(uint)bVar11 * -2];
  local_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  FUN_0048f230(&DAT_01fe5c1c);
  local_6c = afStack_80[2];
  afStack_80[(uint)bVar11 * -2 + 6] = afStack_80[(uint)bVar11 * -2 + 3];
  afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  fVar2 = (float)_DAT_005db724;
  _DAT_01bef1fc = (local_54 + local_6c) * fVar2;
  _DAT_01bef204 = (local_50[1] + local_64) * fVar2;
  local_2c = (local_6c - local_54) * fVar2 * (float)_DAT_005db72c;
  _DAT_006144d4 = 0.0;
  _DAT_01bef200 = local_50[0];
  if (0.0 < local_2c) {
    _DAT_006144d4 = local_2c;
  }
  local_30 = (local_68 - local_50[0]) * (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_30) {
    _DAT_006144d4 = local_30;
  }
  local_34 = (local_64 - local_50[1]) * (float)_DAT_005db724 * (float)_DAT_005db72c;
  if (_DAT_006144d4 < local_34) {
    _DAT_006144d4 = local_34;
  }
  FUN_004837b0(DAT_00612560,&DAT_01bef1fc);
  local_c8 = 4;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  FUN_00484f00(DAT_00612560,param_1 + 1);
  fVar12 = (float10)fsin((float10)_DAT_005db734);
  fVar12 = fVar12 * (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  fVar13 = (float10)_DAT_006144d4 * (float10)_DAT_005db73c;
  FUN_005c03a0();
  local_60 = (int)ROUND(fVar12);
  local_58 = local_60;
  uVar4 = FUN_005c03a0();
  local_5c = (int)ROUND(fVar13);
  FUN_00580173(*extraout_ECX,uVar4);
  local_60 = -local_60;
  FUN_00580173(*DAT_00612560 + 0x30,&local_60);
  local_58 = -local_58;
  FUN_00580173(*DAT_00612560 + 0x60,&local_60);
  local_60 = -local_60;
  FUN_00580173(*DAT_00612560 + 0x90,&local_60);
  piVar3 = DAT_00612560;
  uVar4 = *param_1;
  *(uint *)(*DAT_00612560 + 0x20) = uVar4;
  *(uint *)(*piVar3 + 0x24) = uVar4;
  *(uint *)(*piVar3 + 0x28) = *param_1;
  *(uint *)(*piVar3 + 0x2c) = 0;
  uVar4 = *param_1;
  *(uint *)(*piVar3 + 0x50) = uVar4;
  *(uint *)(*piVar3 + 0x54) = uVar4;
  *(uint *)(*piVar3 + 0x58) = *param_1;
  *(uint *)(*piVar3 + 0x5c) = 0;
  uVar4 = *param_1;
  *(uint *)(*piVar3 + 0x80) = uVar4;
  *(uint *)(*piVar3 + 0x84) = uVar4;
  *(uint *)(*piVar3 + 0x88) = uVar4;
  *(uint *)(*piVar3 + 0x8c) = 0;
  uVar4 = *param_1;
  *(uint *)(*piVar3 + 0xb0) = uVar4;
  *(uint *)(*piVar3 + 0xb4) = uVar4;
  *(uint *)(*piVar3 + 0xb8) = uVar4;
  *(uint *)(*piVar3 + 0xbc) = 0;
  local_b4 = 0;
  local_a8 = 1;
  local_b0 = 0x80000;
  local_ac = 0x80000;
  local_a4 = 0x80000;
  local_a0 = 0x80000;
  local_90 = 3;
  local_9c = 2;
  iVar9 = 0;
  local_98 = 0x80000;
  local_94 = 0x80000;
  local_8c = 0x80000;
  local_88 = 0x80000;
  FUN_00482210(piVar3,local_cc,0x2c5);
  local_24 = 0;
  do {
    iVar7 = 0;
    iVar10 = local_24;
    do {
      iVar6 = iVar7 + 1;
      FUN_004867c0(param_1,iVar9,iVar7,iVar10);
      iVar7 = iVar6;
      iVar10 = iVar10 + 1;
    } while (iVar6 < 4);
    local_24 = local_24 + 4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x11);
  local_20 = 0;
  local_28 = 0;
  do {
    local_1c = local_20;
    iVar7 = 0x1000000;
    local_14 = (int)((local_28 + (local_28 >> 0x1f) * -4) - (uint)((local_28 >> 0x1f) << 1 < 0)) >>
               2 & 0xffffff;
    iVar9 = 0;
    local_18 = local_14 + 0x400000;
    iVar10 = 0;
    do {
      local_b4 = local_1c + iVar10;
      local_a8 = local_b4 + 1;
      local_9c = local_b4 + 5;
      local_90 = local_b4 + 4;
      iVar5 = iVar9 >> 0x1f;
      iVar6 = iVar9 + iVar5 * -4;
      local_b0 = local_14;
      iVar10 = iVar10 + 1;
      local_a4 = local_14;
      iVar9 = iVar9 + 0x1000000;
      local_a0 = (int)((iVar7 + (iVar7 >> 0x1f) * -4) - (uint)((iVar7 >> 0x1f) << 1 < 0)) >> 2 ^
                 0xffffff;
      local_98 = local_18;
      local_8c = local_18;
      local_ac = (int)(iVar6 - (uint)(iVar5 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar7 = iVar7 + 0x1000000;
      local_94 = local_a0;
      local_88 = local_ac;
      local_40 = local_a8;
      local_3c = local_9c;
      local_38 = local_90;
      FUN_00482210(DAT_00612560,local_cc,0x2c5);
    } while (iVar10 < 3);
    local_20 = local_20 + 4;
    local_28 = CONCAT13(local_28._3_1_ + '\x01',(undefined3)local_28);
  } while (local_20 != 0x40);
  return;
}
