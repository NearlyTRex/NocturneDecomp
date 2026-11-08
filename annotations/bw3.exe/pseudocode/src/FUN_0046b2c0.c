// Name: FUN_0046b2c0
// Address: 0046b2c0
// Address Range: [[0046b2c0, 0046b369]]
// Convention: unknown
// Signature: void FUN_0046b2c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b2c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01bdd818 + iVar2) = *(uint *)(iVar1 + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c6e2b4 = 0xc0;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = &LAB_0046fcc8;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = &LAB_0046f9a6;
    }
    FUN_0046b160(param_1,*(uint *)(param_2 + 4),&DAT_01bdd818);
  }
  return;
}
