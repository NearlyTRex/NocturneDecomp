// Name: FUN_005a0ab0
// Address: 005a0ab0
// Address Range: [[005a0ab0, 005a0afe]]
// Convention: unknown
// Signature: int FUN_005a0ab0(int param_1)

#include "nocturne.h"

int FUN_005a0ab0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a0ba0(param_1,*(uint *)(param_1 + 0x10));
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    if ((*(int *)(param_1 + 0x28) == 0) && (iVar1 == 0xd)) {
      iVar1 = 10;
      iVar2 = FUN_005a0ba0(param_1,iVar2);
      if (iVar2 == 10) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        return 10;
      }
    }
  }
  return iVar1;
}
