// Name: FUN_00461860
// Address: 00461860
// Address Range: [[00461860, 0046189c]]
// Convention: unknown
// Signature: void FUN_00461860(int param_1)

#include "nocturne.h"

void FUN_00461860(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar2 = param_1 + 0x124;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046e5e0(DAT_005f2afc,iVar2);
      iVar2 = iVar2 + 0x48;
    } while (iVar1 < *(int *)(param_1 + 0x120));
  }
  return;
}
