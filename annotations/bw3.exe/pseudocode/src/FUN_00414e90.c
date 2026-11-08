// Name: FUN_00414e90
// Address: 00414e90
// Address Range: [[00414e90, 00414f54]]
// Convention: unknown
// Signature: undefined4 FUN_00414e90(int param_1)

#include "nocturne.h"

uint FUN_00414e90(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xf30) != 0) &&
     ((*(int *)(param_1 + 0x158) < 2 || (*(int *)(param_1 + 0x74c) != 0)))) {
    if (*(int *)(param_1 + 0xcb4) != 0) {
      *(uint *)(0x01ED78C8 + 0x15ac98) = *(uint *)(param_1 + 0xcb0);
      FUN_004087f0(param_1);
      FUN_0046d4c0(DAT_005f2afc,*(uint *)(param_1 + 0xcc0));
      FUN_00414a60(param_1,0x2e7);
      FUN_00408830(param_1);
      *(uint *)(0x01ED78C8 + 0x15ac98) = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x74c)) {
      iVar2 = param_1 + 0x75c;
      do {
        FUN_004a6090(iVar2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x2b0;
      } while (iVar1 < *(int *)(param_1 + 0x74c));
    }
    return 1;
  }
  return 0;
}
