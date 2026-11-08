// Name: FUN_004a0680
// Address: 004a0680
// Address Range: [[004a0680, 004a095f]]
// Convention: unknown
// Signature: void FUN_004a0680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0680(int param_1)

{
  byte bVar1;
  uint auStackY_102c [997];
  uint uVar2;
  byte local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint auStack_40 [5];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar1 = 0;
  if (*(float *)(param_1 + 0x10) <= 0.0) {
    return;
  }
  FUN_0046e5e0(DAT_005f2afc,*(uint *)(param_1 + 0x20));
  local_80 = 4;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  FUN_0046d4d0(DAT_005f2afc,*(uint *)(param_1 + 0x14));
  FUN_0046d4b0(DAT_005f2afc,1);
  FUN_0046ce90(DAT_005f2afc,param_1);
  FUN_0046d250(DAT_005f2afc);
  uVar2 = 0;
  auStack_40[2] = local_44;
  auStack_40[(uint)bVar1 * -2 + 3] = auStack_40[(uint)bVar1 * -2];
  auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  FUN_0046cf30(DAT_005f2afc,auStack_40 + 2,uVar2);
  local_48 = 0.0;
  local_50 = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x14);
  local_2c = (int)ROUND(local_50 * _DAT_005df8e4);
  local_28 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_24 = (int)ROUND(_DAT_005df8e4 * 0.0);
  local_4c = local_50;
  FUN_005632a3(*DAT_005f2afc,auStack_40 + 5);
  local_50 = -local_50;
  local_20 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_1c = (int)ROUND(local_4c * _DAT_005df8e4);
  local_18 = (int)ROUND(local_48 * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc + 0x30,&local_20);
  local_4c = -local_4c;
  local_14 = (int)ROUND(local_50 * _DAT_005df8e4);
  local_10 = (int)ROUND(local_4c * _DAT_005df8e4);
  local_c = (int)ROUND(local_48 * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc + 0x60,&local_14);
  local_50 = -local_50;
  local_5c = (int)ROUND(local_50 * _DAT_005df8e4);
  local_58 = (int)ROUND(local_4c * _DAT_005df8e4);
  local_54 = (int)ROUND(local_48 * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc + 0x90,&local_5c);
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
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
  FUN_0046c730(DAT_005f2afc,local_84);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
