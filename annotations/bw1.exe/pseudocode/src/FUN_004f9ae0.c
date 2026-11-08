// Name: FUN_004f9ae0
// Address: 004f9ae0
// Address Range: [[004f9ae0, 004f9b1f]]
// Convention: unknown
// Signature: void FUN_004f9ae0(int param_1)

#include "nocturne.h"

void FUN_004f9ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_0051b1d0(0x01D2C900,*(uint *)(iVar2 + 0x14));
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0x458) = 0;
  return;
}
