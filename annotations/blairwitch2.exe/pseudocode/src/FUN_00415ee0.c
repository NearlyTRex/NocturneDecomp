// Name: FUN_00415ee0
// Address: 00415ee0
// Address Range: [[00415ee0, 00415f45]]
// Convention: unknown
// Signature: void FUN_00415ee0(int param_1)

#include "nocturne.h"

void FUN_00415ee0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408a80(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2e8)) {
    iVar2 = param_1 + 0x2ec;
    do {
      iVar1 = iVar1 + 1;
      FUN_0046ca00(DAT_0060b280,iVar2);
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x2e8));
  }
  if ((*(int *)(param_1 + 0x10c8) == 0) && (*(int *)(param_1 + 0x8a8) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
