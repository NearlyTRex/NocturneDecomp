// Name: FUN_0053ec10
// Address: 0053ec10
// Address Range: [[0053ec10, 0053ec6c]]
// Convention: unknown
// Signature: void FUN_0053ec10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ec10(int param_1,int param_2)

{
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x15f6ac))) {
    if (9 < *(int *)(param_1 + 0x15f6ac)) {
      _DAT_01d71de0 = "..\\core\\setcolid.cpp";
      _DAT_01d71de4 = 0x473;
      FUN_004e4330("CDemonSet::ignore - ignore list is full");
    }
    *(int *)(param_1 + 0x15f6b4 + *(int *)(param_1 + 0x15f6ac) * 4) = param_2;
    *(int *)(param_1 + 0x15f6ac) = *(int *)(param_1 + 0x15f6ac) + 1;
  }
  return;
}
