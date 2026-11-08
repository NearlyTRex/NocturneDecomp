// Name: FUN_004a3920
// Address: 004a3920
// Address Range: [[004a3920, 004a399e]]
// Convention: unknown
// Signature: void FUN_004a3920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3920(uint param_1,uint param_2,uint param_3,uint param_4,float param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 < (float)_DAT_005c0a40) {
    param_5 = 0.0001;
  }
  iVar1 = FUN_004a3a30(param_1,0,param_2,param_3,param_4,param_5);
  iVar1 = iVar1 * 1000;
  *(uint *)(iVar1 + 0x1cf65b8) = param_6;
  FUN_00556930(*(uint *)(iVar1 + 0x1cf65b8),iVar1 + 0x1cf6354);
  return;
}
