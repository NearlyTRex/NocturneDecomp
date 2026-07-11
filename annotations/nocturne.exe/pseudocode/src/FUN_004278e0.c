// Name: FUN_004278e0
// Address: 004278e0
// Address Range: [[004278e0, 00427981]]
// Convention: unknown
// Signature: void FUN_004278e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004278e0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  byte local_1c [12];
  byte local_10 [12];
  
  if (*(int *)(param_1 + 0x2290 + param_2 * 4) == 0) {
    iVar1 = FUN_0040dea0(param_4);
    if (iVar1 != 0) {
      uVar2 = FUN_0051d380(param_1 + 0x150,local_28,param_3);
      FUN_0040a240(param_1,local_10,uVar2);
      local_34 = 0xc0400000;
      local_30 = 0;
      local_2c = 0;
      FUN_0040a200(param_1,local_1c,&local_34);
      FUN_004b00f0(0x01C78C7C,local_10,local_1c,*(uint *)(param_1 + 0x2608));
      return;
    }
  }
  return;
}
