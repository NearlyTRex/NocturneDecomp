// Name: FUN_00455150
// Address: 00455150
// Address Range: [[00455150, 0045519f]]
// Convention: unknown
// Signature: void FUN_00455150(int param_1)

#include "nocturne.h"

void FUN_00455150(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_004ab0c8(*(int *)(param_1 + 0x144) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x148));
  }
  return;
}
