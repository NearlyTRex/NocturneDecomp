// Name: FUN_004fc3e0
// Address: 004fc3e0
// Address Range: [[004fc3e0, 004fc48c]]
// Convention: unknown
// Signature: void FUN_004fc3e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc3e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x33c) == 0) ||
     (iVar2 = FUN_0040c600(*(int *)(param_1 + 0x33c),_DAT_01d06a90), iVar2 == 0)) {
    iVar3 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = FUN_0040c600(*(uint *)(iVar2 + 0x14),_DAT_01d06a90);
        if (iVar1 != 0) {
          FUN_004f9bd0(param_1,iVar1);
          FUN_00445430(PTR_DAT_00611100,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    FUN_00445430(PTR_DAT_00611100,"no more auto health left\n");
  }
  else {
    FUN_00445430(PTR_DAT_00611100,"Auto use selected health\n");
    FUN_004f9bd0(param_1,iVar2);
  }
  return;
}
