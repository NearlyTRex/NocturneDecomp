// Name: FUN_004b6e60
// Address: 004b6e60
// Address Range: [[004b6e60, 004b6ece]]
// Convention: unknown
// Signature: void FUN_004b6e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6e60(uint param_1,uint param_2,uint param_3,uint param_4,float param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 < (float)_DAT_005df664) {
    param_5 = 0.0001;
  }
  iVar1 = FUN_004b6ed0(param_1,0,param_2,param_3,param_4,param_5);
  iVar1 = iVar1 * 0x3e4;
  *(uint *)(iVar1 + 0x1cb056c) = param_6;
  FUN_005737d0(*(uint *)(iVar1 + 0x1cb056c),iVar1 + 0x1cb030c);
  return;
}
