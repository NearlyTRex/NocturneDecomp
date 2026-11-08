// Name: FUN_0053eda0
// Address: 0053eda0
// Address Range: [[0053eda0, 0053edf2]]
// Convention: unknown
// Signature: void FUN_0053eda0(int param_1)

#include "nocturne.h"

void FUN_0053eda0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x156db8) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      if (*(int *)(*(int *)(iVar1 + 0x14d168) + 0x100) == 0) {
        *(int *)(param_1 + 0x156dbc + *(int *)(param_1 + 0x156db8) * 4) = *(int *)(iVar1 + 0x14d168)
        ;
        *(int *)(param_1 + 0x156db8) = *(int *)(param_1 + 0x156db8) + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14d164));
  }
  return;
}
