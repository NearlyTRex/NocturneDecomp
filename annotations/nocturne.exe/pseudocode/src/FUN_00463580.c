// Name: FUN_00463580
// Address: 00463580
// Address Range: [[00463580, 00463a33]]
// Convention: unknown
// Signature: void FUN_00463580(undefined4 *param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463580(uint *param_1,char *param_2,uint param_3)

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
  float10 fVar11;
  float10 fVar12;
  byte local_b4 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
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
  FUN_0046b9c0(&DAT_01fba938,&local_60);
  FUN_0046b9f0(&DAT_01fba938,&local_54);
  fVar2 = (float)_DAT_0057dfae;
  _DAT_01b7b728 = (local_60 + local_54) * fVar2;
  _DAT_01b7b730 = (local_58 + local_4c) * fVar2;
  local_34 = (local_54 - local_60) * fVar2 * (float)_DAT_0057dfb6;
  _DAT_005b0678 = 0.0;
  _DAT_01b7b72c = local_5c;
  if (0.0 < local_34) {
    _DAT_005b0678 = local_34;
  }
  local_2c = (local_50 - local_5c) * (float)_DAT_0057dfb6;
  if (_DAT_005b0678 < local_2c) {
    _DAT_005b0678 = local_2c;
  }
  local_30 = (local_4c - local_58) * (float)_DAT_0057dfae * (float)_DAT_0057dfb6;
  if (_DAT_005b0678 < local_30) {
    _DAT_005b0678 = local_30;
  }
  FUN_00460a00(DAT_005ae704,&DAT_01b7b728);
  local_b0 = 4;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  FUN_00461eb0(DAT_005ae704,param_1 + 1);
  fVar11 = (float10)fsin((float10)_DAT_0057dfbe);
  fVar11 = fVar11 * (float10)_DAT_005b0678 * (float10)_DAT_0057dfc6;
  fVar12 = (float10)_DAT_005b0678 * (float10)_DAT_0057dfc6;
  FUN_00563a30();
  local_6c = (int)ROUND(fVar11);
  local_64 = local_6c;
  uVar4 = FUN_00563a30();
  local_68 = (int)ROUND(fVar12);
  FUN_0053075c(*extraout_ECX,uVar4);
  local_6c = -local_6c;
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_6c);
  local_64 = -local_64;
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_6c);
  local_6c = -local_6c;
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_6c);
  piVar3 = DAT_005ae704;
  uVar4 = *param_1;
  *(uint *)(*DAT_005ae704 + 0x20) = uVar4;
  *(uint *)(*piVar3 + 0x24) = uVar4;
  *(uint *)(*piVar3 + 0x28) = uVar4;
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
  local_9c = 0;
  local_90 = 1;
  local_98 = 0x80000;
  local_94 = 0x80000;
  local_8c = 0x80000;
  local_88 = 0x80000;
  local_78 = 3;
  local_84 = 2;
  iVar9 = 0;
  local_80 = 0x80000;
  local_7c = 0x80000;
  local_74 = 0x80000;
  local_70 = 0x80000;
  FUN_0045f460(piVar3,local_b4,0x2c5);
  local_24 = 0;
  do {
    iVar7 = 0;
    iVar10 = local_24;
    do {
      iVar6 = iVar7 + 1;
      FUN_00463440(param_1,iVar9,iVar7,iVar10);
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
      local_9c = local_1c + iVar10;
      local_90 = local_9c + 1;
      local_84 = local_9c + 5;
      local_78 = local_9c + 4;
      iVar5 = iVar9 >> 0x1f;
      iVar6 = iVar9 + iVar5 * -4;
      local_98 = local_14;
      iVar10 = iVar10 + 1;
      local_8c = local_14;
      iVar9 = iVar9 + 0x1000000;
      local_88 = (int)((iVar7 + (iVar7 >> 0x1f) * -4) - (uint)((iVar7 >> 0x1f) << 1 < 0)) >> 2 ^
                 0xffffff;
      local_80 = local_18;
      local_74 = local_18;
      local_94 = (int)(iVar6 - (uint)(iVar5 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar7 = iVar7 + 0x1000000;
      local_7c = local_88;
      local_70 = local_94;
      local_40 = local_90;
      local_3c = local_84;
      local_38 = local_78;
      FUN_0045f460(DAT_005ae704,local_b4,0x2c5);
    } while (iVar10 < 3);
    local_20 = local_20 + 4;
    local_28 = CONCAT13(local_28._3_1_ + '\x01',(undefined3)local_28);
  } while (local_20 != 0x40);
  return;
}
