// Name: FUN_00416b80
// Address: 00416b80
// Address Range: [[00416b80, 00416bca]]
// Convention: unknown
// Signature: void FUN_00416b80(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00416b80(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040aca0(param_1,param_2,param_3,param_4);
  uVar1 = FUN_0040ce40(0x40a00000,0x41700000);
  *(uint *)(param_3 + 0x2c) = 0x3ca3d70a;
  *(uint *)(param_3 + 4) = uVar1;
  return;
}
