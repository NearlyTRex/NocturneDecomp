// Name: FUN_004b3f40
// Address: 004b3f40
// Address Range: [[004b3f40, 004b3fd8]]
// Convention: unknown
// Signature: void FUN_004b3f40(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b3f40(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte auStack_64 [4];
  uint local_60;
  int local_30;
  int local_2c;
  byte local_28 [12];
  byte local_1c [12];
  
  uVar2 = FUN_0051d380(param_1 + 0x150,local_28,param_2);
  iVar4 = 0;
  iVar3 = 0;
  FUN_0040a240(param_1,local_1c,uVar2);
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar4) break;
    iVar1 = *(int *)(iVar3 + 0x14ecb4 + 0x01E57284);
    if (iVar1 != param_1) {
      FUN_00423ed0(auStack_64);
      local_60 = 0x41200000;
      local_30 = param_1;
      local_2c = param_1;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf8))(iVar1,local_1c,0x3f000000,auStack_64);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  }
  return;
}
