// Name: FUN_004af430
// Address: 004af430
// Address Range: [[004af430, 004af5d1]]
// Convention: unknown
// Signature: void FUN_004af430(int *param_1)

#include "nocturne.h"

void FUN_004af430(int *param_1)

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
  FUN_004837b0(DAT_00612560,param_1 + 1);
  FUN_00483850(DAT_00612560,param_1 + 4,0);
  local_20 = FUN_0040cc00(0,0x40c90fdb);
  local_28 = 0;
  local_24 = 0;
  local_10 = local_20;
  local_c = local_20;
  FUN_00483850(DAT_00612560,&local_28,0);
  *(uint *)(0x01E82168 + 0x15ac90) = 1;
  FUN_00483dd0(DAT_00612560,1);
  uVar2 = FUN_005c084c();
  FUN_00483de0(DAT_00612560,(uVar2 & 0x3fff) + 0x1800);
  FUN_004688a0(0x1c57c98,0,99);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3fc90fdb;
  FUN_00483850(DAT_00612560,&local_1c,0);
  FUN_004688a0(0x1c57c98,0,99);
  thunk_FUN_005084b0(DAT_00612560);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f490fdb;
  FUN_00483850(DAT_00612560,&local_34,0);
  FUN_004688a0(0x1c57c98,0,99);
  thunk_FUN_005084b0(DAT_00612560);
  uVar1 = DAT_00612560;
  *(uint *)(0x01E82168 + 0x15ac90) = 0;
  thunk_FUN_005084b0(uVar1);
  thunk_FUN_005084b0(DAT_00612560);
  FUN_00483dd0(DAT_00612560,0);
  return;
}
