// Name: FUN_0049b380
// Address: 0049b380
// Address Range: [[0049b380, 0049b65f]]
// Convention: unknown
// Signature: void FUN_0049b380(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b380(int param_1)

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
  FUN_0046ca00(DAT_0060b280,*(uint *)(param_1 + 0x20));
  local_80 = 4;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_6c = 0;
  local_60 = 3;
  local_68 = 1;
  local_64 = 2;
  FUN_0046b8f0(DAT_0060b280,*(uint *)(param_1 + 0x14));
  FUN_0046b8d0(DAT_0060b280,1);
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b670(DAT_0060b280);
  uVar2 = 0;
  auStack_40[2] = local_44;
  auStack_40[(uint)bVar1 * -2 + 3] = auStack_40[(uint)bVar1 * -2];
  auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       auStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  FUN_0046b350(DAT_0060b280,auStack_40 + 2,uVar2);
  local_48 = 0.0;
  local_50 = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x14);
  local_2c = (int)ROUND(local_50 * _DAT_005f64e4);
  local_28 = (int)ROUND(local_50 * _DAT_005f64e4);
  local_24 = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_4c = local_50;
  FUN_0055d723(*DAT_0060b280,auStack_40 + 5);
  local_50 = -local_50;
  local_20 = (int)ROUND(local_50 * _DAT_005f64e4);
  local_1c = (int)ROUND(local_4c * _DAT_005f64e4);
  local_18 = (int)ROUND(local_48 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x30,&local_20);
  local_4c = -local_4c;
  local_14 = (int)ROUND(local_50 * _DAT_005f64e4);
  local_10 = (int)ROUND(local_4c * _DAT_005f64e4);
  local_c = (int)ROUND(local_48 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x60,&local_14);
  local_50 = -local_50;
  local_5c = (int)ROUND(local_50 * _DAT_005f64e4);
  local_58 = (int)ROUND(local_4c * _DAT_005f64e4);
  local_54 = (int)ROUND(local_48 * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x90,&local_5c);
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  _DAT_006220c0 = 0x80000;
  DAT_00622034 = 0xffff;
  DAT_00622038 = 0xffff;
  DAT_0062203c = 0xffff;
  DAT_00622064 = 0xffff;
  DAT_00622068 = 0xffff;
  DAT_0062206c = 0xffff;
  DAT_00622094 = 0xffff;
  DAT_00622098 = 0xffff;
  DAT_0062209c = 0xffff;
  DAT_006220c4 = 0xffff;
  DAT_006220c8 = 0xffff;
  DAT_006220cc = 0xffff;
  FUN_0046ab50(DAT_0060b280,local_84);
  thunk_FUN_004e9810(DAT_0060b280);
  FUN_0046b8d0(DAT_0060b280,0);
  return;
}
