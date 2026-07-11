// Name: FUN_005715d0
// Address: 005715d0
// Address Range: [[005715d0, 0057162e]]
// Convention: unknown
// Signature: undefined4 FUN_005715d0(int param_1)

#include "nocturne.h"

uint FUN_005715d0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00571564(4);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_005717d8(4);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = FUN_00571564(7);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_005717d8(7);
  }
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return 1;
  }
  return 0;
}
