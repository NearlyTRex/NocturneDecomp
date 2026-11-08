// Name: FUN_005405d0
// Address: 005405d0
// Address Range: [[005405d0, 005405e8]]
// Convention: unknown
// Signature: void FUN_005405d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005405d0(uint param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_005b8180(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
