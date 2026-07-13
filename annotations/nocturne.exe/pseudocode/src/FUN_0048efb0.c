// Name: FUN_0048efb0
// Address: 0048efb0
// Address Range: [[0048efb0, 0048efec]]
// Convention: unknown
// Signature: void FUN_0048efb0(int param_1)

#include "nocturne.h"

void FUN_0048efb0(int param_1)

{
  int iVar1;
  
  FUN_00409fc0(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x15c)) {
    do {
      FUN_0048f8f0(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x15c));
  }
  *(uint *)(param_1 + 0x2a14) = 1;
  return;
}
