// Name: FUN_005c9e80
// Address: 005c9e80
// Address Range: [[005c9e80, 005c9e99]]
// Convention: unknown
// Signature: undefined4 FUN_005c9e80(int param_1)

#include "nocturne.h"

uint FUN_005c9e80(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_005c6540();
    return 0;
  }
  uVar1 = FUN_005c6d50(param_1);
  return uVar1;
}
