// Name: FUN_00484f00
// Address: 00484f00
// Address Range: [[00484f00, 004850a1]]
// Convention: unknown
// Signature: void FUN_00484f00(int *param_1)

#include "nocturne.h"

void FUN_00484f00(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*param_1 != 2) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1 + 1);
  FUN_00460aa0(DAT_005ae704,param_1 + 4,0);
  local_20 = FUN_0040dda0(0,0x40c90fdb);
  local_28 = 0;
  local_24 = 0;
  local_10 = local_20;
  local_c = local_20;
  FUN_00460aa0(DAT_005ae704,&local_28,0);
  *(uint *)(0x01E57284 + 0x15a898) = 1;
  FUN_00461000(DAT_005ae704,1);
  uVar2 = FUN_0056488c();
  FUN_00461010(DAT_005ae704,(uVar2 & 0x3fff) + 0x1800);
  FUN_004544d0(0x1c09338,0,99);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3fc90fdb;
  FUN_00460aa0(DAT_005ae704,&local_1c,0);
  FUN_004544d0(0x1c09338,0,99);
  thunk_FUN_004cdbc0(DAT_005ae704);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f490fdb;
  FUN_00460aa0(DAT_005ae704,&local_34,0);
  FUN_004544d0(0x1c09338,0,99);
  thunk_FUN_004cdbc0(DAT_005ae704);
  uVar1 = DAT_005ae704;
  *(uint *)(0x01E57284 + 0x15a898) = 0;
  thunk_FUN_004cdbc0(uVar1);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00461000(DAT_005ae704,0);
  return;
}
