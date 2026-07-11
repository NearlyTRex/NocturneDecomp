// Name: FUN_00482f50
// Address: 00482f50
// Address Range: [[00482f50, 0048328b]]
// Convention: unknown
// Signature: void FUN_00482f50(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482f50(float *param_1)

{
  float *pfVar1;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[4] == 0.0) {
    FUN_00460a00(DAT_005ae704,param_1);
    pfVar1 = (float *)0x0;
  }
  else {
    FUN_00409f20(param_1[4]);
    pfVar1 = param_1 + 9;
  }
  FUN_00460aa0(DAT_005ae704,param_1 + 5,pfVar1);
  _DAT_005c505c = ((uint)param_1[8] & 1) * 0x800000;
  local_50 = 0;
  DAT_005c502c = _DAT_005c505c + 0x80000;
  _DAT_005c5090 = ((uint)param_1[8] & 2) * 0x400000;
  _DAT_005c505c = _DAT_005c505c + 0x780000;
  _DAT_005c5030 = _DAT_005c5090 + 0x780000;
  _DAT_005c5090 = _DAT_005c5090 + 0x80000;
  local_58 = 0xbe2e147b;
  local_54 = 0xbe2e147b;
  local_40 = (int)ROUND(_DAT_0059d1f8 * -0.17);
  local_3c = (int)ROUND(_DAT_0059d1f8 * -0.17);
  local_38 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  _DAT_005c5060 = _DAT_005c5030;
  _DAT_005c508c = _DAT_005c505c;
  _DAT_005c50bc = DAT_005c502c;
  _DAT_005c50c0 = _DAT_005c5090;
  FUN_0053075c(*DAT_005ae704,&local_40);
  local_58 = 0x3e2e147b;
  local_54 = 0xbe2e147b;
  local_50 = 0;
  local_70 = (int)ROUND(_DAT_0059d1f8 * 0.17);
  local_6c = (int)ROUND(_DAT_0059d1f8 * -0.17);
  local_68 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_70);
  local_58 = 0x3e2e147b;
  local_54 = 0x3e2e147b;
  local_50 = 0;
  local_1c = (int)ROUND(_DAT_0059d1f8 * 0.17);
  local_18 = (int)ROUND(_DAT_0059d1f8 * 0.17);
  local_14 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_1c);
  local_58 = 0xbe2e147b;
  local_50 = 0;
  local_54 = 0x3e2e147b;
  local_28 = (int)ROUND(_DAT_0059d1f8 * -0.17);
  local_24 = (int)ROUND(_DAT_0059d1f8 * 0.17);
  local_20 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_28);
  if (param_1[4] == 0.0) {
    FUN_00447760(_DAT_007f7370,&DAT_005c5014);
    FUN_00447760(_DAT_007f7370,&DAT_005c5044);
    FUN_00447760(_DAT_007f7370,&DAT_005c5074);
    FUN_00447760(_DAT_007f7370,&DAT_005c50a4);
  }
  else {
    FUN_0040a200(param_1[4],&local_34,param_1 + 0xc);
    local_64 = (int)ROUND(*param_1 * _DAT_0059d1f8);
    local_60 = (int)ROUND(param_1[1] * _DAT_0059d1f8);
    local_5c = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    local_4c = (int)ROUND(local_34 * _DAT_0059d1fc);
    local_48 = (int)ROUND(local_30 * _DAT_0059d1fc);
    local_44 = (int)ROUND(local_2c * _DAT_0059d1fc);
    FUN_0050bb50(0x01E57284,&local_64,&local_4c,0,4);
  }
  FUN_004602a0(DAT_005ae704,0x1c08d20);
  if (param_1[4] == 0.0) {
    thunk_FUN_004cdbc0(DAT_005ae704);
    return;
  }
  FUN_00409f60(param_1[4]);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
