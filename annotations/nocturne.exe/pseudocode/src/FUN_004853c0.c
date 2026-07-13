// Name: FUN_004853c0
// Address: 004853c0
// Address Range: [[004853c0, 004855bb]]
// Convention: unknown
// Signature: void FUN_004853c0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004853c0(float *param_1)

{
  byte auStack_68 [4];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
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
  
  FUN_00460a00(DAT_005ae704,param_1);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x15,0);
  local_28 = (int)ROUND(param_1[0x1e] * _DAT_0059d1f8);
  local_24 = (int)ROUND(param_1[0x1f] * _DAT_0059d1f8);
  local_20 = (int)ROUND(param_1[0x20] * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704,&local_28);
  local_1c = (int)ROUND(param_1[0x21] * _DAT_0059d1f8);
  local_18 = (int)ROUND(param_1[0x22] * _DAT_0059d1f8);
  local_14 = (int)ROUND(param_1[0x23] * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_1c);
  local_34 = (int)ROUND(param_1[0x24] * _DAT_0059d1f8);
  local_30 = (int)ROUND(param_1[0x25] * _DAT_0059d1f8);
  local_2c = (int)ROUND(param_1[0x26] * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_34);
  FUN_00461eb0(DAT_005ae704,param_1 + 0xf);
  local_64 = 3;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_50 = 0;
  local_4c = 1;
  local_48 = 2;
  FUN_00461010(DAT_005ae704,param_1[0xe]);
  local_40 = (int)ROUND(*param_1 * _DAT_0059d1f8);
  local_3c = (int)ROUND(param_1[1] * _DAT_0059d1f8);
  local_38 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
  FUN_0050bb50(0x01E57284,&local_40,0,0,3);
  DAT_005c502c = param_1[0x18];
  _DAT_005c5030 = param_1[0x1b];
  _DAT_005c505c = param_1[0x19];
  _DAT_005c5060 = param_1[0x1c];
  _DAT_005c508c = param_1[0x1a];
  _DAT_005c5090 = param_1[0x1d];
  FUN_00461000(DAT_005ae704,0);
  FUN_004602a0(DAT_005ae704,auStack_68);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
