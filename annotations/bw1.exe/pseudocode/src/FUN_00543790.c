// Name: FUN_00543790
// Address: 00543790
// Address Range: [[00543790, 005437e7]]
// Convention: unknown
// Signature: void FUN_00543790(int param_1)

#include "nocturne.h"

void FUN_00543790(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 + 4);
        if (iVar1 != 0) {
          FUN_005c09f0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x2c));
    }
    FUN_005c09f0(*(uint *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x30) = 0;
  }
  *(uint *)(param_1 + 0x2c) = 0;
  return;
}
