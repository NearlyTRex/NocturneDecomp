// Name: FUN_00504c10
// Address: 00504c10
// Address Range: [[00504c10, 00504c66]]
// Convention: unknown
// Signature: int FUN_00504c10(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00504c10(int param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = 0;
    do {
      pcVar1 = *(char **)(iVar5 + 4 + *(int *)(param_1 + 0x2c));
      if (*pcVar1 == ':') {
        uVar2 = FUN_004fe070(pcVar1 + 1,param_2);
        iVar3 = FUN_00564520(uVar2);
        if (iVar3 == 0) {
          return iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  return -1;
}
