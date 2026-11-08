// Name: FUN_00530990
// Address: 00530990
// Address Range: [[00530990, 00530a06]]
// Convention: unknown
// Signature: int FUN_00530990(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00530990(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  iVar2 = 0;
  FUN_005a5128(param_2,0,0,local_110,0);
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_005a3260(*(int *)(param_1 + 0x24) + iVar3,local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return -1;
}
