// Name: FUN_00559250
// Address: 00559250
// Address Range: [[00559250, 005592ac]]
// Convention: unknown
// Signature: void FUN_00559250(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559250(int param_1,int param_2)

{
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x15f6ac))) {
    if (9 < *(int *)(param_1 + 0x15f6ac)) {
      _DAT_01d1d400 = "..\\core\\setcolid.cpp";
      _DAT_01d1d404 = 0x473;
      FUN_005030e0("CDemonSet::ignore - ignore list is full");
    }
    *(int *)(param_1 + 0x15f6b4 + *(int *)(param_1 + 0x15f6ac) * 4) = param_2;
    *(int *)(param_1 + 0x15f6ac) = *(int *)(param_1 + 0x15f6ac) + 1;
  }
  return;
}
