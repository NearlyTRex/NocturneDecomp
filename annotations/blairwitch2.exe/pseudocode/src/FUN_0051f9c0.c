// Name: FUN_0051f9c0
// Address: 0051f9c0
// Address Range: [[0051f9c0, 0051fa4d]]
// Convention: unknown
// Signature: void FUN_0051f9c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f9c0(int param_1,float param_2)

{
  int iVar1;
  byte auStack_50 [4];
  uint local_4c;
  int local_1c;
  int local_18;
  
  do {
    iVar1 = FUN_005030c0(param_1 + 0x2b4,&param_2);
    if (iVar1 == 100) {
      iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x276c),_DAT_01c264e0);
      if (iVar1 != 0) {
        FUN_004222d0(auStack_50);
        local_4c = 0x40a00000;
        local_1c = param_1;
        local_18 = param_1;
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,auStack_50);
      }
    }
    else {
      FUN_0042aa00(param_1,iVar1);
    }
  } while (0.0 < param_2);
  return;
}
