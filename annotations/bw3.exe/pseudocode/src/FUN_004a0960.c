// Name: FUN_004a0960
// Address: 004a0960
// Address Range: [[004a0960, 004a09eb]]
// Convention: unknown
// Signature: void FUN_004a0960(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004a0960(int param_1,uint param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  FUN_00509e40(param_1,param_2,param_4);
  if ((uint *)(param_1 + 0x40) != param_3) {
    *(uint *)(param_1 + 0x40) = *param_3;
    *(uint *)(param_1 + 0x44) = param_3[1];
    *(uint *)(param_1 + 0x48) = param_3[2];
  }
  *(uint *)(param_1 + 0x5c) = param_5;
  uVar1 = FUN_0040ce40(0xc0c90fdb,0x40c90fdb);
  *(uint *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_0040ce40(0xc0490fdb,0x40490fdb);
  *(uint *)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x24) = 0x40400000;
  *(uint *)(param_1 + 0x50) = uVar1;
  return;
}
