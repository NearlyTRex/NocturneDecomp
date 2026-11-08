// Name: FUN_00493710
// Address: 00493710
// Address Range: [[00493710, 00493a3d]]
// Convention: unknown
// Signature: void FUN_00493710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493710(int param_1)

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
  
  iVar3 = *DAT_0060b280;
  local_64 = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005f64e4);
  local_60 = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005f64e4);
  local_5c = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005f64e4);
  FUN_0055d9ec(iVar3,&local_64);
  iVar3 = FUN_0046cad0(DAT_0060b280,iVar3);
  if (iVar3 != 0) {
    fVar4 = (float10)*(float *)(param_1 + 0x18);
    FUN_005b7ff0();
    local_18 = (int)ROUND(fVar4);
    if ((local_18 < 0) || (0x27 < local_18)) {
      _DAT_01d046a0 = "..\\core\\fire.cpp";
      _DAT_01d046a4 = 0x11d;
      FUN_004e4500("CSmokeParticle::render - Frame out of range");
    }
    FUN_0046ca00(DAT_0060b280,&DAT_00614d34 + local_18 * 0x18);
    pfVar1 = (float *)(param_1 + 4);
    FUN_0046b2b0(DAT_0060b280,pfVar1);
    FUN_0046b300(DAT_0060b280,&DAT_01c3deb8,0);
    local_14 = *(float *)(param_1 + 0x14);
    local_50 = 0;
    local_58 = -local_14;
    local_28 = (int)ROUND(local_58 * _DAT_005f64e4);
    local_24 = (int)ROUND(local_58 * _DAT_005f64e4);
    local_20 = (int)ROUND(_DAT_005f64e4 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    FUN_0055d723(*DAT_0060b280,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70 = (int)ROUND(local_14 * _DAT_005f64e4);
    local_6c = (int)ROUND(local_1c * _DAT_005f64e4);
    local_68 = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x30,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34 = (int)ROUND(local_14 * _DAT_005f64e4);
    local_30 = (int)ROUND(local_14 * _DAT_005f64e4);
    local_2c = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x60,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c = (int)ROUND(local_1c * _DAT_005f64e4);
    local_48 = (int)ROUND(local_14 * _DAT_005f64e4);
    local_44 = (int)ROUND(_DAT_005f64e4 * 0.0);
    FUN_0055d723(*DAT_0060b280 + 0x90,&local_4c);
    DAT_0062202c = 0x80000;
    _DAT_00622030 = 0xf80000;
    _DAT_0062205c = 0xf80000;
    _DAT_00622060 = 0xf80000;
    _DAT_0062208c = 0xf80000;
    DAT_00622090 = 0x80000;
    _DAT_006220bc = 0x80000;
    _DAT_006220c0 = 0x80000;
    local_40 = (int)ROUND(*pfVar1 * _DAT_005f64e4);
    local_3c = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005f64e4);
    local_38 = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005f64e4);
    FUN_005317c0(0x01E661B8,&local_40,&DAT_01c3dec4,0,4);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,pfVar1,0);
    lVar2 = (longlong)(0xffff - _DAT_01c38aec) * (longlong)*(int *)(param_1 + 0x28);
    FUN_0046b8e0(DAT_0060b280,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    FUN_0046ab50(DAT_0060b280,0x1c3ded0);
    thunk_FUN_004e9810(DAT_0060b280);
  }
  return;
}
