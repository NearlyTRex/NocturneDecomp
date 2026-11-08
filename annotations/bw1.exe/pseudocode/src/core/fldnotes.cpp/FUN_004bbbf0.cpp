// Name: FUN_004bbbf0
// Address: 004bbbf0
// Address Range: [[004bbbf0, 004bbc66]]
// Convention: unknown
// Signature: void FUN_004bbbf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bbbf0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_005c10d0(*(uint *)(param_1 + 0x3c),(*(int *)(param_1 + 0x38) + 1) * 0x144);
      *(int *)(param_1 + 0x3c) = iVar1;
      if (iVar1 == 0) {
        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
        _DAT_01d1d404 = 0x686;
        FUN_005030e0("Out of memory");
      }
      FUN_004bb070(*(int *)(param_1 + 0x38) * 0x144 + *(int *)(param_1 + 0x3c));
      iVar1 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar1;
    } while (iVar1 <= *(int *)(param_1 + 0x10));
  }
  return;
}
