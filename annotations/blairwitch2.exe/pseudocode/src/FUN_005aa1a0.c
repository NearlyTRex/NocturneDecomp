// Name: FUN_005aa1a0
// Address: 005aa1a0
// Address Range: [[005aa1a0, 005aa1e5]]
// Convention: unknown
// Signature: void FUN_005aa1a0(int param_1)

#include "nocturne.h"

void FUN_005aa1a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      return;
    }
  }
  return;
}
