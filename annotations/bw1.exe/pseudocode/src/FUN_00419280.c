// Name: FUN_00419280
// Address: 00419280
// Address Range: [[00419280, 00419344]]
// Convention: unknown
// Signature: undefined4 FUN_00419280(int param_1)

#include "nocturne.h"

uint FUN_00419280(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xf30) != 0) &&
     ((*(int *)(param_1 + 0x158) < 2 || (*(int *)(param_1 + 0x74c) != 0)))) {
    if (*(int *)(param_1 + 0xcb4) != 0) {
      *(uint *)(0x01E82168 + 0x15ac98) = *(uint *)(param_1 + 0xcb0);
      FUN_004087b0(param_1);
      FUN_00483de0(DAT_00612560,*(uint *)(param_1 + 0xcc0));
      FUN_00418e50(param_1,0x2e7);
      FUN_004087f0(param_1);
      *(uint *)(0x01E82168 + 0x15ac98) = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x74c)) {
      iVar2 = param_1 + 0x75c;
      do {
        FUN_004b8100(iVar2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x2b0;
      } while (iVar1 < *(int *)(param_1 + 0x74c));
    }
    return 1;
  }
  return 0;
}
