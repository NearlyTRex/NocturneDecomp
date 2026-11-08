// Name: FUN_005303b0
// Address: 005303b0
// Address Range: [[005303b0, 00530406]]
// Convention: unknown
// Signature: int FUN_005303b0(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_005303b0(int param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar5 = 0;
    do {
      pcVar1 = *(char **)(iVar5 + 4 + *(int *)(param_1 + 0x30));
      if (*pcVar1 == ':') {
        uVar2 = FUN_005288a0(pcVar1 + 1,param_2);
        iVar3 = FUN_005a3260(uVar2);
        if (iVar3 == 0) {
          return iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return -1;
}
