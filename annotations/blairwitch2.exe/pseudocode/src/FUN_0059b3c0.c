// Name: FUN_0059b3c0
// Address: 0059b3c0
// Address Range: [[0059b3c0, 0059b42a]]
// Convention: unknown
// Signature: void FUN_0059b3c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

void FUN_0059b3c0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  FUN_0040d5a0(param_1 + 0x4c + param_2 * 0x2c,param_3,param_4,param_5);
  iVar1 = param_1 + param_2 * 0x2c;
  *(uint *)(iVar1 + 0x60) = param_6;
  *(uint *)(iVar1 + 100) = param_7;
  *(uint *)(iVar1 + 0x68) = param_8;
  *(uint *)(iVar1 + 0x6c) = param_4;
  *(uint *)(iVar1 + 0x70) = param_5;
  *(uint *)(iVar1 + 0x74) = param_9;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}
