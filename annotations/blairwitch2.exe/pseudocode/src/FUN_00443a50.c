// Name: FUN_00443a50
// Address: 00443a50
// Address Range: [[00443a50, 00443a9f]]
// Convention: unknown
// Signature: void FUN_00443a50(int param_1)

#include "nocturne.h"

void FUN_00443a50(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00492718(*(int *)(param_1 + 0x144) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x148));
  }
  return;
}
