// Name: FUN_004a9830
// Address: 004a9830
// Address Range: [[004a9830, 004a98a6]]
// Convention: unknown
// Signature: void FUN_004a9830(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9830(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x3c),(*(int *)(param_1 + 0x38) + 1) * 0x144);
      *(int *)(param_1 + 0x3c) = iVar1;
      if (iVar1 == 0) {
        _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
        _DAT_01d71de4 = 0x67d;
        FUN_004e4330("Out of memory");
      }
      FUN_004a8cb0(*(int *)(param_1 + 0x38) * 0x144 + *(int *)(param_1 + 0x3c));
      iVar1 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar1;
    } while (iVar1 <= *(int *)(param_1 + 0x10));
  }
  return;
}
