// Name: FUN_00404730
// Address: 00404730
// Address Range: [[00404730, 0040478c]]
// Convention: unknown
// Signature: int FUN_00404730(int param_1)

#include "nocturne.h"

int FUN_00404730(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar3 = iVar3 + 0xc;
      iVar1 = *(int *)(param_1 + 4) + iVar2;
      iVar2 = iVar2 + 1;
      FUN_004c6d90(iVar1 + DAT_006b0264,iVar3);
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}
