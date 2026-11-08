// Name: FUN_0049a9f0
// Address: 0049a9f0
// Address Range: [[0049a9f0, 0049ac03]]
// Convention: unknown
// Signature: void FUN_0049a9f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a9f0(float *param_1)

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
  
  FUN_0046ce90(DAT_005f2afc,param_1);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x23,0);
  iStack_28 = (int)ROUND(param_1[0x2c] * _DAT_005df8e4);
  iStack_24 = (int)ROUND(param_1[0x2d] * _DAT_005df8e4);
  iStack_20 = (int)ROUND(param_1[0x2e] * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc,&iStack_28);
  iStack_1c = (int)ROUND(param_1[0x2f] * _DAT_005df8e4);
  iStack_18 = (int)ROUND(param_1[0x30] * _DAT_005df8e4);
  iStack_14 = (int)ROUND(param_1[0x31] * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc + 0x30,&iStack_1c);
  iStack_34 = (int)ROUND(param_1[0x32] * _DAT_005df8e4);
  iStack_30 = (int)ROUND(param_1[0x33] * _DAT_005df8e4);
  iStack_2c = (int)ROUND(param_1[0x34] * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc + 0x60,&iStack_34);
  FUN_0046e5e0(DAT_005f2afc,param_1 + 0x11);
  uStack_64 = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  FUN_0046d4c0(DAT_005f2afc,param_1[0x10]);
  iStack_40 = (int)ROUND(*param_1 * _DAT_005df8e4);
  iStack_3c = (int)ROUND(param_1[1] * _DAT_005df8e4);
  iStack_38 = (int)ROUND(param_1[2] * _DAT_005df8e4);
  FUN_00538400(0x01ED78C8,&iStack_40,0,0,3);
  DAT_0060b02c = param_1[0x26];
  _DAT_0060b030 = param_1[0x29];
  _DAT_0060b05c = param_1[0x27];
  _DAT_0060b060 = param_1[0x2a];
  _DAT_0060b08c = param_1[0x28];
  DAT_0060b090 = param_1[0x2b];
  FUN_0046d4b0(DAT_005f2afc,0);
  FUN_0046c730(DAT_005f2afc,auStack_68);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
