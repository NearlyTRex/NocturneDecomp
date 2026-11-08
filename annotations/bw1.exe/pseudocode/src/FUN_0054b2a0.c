// Name: FUN_0054b2a0
// Address: 0054b2a0
// Address Range: [[0054b2a0, 0054b316]]
// Convention: unknown
// Signature: int FUN_0054b2a0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0054b2a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  iVar2 = 0;
  FUN_005c2238(param_2,0,0,local_110,0);
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_005c04e0(*(int *)(param_1 + 0x24) + iVar3,local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return -1;
}
