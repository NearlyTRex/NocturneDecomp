// Name: FUN_00412320
// Address: 00412320
// Address Range: [[00412320, 004123bb]]
// Convention: unknown
// Signature: void FUN_00412320(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412320(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  FUN_0040d460(param_1 + 0x54 + param_2 * 0x2c,param_3,param_4,param_5);
  iVar1 = param_1 + param_2 * 0x2c;
  *(uint *)(iVar1 + 0x68) = param_6;
  *(uint *)(iVar1 + 0x6c) = param_7;
  *(uint *)(iVar1 + 0x70) = param_8;
  *(uint *)(iVar1 + 0x74) = param_4;
  *(uint *)(iVar1 + 0x78) = param_5;
  *(uint *)(iVar1 + 0x7c) = param_9;
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 < 0x33) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\bmppuzzl.cpp";
  _DAT_01d71de4 = 0x290;
  FUN_004e4330("Too damn many buttons");
  return;
}
