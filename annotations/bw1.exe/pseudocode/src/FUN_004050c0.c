// Name: FUN_004050c0
// Address: 004050c0
// Address Range: [[004050c0, 004050fd]]
// Convention: unknown
// Signature: int FUN_004050c0(int param_1)

#include "nocturne.h"

int FUN_004050c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (&DAT_0062902c)[(*(int *)(param_1 + 4) + iVar1) * 0xc] = *piVar2 << 0x10;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 4;
}
