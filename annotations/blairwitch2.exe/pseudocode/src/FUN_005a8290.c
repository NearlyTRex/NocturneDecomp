// Name: FUN_005a8290
// Address: 005a8290
// Address Range: [[005a8290, 005a82ff]]
// Convention: unknown
// Signature: void FUN_005a8290(int param_1)

#include "nocturne.h"

void FUN_005a8290(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
      return;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x18))) {
      iVar3 = 0;
      do {
        while (piVar2 = (int *)(*(int *)(param_1 + 0x3c) + iVar3), *piVar2 != 0) {
          FUN_005a86a0(piVar2);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x60;
          if (*(int *)(param_1 + 0x18) <= iVar1) {
            return;
          }
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x60;
      } while (iVar1 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}
