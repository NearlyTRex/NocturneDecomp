// Name: FUN_004af9f0
// Address: 004af9f0
// Address Range: [[004af9f0, 004afbee]]
// Convention: unknown
// Signature: void FUN_004af9f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af9f0(float *param_1)

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
  
  FUN_004837b0(DAT_00612560,param_1);
  FUN_00483850(DAT_00612560,param_1 + 0x17,0);
  iStack_28 = (int)ROUND(param_1[0x20] * _DAT_005fff94);
  iStack_24 = (int)ROUND(param_1[0x21] * _DAT_005fff94);
  iStack_20 = (int)ROUND(param_1[0x22] * _DAT_005fff94);
  FUN_00580173(*DAT_00612560,&iStack_28);
  iStack_1c = (int)ROUND(param_1[0x23] * _DAT_005fff94);
  iStack_18 = (int)ROUND(param_1[0x24] * _DAT_005fff94);
  iStack_14 = (int)ROUND(param_1[0x25] * _DAT_005fff94);
  FUN_00580173(*DAT_00612560 + 0x30,&iStack_1c);
  iStack_34 = (int)ROUND(param_1[0x26] * _DAT_005fff94);
  iStack_30 = (int)ROUND(param_1[0x27] * _DAT_005fff94);
  iStack_2c = (int)ROUND(param_1[0x28] * _DAT_005fff94);
  FUN_00580173(*DAT_00612560 + 0x60,&iStack_34);
  FUN_00484f00(DAT_00612560,param_1 + 0x11);
  uStack_64 = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  FUN_00483de0(DAT_00612560,param_1[0x10]);
  iStack_40 = (int)ROUND(*param_1 * _DAT_005fff94);
  iStack_3c = (int)ROUND(param_1[1] * _DAT_005fff94);
  iStack_38 = (int)ROUND(param_1[2] * _DAT_005fff94);
  FUN_00552a70(0x01E82168,&iStack_40,0,0,3);
  DAT_0062902c = param_1[0x1a];
  _DAT_00629030 = param_1[0x1d];
  _DAT_0062905c = param_1[0x1b];
  _DAT_00629060 = param_1[0x1e];
  _DAT_0062908c = param_1[0x1c];
  DAT_00629090 = param_1[0x1f];
  FUN_00483dd0(DAT_00612560,0);
  FUN_00483050(DAT_00612560,auStack_68);
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
