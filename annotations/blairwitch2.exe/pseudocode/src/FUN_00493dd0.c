// Name: FUN_00493dd0
// Address: 00493dd0
// Address Range: [[00493dd0, 00494120]]
// Convention: unknown
// Signature: void FUN_00493dd0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493dd0(float *param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [998];
  float *pfVar3;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float afStack_24 [3];
  int local_18;
  int local_14;
  
  bVar2 = 0;
  if (param_1[4] == 0.0) {
    FUN_0046b2b0(DAT_0060b280,param_1);
    pfVar3 = (float *)0x0;
  }
  else {
    FUN_004089d0(param_1[4]);
    pfVar3 = param_1 + 9;
  }
  FUN_0046b350(DAT_0060b280,param_1 + 5,pfVar3);
  _DAT_0062205c = ((uint)param_1[8] & 1) * 0x800000;
  local_5c = 0;
  DAT_0062202c = _DAT_0062205c + 0x80000;
  iVar1 = ((uint)param_1[8] & 2) * 0x400000;
  _DAT_0062205c = _DAT_0062205c + 0x780000;
  _DAT_00622030 = iVar1 + 0x780000;
  DAT_00622090 = iVar1 + 0x80000;
  local_64 = 0xbe2e147b;
  local_60 = 0xbe2e147b;
  local_4c = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_48 = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_44 = (int)ROUND(_DAT_005f64e4 * 0.0);
  _DAT_00622060 = _DAT_00622030;
  _DAT_0062208c = _DAT_0062205c;
  _DAT_006220bc = DAT_0062202c;
  _DAT_006220c0 = DAT_00622090;
  FUN_0055d723(*DAT_0060b280,&local_4c);
  local_64 = 0x3e2e147b;
  local_60 = 0xbe2e147b;
  local_5c = 0;
  local_7c = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_78 = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_74 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x30,&local_7c);
  local_64 = 0x3e2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  afStack_24[2] = (float)(int)ROUND(_DAT_005f64e4 * 0.17);
  local_18 = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_14 = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x60,afStack_24 + 2);
  local_64 = 0xbe2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_34 = (int)ROUND(_DAT_005f64e4 * -0.17);
  local_30 = (int)ROUND(_DAT_005f64e4 * 0.17);
  local_2c = (int)ROUND(_DAT_005f64e4 * 0.0);
  FUN_0055d723(*DAT_0060b280 + 0x90,&local_34);
  if (param_1[4] == 0.0) {
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
    DAT_00622034 = 0xffff;
  }
  else {
    FUN_00408cf0(param_1[4],param_1 + 0xc);
    local_40 = local_28;
    local_3c[(uint)bVar2 * -2] = afStack_24[(uint)bVar2 * -2];
    local_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_70 = (int)ROUND(*param_1 * _DAT_005f64e4);
    local_6c = (int)ROUND(param_1[1] * _DAT_005f64e4);
    local_68 = (int)ROUND(param_1[2] * _DAT_005f64e4);
    local_58 = (int)ROUND(local_40 * _DAT_005f64e8);
    local_54 = (int)ROUND(local_3c[0] * _DAT_005f64e8);
    local_50 = (int)ROUND(local_3c[1] * _DAT_005f64e8);
    FUN_005317c0(0x01E661B8,&local_70,&local_58,0,4);
  }
  FUN_0046ab50(DAT_0060b280,0x1c3ded0);
  if (param_1[4] == 0.0) {
    thunk_FUN_004e9810(DAT_0060b280);
    return;
  }
  FUN_00408a10(param_1[4]);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
