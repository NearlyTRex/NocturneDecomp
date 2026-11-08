// Name: FUN_004180c0
// Address: 004180c0
// Address Range: [[004180c0, 0041813c]]
// Convention: unknown
// Signature: void FUN_004180c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

void FUN_004180c0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  FUN_0040d220(param_1 + 0x70 + param_2 * 0x2c,param_3,param_4,param_5);
  iVar1 = param_1 + param_2 * 0x2c;
  *(uint *)(iVar1 + 0x84) = param_6;
  *(uint *)(iVar1 + 0x88) = param_7;
  *(uint *)(iVar1 + 0x8c) = param_8;
  *(uint *)(iVar1 + 0x90) = param_4;
  *(uint *)(iVar1 + 0x94) = param_5;
  *(uint *)(iVar1 + 0x98) = param_9;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}
