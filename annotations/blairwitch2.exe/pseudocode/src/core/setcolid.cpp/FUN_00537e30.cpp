// Name: FUN_00537e30
// Address: 00537e30
// Address Range: [[00537e30, 00537e8c]]
// Convention: unknown
// Signature: void FUN_00537e30(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537e30(int param_1,int param_2)

{
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x15f6a8))) {
    if (9 < *(int *)(param_1 + 0x15f6a8)) {
      _DAT_01d046a0 = "..\\core\\setcolid.cpp";
      _DAT_01d046a4 = 0x473;
      FUN_004e4500("CDemonSet::ignore - ignore list is full");
    }
    *(int *)(param_1 + 0x15f6b0 + *(int *)(param_1 + 0x15f6a8) * 4) = param_2;
    *(int *)(param_1 + 0x15f6a8) = *(int *)(param_1 + 0x15f6a8) + 1;
  }
  return;
}
