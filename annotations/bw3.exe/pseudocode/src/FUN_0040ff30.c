// Name: FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff73]]
// Convention: unknown
// Signature: undefined4 FUN_0040ff30(int param_1)

#include "nocturne.h"

uint FUN_0040ff30(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x27a8) != 0) &&
      (iVar1 = FUN_00491aa0(0x01C6E360,"heroCanSee"), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x206ac) == 0)) {
    FUN_0042f510(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return 0;
}
