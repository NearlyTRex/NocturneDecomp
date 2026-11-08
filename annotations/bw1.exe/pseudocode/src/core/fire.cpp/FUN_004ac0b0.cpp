// Name: FUN_004ac0b0
// Address: 004ac0b0
// Address Range: [[004ac0b0, 004ac3dd]]
// Convention: unknown
// Signature: void FUN_004ac0b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac0b0(int param_1)

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
  
  iVar3 = *DAT_00612560;
  local_64 = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005fff94);
  local_60 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005fff94);
  local_5c = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005fff94);
  FUN_0058043c(iVar3,&local_64);
  iVar3 = FUN_00484fd0(DAT_00612560,iVar3);
  if (iVar3 != 0) {
    fVar4 = (float10)*(float *)(param_1 + 0x18);
    FUN_005c03a0();
    local_18 = (int)ROUND(fVar4);
    if ((local_18 < 0) || (0x27 < local_18)) {
      _DAT_01d1d400 = "..\\core\\fire.cpp";
      _DAT_01d1d404 = 0x11d;
      FUN_005030e0("CSmokeParticle::render - Frame out of range");
    }
    FUN_00484f00(DAT_00612560,&DAT_0061c014 + local_18 * 0x18);
    pfVar1 = (float *)(param_1 + 4);
    FUN_004837b0(DAT_00612560,pfVar1);
    FUN_00483800(DAT_00612560,&DAT_01c57078,0);
    local_14 = *(float *)(param_1 + 0x14);
    local_50 = 0;
    local_58 = -local_14;
    local_28 = (int)ROUND(local_58 * _DAT_005fff94);
    local_24 = (int)ROUND(local_58 * _DAT_005fff94);
    local_20 = (int)ROUND(_DAT_005fff94 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    FUN_00580173(*DAT_00612560,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70 = (int)ROUND(local_14 * _DAT_005fff94);
    local_6c = (int)ROUND(local_1c * _DAT_005fff94);
    local_68 = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x30,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34 = (int)ROUND(local_14 * _DAT_005fff94);
    local_30 = (int)ROUND(local_14 * _DAT_005fff94);
    local_2c = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x60,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c = (int)ROUND(local_1c * _DAT_005fff94);
    local_48 = (int)ROUND(local_14 * _DAT_005fff94);
    local_44 = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560 + 0x90,&local_4c);
    DAT_0062902c = 0x80000;
    _DAT_00629030 = 0xf80000;
    _DAT_0062905c = 0xf80000;
    _DAT_00629060 = 0xf80000;
    _DAT_0062908c = 0xf80000;
    DAT_00629090 = 0x80000;
    _DAT_006290bc = 0x80000;
    _DAT_006290c0 = 0x80000;
    local_40 = (int)ROUND(*pfVar1 * _DAT_005fff94);
    local_3c = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005fff94);
    local_38 = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005fff94);
    FUN_00552a70(0x01E82168,&local_40,&DAT_01c57084,0,4);
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,pfVar1,0);
    lVar2 = (longlong)(0xffff - _DAT_01c51cac) * (longlong)*(int *)(param_1 + 0x28);
    FUN_00483de0(DAT_00612560,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    FUN_00483050(DAT_00612560,0x1c57090);
    thunk_FUN_005084b0(DAT_00612560);
  }
  return;
}
