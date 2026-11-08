// Name: FUN_005477e0
// Address: 005477e0
// Address Range: [[005477e0, 005477f8]]
// Convention: unknown
// Signature: void FUN_005477e0(undefined4 param_1)

#include "nocturne.h"

void FUN_005477e0(uint param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_005a32b0(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
