// Name: FUN_0044efe0
// Address: 0044efe0
// Address Range: [[0044efe0, 0044f01c]]
// Convention: unknown
// Signature: void FUN_0044efe0(int param_1)

#include "nocturne.h"

void FUN_0044efe0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar2 = param_1 + 0x124;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046ca00(DAT_0060b280,iVar2);
      iVar2 = iVar2 + 0x48;
    } while (iVar1 < *(int *)(param_1 + 0x120));
  }
  return;
}
