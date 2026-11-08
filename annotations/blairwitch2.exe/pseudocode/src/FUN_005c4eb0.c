// Name: FUN_005c4eb0
// Address: 005c4eb0
// Address Range: [[005c4eb0, 005c4f0e]]
// Convention: unknown
// Signature: undefined4 FUN_005c4eb0(int param_1)

#include "nocturne.h"

uint FUN_005c4eb0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_005c4e44(4);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_005c50b8(4);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = FUN_005c4e44(7);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_005c50b8(7);
  }
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return 1;
  }
  return 0;
}
