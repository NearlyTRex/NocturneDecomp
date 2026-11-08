// Name: FUN_00499a00
// Address: 00499a00
// Address Range: [[00499a00, 00499c54]]
// Convention: unknown
// Signature: void FUN_00499a00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499a00(int *param_1)

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
  FUN_0046b2b0(DAT_0060b280,param_1 + 3);
  FUN_0046ca00(DAT_0060b280,&DAT_006157b4);
  local_38 = (int)ROUND((float)param_1[0x10] * _DAT_005f64e4);
  local_34 = (int)ROUND((float)param_1[0x11] * _DAT_005f64e4);
  local_30 = (int)ROUND((float)param_1[0x12] * _DAT_005f64e4);
  FUN_0055d9ec(&DAT_00622014,&local_38);
  local_20 = (int)ROUND((float)param_1[0x13] * _DAT_005f64e4);
  local_1c = (int)ROUND((float)param_1[0x14] * _DAT_005f64e4);
  local_18 = (int)ROUND((float)param_1[0x15] * _DAT_005f64e4);
  FUN_0055d9ec(&DAT_00622044,&local_20);
  local_2c = (int)ROUND((float)param_1[0x16] * _DAT_005f64e4);
  local_28 = (int)ROUND((float)param_1[0x17] * _DAT_005f64e4);
  local_24 = (int)ROUND((float)param_1[0x18] * _DAT_005f64e4);
  FUN_0055d9ec(&DAT_00622074,&local_2c);
  local_14 = (int)ROUND((float)param_1[0x19] * _DAT_005f64e4);
  local_10 = (int)ROUND((float)param_1[0x1a] * _DAT_005f64e4);
  local_c = (int)ROUND((float)param_1[0x1b] * _DAT_005f64e4);
  FUN_0055d9ec(&DAT_006220a4,&local_14);
  DAT_00622034 = 0xffff;
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
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  _DAT_006220c0 = 0x80000;
  local_54 = 0xffff;
  local_58 = 0;
  local_50 = 0;
  local_5c = 3;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_40 = 2;
  FUN_0046b8e0(DAT_0060b280,0xffff);
  FUN_0046ab50(DAT_0060b280,local_60);
  local_48 = 0;
  local_44 = 2;
  local_40 = 3;
  FUN_0046b8e0(DAT_0060b280,0xffff);
  FUN_0046ab50(DAT_0060b280,local_60);
  return;
}
