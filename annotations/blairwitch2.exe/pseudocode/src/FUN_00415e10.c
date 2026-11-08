// Name: FUN_00415e10
// Address: 00415e10
// Address Range: [[00415e10, 00415ed4]]
// Convention: unknown
// Signature: undefined4 FUN_00415e10(int param_1)

#include "nocturne.h"

uint FUN_00415e10(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1340) != 0) &&
     ((*(int *)(param_1 + 0x2b4) < 2 || (*(int *)(param_1 + 0x8a8) != 0)))) {
    if (*(int *)(param_1 + 0x10c8) != 0) {
      *(uint *)(0x01E661B8 + 0x15ac98) = *(uint *)(param_1 + 0x10c4);
      FUN_004089d0(param_1);
      FUN_0046b8e0(DAT_0060b280,*(uint *)(param_1 + 0x10d4));
      FUN_004159e0(param_1,0x2e7);
      FUN_00408a10(param_1);
      *(uint *)(0x01E661B8 + 0x15ac98) = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x8a8)) {
      iVar2 = param_1 + 0x8b8;
      do {
        FUN_0049f850(iVar2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x40c;
      } while (iVar1 < *(int *)(param_1 + 0x8a8));
    }
    return 1;
  }
  return 0;
}
