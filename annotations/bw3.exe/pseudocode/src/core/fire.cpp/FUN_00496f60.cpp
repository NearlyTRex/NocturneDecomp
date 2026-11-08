// Name: FUN_00496f60
// Address: 00496f60
// Address Range: [[00496f60, 0049728d]]
// Convention: unknown
// Signature: void FUN_00496f60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496f60(int param_1)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float10 fVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  iVar3 = *DAT_005f2afc;
  local_64 = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005df8e4);
  local_60 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005df8e4);
  local_5c = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005df8e4);
  FUN_0056356c(iVar3,&local_64);
  iVar3 = FUN_0046e6b0(DAT_005f2afc,iVar3);
  if (iVar3 != 0) {
    fVar4 = (float10)*(float *)(param_1 + 0x18);
    FUN_005a3120();
    local_18 = (int)ROUND(fVar4);
    if ((local_18 < 0) || (0x27 < local_18)) {
      _DAT_01d71de0 = "..\\core\\fire.cpp";
      _DAT_01d71de4 = 0x127;
      FUN_004e4330("CSmokeParticle::render - Frame out of range");
    }
    FUN_0046e5e0(DAT_005f2afc,&DAT_005fc5a4 + local_18 * 0x18);
    pfVar1 = (float *)(param_1 + 4);
    FUN_0046ce90(DAT_005f2afc,pfVar1);
    FUN_0046cee0(DAT_005f2afc,&DAT_01c73658,0);
    local_14 = *(float *)(param_1 + 0x14);
    local_50 = 0;
    local_58 = -local_14;
    local_28 = (int)ROUND(local_58 * _DAT_005df8e4);
    local_24 = (int)ROUND(local_58 * _DAT_005df8e4);
    local_20 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    FUN_005632a3(*DAT_005f2afc,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70 = (int)ROUND(local_14 * _DAT_005df8e4);
    local_6c = (int)ROUND(local_1c * _DAT_005df8e4);
    local_68 = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x30,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34 = (int)ROUND(local_14 * _DAT_005df8e4);
    local_30 = (int)ROUND(local_14 * _DAT_005df8e4);
    local_2c = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x60,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c = (int)ROUND(local_1c * _DAT_005df8e4);
    local_48 = (int)ROUND(local_14 * _DAT_005df8e4);
    local_44 = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc + 0x90,&local_4c);
    DAT_0060b02c = 0x80000;
    _DAT_0060b030 = 0xf80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b060 = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    _DAT_0060b0c0 = 0x80000;
    local_40 = (int)ROUND(*pfVar1 * _DAT_005df8e4);
    local_3c = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005df8e4);
    local_38 = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005df8e4);
    FUN_00538400(0x01ED78C8,&local_40,&DAT_01c73664,0,4);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,pfVar1,0);
    lVar2 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)*(int *)(param_1 + 0x28);
    FUN_0046d4c0(DAT_005f2afc,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    FUN_0046c730(DAT_005f2afc,0x1c73670);
    thunk_FUN_004e5ef0(DAT_005f2afc);
  }
  return;
}
