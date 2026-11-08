// Name: FUN_0049d980
// Address: 0049d980
// Address Range: [[0049d980, 0049dbd4]]
// Convention: unknown
// Signature: void FUN_0049d980(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d980(int *param_1)

{
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_0046ce90(DAT_005f2afc,param_1 + 3);
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fd5f4);
  local_38 = (int)ROUND((float)param_1[0x10] * _DAT_005df8e4);
  local_34 = (int)ROUND((float)param_1[0x11] * _DAT_005df8e4);
  local_30 = (int)ROUND((float)param_1[0x12] * _DAT_005df8e4);
  FUN_0056356c(&DAT_0060b014,&local_38);
  local_20 = (int)ROUND((float)param_1[0x13] * _DAT_005df8e4);
  local_1c = (int)ROUND((float)param_1[0x14] * _DAT_005df8e4);
  local_18 = (int)ROUND((float)param_1[0x15] * _DAT_005df8e4);
  FUN_0056356c(&DAT_0060b044,&local_20);
  local_2c = (int)ROUND((float)param_1[0x16] * _DAT_005df8e4);
  local_28 = (int)ROUND((float)param_1[0x17] * _DAT_005df8e4);
  local_24 = (int)ROUND((float)param_1[0x18] * _DAT_005df8e4);
  FUN_0056356c(&DAT_0060b074,&local_2c);
  local_14 = (int)ROUND((float)param_1[0x19] * _DAT_005df8e4);
  local_10 = (int)ROUND((float)param_1[0x1a] * _DAT_005df8e4);
  local_c = (int)ROUND((float)param_1[0x1b] * _DAT_005df8e4);
  FUN_0056356c(&DAT_0060b0a4,&local_14);
  DAT_0060b034 = 0xffff;
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
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  _DAT_0060b0c0 = 0x80000;
  local_54 = 0xffff;
  local_58 = 0;
  local_50 = 0;
  local_5c = 3;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  FUN_0046d4c0(DAT_005f2afc,0xffff);
  FUN_0046c730(DAT_005f2afc,local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  FUN_0046d4c0(DAT_005f2afc,0xffff);
  FUN_0046c730(DAT_005f2afc,local_60);
  return;
}
