// Name: FUN_0041af50
// Address: 0041af50
// Address Range: [[0041af50, 0041af9a]]
// Convention: unknown
// Signature: void FUN_0041af50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0041af50(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040aa60(param_1,param_2,param_3,param_4);
  uVar1 = FUN_0040cc00(0x40a00000,0x41700000);
  *(uint *)(param_3 + 0x2c) = 0x3ca3d70a;
  *(uint *)(param_3 + 4) = uVar1;
  return;
}
