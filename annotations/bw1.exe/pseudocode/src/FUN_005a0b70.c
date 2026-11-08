// Name: FUN_005a0b70
// Address: 005a0b70
// Address Range: [[005a0b70, 005a0b9d]]
// Convention: unknown
// Signature: int FUN_005a0b70(int param_1)

#include "nocturne.h"

int FUN_005a0b70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a0ba0(param_1,*(uint *)(param_1 + 0x10));
  if (-1 < iVar1) {
    if ((*(int *)(param_1 + 0x28) != 0) || (iVar1 != 0xd)) {
      return iVar1;
    }
    iVar1 = 10;
  }
  return iVar1;
}
