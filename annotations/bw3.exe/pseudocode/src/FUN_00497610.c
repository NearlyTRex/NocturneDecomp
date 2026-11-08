// Name: FUN_00497610
// Address: 00497610
// Address Range: [[00497610, 00497a2a]]
// Convention: unknown
// Signature: void FUN_00497610(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497610(float *param_1)

{
  float fVar1;
  byte bVar2;
  float afStackY_1060 [1010];
  byte *puVar3;
  float *pfVar4;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  float afStack_74 [3];
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_14 = 0.0;
  if (param_1[4] == 0.0) {
    FUN_0046ce90(DAT_005f2afc,param_1);
    pfVar4 = (float *)0x0;
  }
  else {
    FUN_004087f0(param_1[4]);
    pfVar4 = param_1 + 9;
  }
  FUN_0046cf30(DAT_005f2afc,param_1 + 5,pfVar4);
  fVar1 = param_1[0xf];
  if (fVar1 == 0.0) {
    puVar3 = &DAT_005fc964;
  }
  else if (fVar1 == 1.4013e-45) {
    puVar3 = &DAT_005fc97c;
  }
  else {
    if (fVar1 != 2.8026e-45) goto LAB_0049766e;
    puVar3 = &DAT_005fc994;
  }
  FUN_0046e5e0(DAT_005f2afc,puVar3);
LAB_0049766e:
  if (param_1[0xf] == 0.0) {
    _DAT_0060b08c = ((uint)param_1[8] & 1) * 0x800000;
    _DAT_0060b0bc = _DAT_0060b08c + 0x80000;
    _DAT_0060b0c0 = ((uint)param_1[8] & 2) * 0x400000;
    _DAT_0060b08c = _DAT_0060b08c + 0x780000;
    _DAT_0060b060 = _DAT_0060b0c0 + 0x780000;
    _DAT_0060b0c0 = _DAT_0060b0c0 + 0x80000;
  }
  else {
    _DAT_0060b060 = 0xfe0000;
    _DAT_0060b08c = 0xfe0000;
    _DAT_0060b0bc = 0x20000;
    _DAT_0060b0c0 = 0x20000;
  }
  fVar1 = param_1[0xf];
  if (fVar1 == 0.0) {
    local_14 = 0.17;
  }
  else if (fVar1 == 1.4013e-45) {
    local_14 = 1.0;
  }
  else if (fVar1 == 2.8026e-45) {
    local_14 = 0.5;
  }
  local_60 = -local_14;
  local_58 = 0;
  afStack_74[2] = (float)(int)ROUND(local_60 * _DAT_005df8e4);
  local_68 = (int)ROUND(local_60 * _DAT_005df8e4);
  local_64 = (int)ROUND(_DAT_005df8e4 * 0.0);
  DAT_0060b02c = _DAT_0060b0bc;
  _DAT_0060b030 = _DAT_0060b060;
  _DAT_0060b05c = _DAT_0060b08c;
  DAT_0060b090 = _DAT_0060b0c0;
  local_5c = local_60;
  local_18 = local_60;
  FUN_005632a3(*DAT_005f2afc,afStack_74 + 2);
  local_60 = local_14;
  local_5c = local_18;
  local_58 = 0;
  local_48 = (int)ROUND(local_14 * _DAT_005df8e4);
  local_44 = (int)ROUND(local_18 * _DAT_005df8e4);
  local_40 = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x30,&local_48);
  local_60 = local_14;
  local_5c = local_14;
  local_58 = 0;
  local_84 = (int)ROUND(local_14 * _DAT_005df8e4);
  local_80 = (int)ROUND(local_14 * _DAT_005df8e4);
  local_7c = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x60,&local_84);
  local_60 = local_18;
  local_5c = local_14;
  local_58 = 0;
  local_54 = (int)ROUND(local_18 * _DAT_005df8e4);
  local_50 = (int)ROUND(local_14 * _DAT_005df8e4);
  local_4c = (int)ROUND(_DAT_005df8e4 * 0.0);
  FUN_005632a3(*DAT_005f2afc + 0x90,&local_54);
  if (param_1[4] == 0.0) {
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
    DAT_0060b034 = 0xffff;
  }
  else {
    FUN_00408b00(param_1[4],param_1 + 0xc);
    local_30 = local_78;
    local_2c[(uint)bVar2 * -2] = afStack_74[(uint)bVar2 * -2];
    local_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_24 = (int)ROUND(*param_1 * _DAT_005df8e4);
    local_20 = (int)ROUND(param_1[1] * _DAT_005df8e4);
    local_1c = (int)ROUND(param_1[2] * _DAT_005df8e4);
    local_3c = (int)ROUND(local_30 * _DAT_005df8e8);
    local_38 = (int)ROUND(local_2c[0] * _DAT_005df8e8);
    local_34 = (int)ROUND(local_2c[1] * _DAT_005df8e8);
    FUN_00538400(0x01ED78C8,&local_24,&local_3c,0,4);
  }
  FUN_0046c730(DAT_005f2afc,0x1c73670);
  if (param_1[4] == 0.0) {
    thunk_FUN_004e5ef0(DAT_005f2afc);
    return;
  }
  FUN_00408830(param_1[4]);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
