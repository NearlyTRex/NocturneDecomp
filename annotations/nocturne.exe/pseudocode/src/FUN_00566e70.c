// Name: FUN_00566e70
// Address: 00566e70
// Address Range: [[00566e70, 00566ed6]]
// Convention: unknown
// Signature: int FUN_00566e70(int param_1)

#include "nocturne.h"

int FUN_00566e70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) && ((*(byte *)(param_1 + 0xd) & 0x10) != 0)) {
    FUN_0056dd60(param_1);
  }
  iVar2 = FUN_0056bc10(*(uint *)(param_1 + 0x10));
  if (iVar2 != -1) {
    (*(code *)PTR_FUN_005c1ac0)(*(uint *)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0xd) & 0x10) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_1 + 0x10));
  }
  return iVar2;
}
