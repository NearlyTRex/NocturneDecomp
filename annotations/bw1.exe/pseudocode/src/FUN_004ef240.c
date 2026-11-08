// Name: FUN_004ef240
// Address: 004ef240
// Address Range: [[004ef240, 004ef285]]
// Convention: unknown
// Signature: undefined4 FUN_004ef240(int param_1)

#include "nocturne.h"

uint FUN_004ef240(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x1fe68) != 0) && (*(int *)(param_1 + 0x1fe6c) != 3)) &&
     (*(int *)(param_1 + 0x1fe6c) != 4)) {
    iVar1 = FUN_00524770(param_1 + 0x158);
    if (*(int *)(iVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}
