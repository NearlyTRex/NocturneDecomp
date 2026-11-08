// Name: FUN_00444020
// Address: 00444020
// Address Range: [[00444020, 0044411a]]
// Convention: unknown
// Signature: undefined4 FUN_00444020(int param_1)

#include "nocturne.h"

uint FUN_00444020(int param_1)

{
  int iVar1;
  byte local_24 [24];
  
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0xffffffff;
  }
  FUN_005a1ad0(local_24,*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))
                    (*(int **)(param_1 + 4),*(uint *)(param_1 + 8),local_24);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),local_24);
      if (iVar1 == 0) goto LAB_004440c6;
      if (iVar1 == 1) {
        *(uint *)(param_1 + 0x20) = 1;
      }
    }
    iVar1 = FUN_005a1d10(local_24);
    if (iVar1 < 0) {
      FUN_005a1b60(local_24,0);
      return 0xfffffffe;
    }
    if (iVar1 == 0) {
      FUN_005a1b60(local_24,0);
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    FUN_005a1b60(local_24,0);
    return 0;
  }
LAB_004440c6:
  FUN_005a1b60(local_24,0);
  return 0xfffffffe;
}
