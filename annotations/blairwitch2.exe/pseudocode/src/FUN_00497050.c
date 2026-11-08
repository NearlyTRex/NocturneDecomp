// Name: FUN_00497050
// Address: 00497050
// Address Range: [[00497050, 0049724e]]
// Convention: unknown
// Signature: void FUN_00497050(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497050(float *param_1)

{
  byte auStack_68 [4];
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b350(DAT_0060b280,param_1 + 0x17,0);
  iStack_28 = (int)ROUND(param_1[0x20] * _DAT_005f64e4);
  iStack_24 = (int)ROUND(param_1[0x21] * _DAT_005f64e4);
  iStack_20 = (int)ROUND(param_1[0x22] * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280,&iStack_28);
  iStack_1c = (int)ROUND(param_1[0x23] * _DAT_005f64e4);
  iStack_18 = (int)ROUND(param_1[0x24] * _DAT_005f64e4);
  iStack_14 = (int)ROUND(param_1[0x25] * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x30,&iStack_1c);
  iStack_34 = (int)ROUND(param_1[0x26] * _DAT_005f64e4);
  iStack_30 = (int)ROUND(param_1[0x27] * _DAT_005f64e4);
  iStack_2c = (int)ROUND(param_1[0x28] * _DAT_005f64e4);
  FUN_0055d723(*DAT_0060b280 + 0x60,&iStack_34);
  FUN_0046ca00(DAT_0060b280,param_1 + 0x11);
  uStack_64 = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  FUN_0046b8e0(DAT_0060b280,param_1[0x10]);
  iStack_40 = (int)ROUND(*param_1 * _DAT_005f64e4);
  iStack_3c = (int)ROUND(param_1[1] * _DAT_005f64e4);
  iStack_38 = (int)ROUND(param_1[2] * _DAT_005f64e4);
  FUN_005317c0(0x01E661B8,&iStack_40,0,0,3);
  DAT_0062202c = param_1[0x1a];
  _DAT_00622030 = param_1[0x1d];
  _DAT_0062205c = param_1[0x1b];
  _DAT_00622060 = param_1[0x1e];
  _DAT_0062208c = param_1[0x1c];
  DAT_00622090 = param_1[0x1f];
  FUN_0046b8d0(DAT_0060b280,0);
  FUN_0046ab50(DAT_0060b280,auStack_68);
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
