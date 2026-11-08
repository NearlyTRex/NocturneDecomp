// Name: FUN_005baab0
// Address: 005baab0
// Address Range: [[005baab0, 005bab16]]
// Convention: unknown
// Signature: int FUN_005baab0(int param_1)

#include "nocturne.h"

int FUN_005baab0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) && ((*(byte *)(param_1 + 0xd) & 0x10) != 0)) {
    FUN_005c1b30(param_1);
  }
  iVar2 = FUN_005bf250(*(uint *)(param_1 + 0x10));
  if (iVar2 != -1) {
    (*(code *)PTR_FUN_0061f2a8)(*(uint *)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0xd) & 0x10) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_FUN_0061f2ac)(*(uint *)(param_1 + 0x10));
  }
  return iVar2;
}
