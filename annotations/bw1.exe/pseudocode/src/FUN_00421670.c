// Name: FUN_00421670
// Address: 00421670
// Address Range: [[00421670, 00421aed]]
// Convention: unknown
// Signature: void FUN_00421670(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421670(float *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1020 [978];
  int local_cc [24];
  byte local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float afStack_34 [2];
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c [2];
  int *local_14;
  
  bVar3 = 0;
  local_14 = local_cc;
  iVar2 = 0;
  do {
    FUN_00420570(param_1,iVar2);
    local_20 = local_38;
    local_1c[(uint)bVar3 * -2] = afStack_34[(uint)bVar3 * -2];
    local_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    *local_14 = (int)ROUND(local_20 * _DAT_005fce08);
    local_14[1] = (int)ROUND(local_1c[0] * _DAT_005fce08);
    local_14[2] = (int)ROUND(local_1c[1] * _DAT_005fce08);
    local_14 = local_14 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00553140(0x01E82168,8,local_cc);
  local_68 = 4;
  FUN_00483d70(DAT_00612560,1);
  FUN_00483d80(DAT_00612560,0);
  local_44 = (int)ROUND(*param_1 * _DAT_005fce08);
  local_40 = (int)ROUND(param_1[1] * _DAT_005fce08);
  local_3c = (int)ROUND(param_1[2] * _DAT_005fce08);
  local_2c = (int)ROUND(param_1[3] * _DAT_005fce08);
  local_28 = (int)ROUND(param_1[4] * _DAT_005fce08);
  local_24 = (int)ROUND(param_1[5] * _DAT_005fce08);
  iVar2 = FUN_00483e60(DAT_00612560);
  piVar1 = DAT_00612560;
  if (iVar2 == 0) {
    _DAT_01c50930 = iVar2;
    _DAT_01c50934 = iVar2;
    *(uint *)(*DAT_00612560 + 0x20) = 0x7fff;
    *(uint *)(*piVar1 + 0x24) = 0;
    *(uint *)(*piVar1 + 0x28) = 0;
    *(uint *)(*piVar1 + 0x50) = 0;
    *(uint *)(*piVar1 + 0x54) = 0x7fff;
    *(uint *)(*piVar1 + 0x58) = 0;
    *(uint *)(*piVar1 + 0x80) = 0;
    *(uint *)(*piVar1 + 0x84) = 0;
    *(uint *)(*piVar1 + 0x88) = 0x7fff;
    *(uint *)(*piVar1 + 0xb0) = 0x7fff;
    *(uint *)(*piVar1 + 0xb4) = 0x7fff;
    *(uint *)(*piVar1 + 0xb8) = 0;
    *(uint *)(*piVar1 + 0xe0) = 0;
    *(uint *)(*piVar1 + 0xe4) = 0x7fff;
    *(uint *)(*piVar1 + 0xe8) = 0x7fff;
    *(uint *)(*piVar1 + 0x110) = 0x7fff;
    *(uint *)(*piVar1 + 0x114) = 0;
    *(uint *)(*piVar1 + 0x118) = 0x7fff;
    *(uint *)(*piVar1 + 0x140) = 0x7fff;
    *(uint *)(*piVar1 + 0x144) = 0x7fff;
    *(uint *)(*piVar1 + 0x148) = 0x7fff;
    *(uint *)(*piVar1 + 0x170) = 0;
    *(uint *)(*piVar1 + 0x174) = 0;
    *(uint *)(*piVar1 + 0x178) = 0;
  }
  local_64 = 0xffffffff;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 4;
  local_4c = 6;
  local_58 = -local_44;
  local_48 = 2;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  local_54 = 1;
  local_58 = local_2c;
  local_50 = 3;
  local_4c = 7;
  local_48 = 5;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 5;
  local_48 = 4;
  local_58 = -local_40;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 1;
  local_5c = 0;
  local_58 = local_28;
  local_50 = 6;
  local_48 = 3;
  local_4c = 7;
  local_54 = 2;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  local_54 = 0;
  local_4c = 3;
  local_50 = 2;
  local_58 = -local_3c;
  local_48 = 1;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0;
  local_5c = 1;
  local_58 = local_24;
  local_50 = 5;
  local_54 = 4;
  local_4c = 7;
  local_48 = 6;
  FUN_00482170(DAT_00612560,local_6c,0x2c4);
  return;
}
