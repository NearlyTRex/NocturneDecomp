// Name: FUN_0041dcd0
// Address: 0041dcd0
// Address Range: [[0041dcd0, 0041e0f4]]
// Convention: unknown
// Signature: undefined4 FUN_0041dcd0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0041dcd0(float *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1034 [1003];
  byte auStack_80 [4];
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float afStack_48 [4];
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar5 = 0;
  iVar2 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0xff;
  do {
    FUN_0041d8b0(param_1,local_14);
    afStack_48[2] = local_4c;
    afStack_48[(uint)bVar5 * -2 + 3] = afStack_48[(uint)bVar5 * -2];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_28 = (int)ROUND(afStack_48[2] * _DAT_005dc948);
    local_24 = (int)ROUND(afStack_48[3] * _DAT_005dc948);
    local_20 = (int)ROUND(local_38 * _DAT_005dc948);
    FUN_005632a3(*0x01BDD7E4 + iVar2,&local_28);
    if ((*(byte *)(*DAT_005f2afc + 0x13 + iVar2) & 0x80) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 & *(uint *)(*0x01BDD7E4 + 0x10 + iVar2);
      local_1c = 1;
    }
    uVar1 = local_18;
    local_14 = local_14 + 1;
    iVar2 = iVar2 + 0x30;
  } while (local_14 < 8);
  if (local_18 != 0) {
    return 0;
  }
  FUN_0046d500(DAT_005f2afc,local_1c);
  local_7c = 4;
  FUN_0046d450(DAT_005f2afc,0);
  uVar4 = 1;
  local_34 = (int)ROUND(*param_1 * _DAT_005dc948);
  local_30 = (int)ROUND(param_1[1] * _DAT_005dc948);
  local_2c = (int)ROUND(param_1[2] * _DAT_005dc948);
  uVar3 = 1;
  local_58 = (int)ROUND(param_1[3] * _DAT_005dc948);
  local_54 = (int)ROUND(param_1[4] * _DAT_005dc948);
  local_50 = (int)ROUND(param_1[5] * _DAT_005dc948);
  local_74 = uVar1;
  local_70 = uVar1;
  local_6c = -local_34;
  local_78 = 0xffffffff;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_68 = uVar1;
    local_64 = 4;
    local_60 = 6;
    local_5c = 2;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_0041e09c;
    uVar4 = 0;
  }
  local_6c = local_58;
  local_78 = 1;
  local_74 = 0;
  local_70 = 0;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 1;
    local_64 = 3;
    local_5c = 5;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_0041e09c;
    uVar4 = 0;
  }
  local_78 = 0;
  local_74 = 0xffffffff;
  local_6c = -local_30;
  local_70 = 0;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_68 = 0;
    local_60 = 5;
    local_5c = 4;
    local_64 = 1;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_0041e09c;
    uVar4 = 0;
  }
  local_6c = local_54;
  local_78 = 0;
  local_74 = 1;
  local_70 = 0;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 2;
    local_64 = 6;
    local_5c = 3;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_0041e09c;
    uVar4 = 0;
  }
  local_70 = 0xffffffff;
  local_78 = 0;
  local_6c = -local_2c;
  local_74 = 0;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_68 = 0;
    local_60 = 3;
    local_5c = 1;
    local_64 = 2;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_0041e09c;
    uVar4 = 0;
  }
  local_6c = local_50;
  local_78 = 0;
  local_74 = 0;
  local_70 = 1;
  iVar2 = FUN_00403920(&local_78);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 4;
    local_64 = 5;
    local_5c = 6;
    iVar2 = FUN_0053b250(0x01ED78C8,auStack_80);
    uVar4 = uVar3;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
LAB_0041e09c:
  FUN_0046d500(DAT_005f2afc,1);
  FUN_0046d450(DAT_005f2afc,1);
  return uVar4;
}
