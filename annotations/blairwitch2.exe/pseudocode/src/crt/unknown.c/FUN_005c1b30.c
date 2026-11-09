// Name: crt_unknown.c_FUN_005c1b30
// Address: 005c1b30
// Address Range: [[005c1b30, 005c1b49]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c1b30(int param_1)

#include "nocturne.h"

uint FUN_005c1b30(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_005be270();
    return 0;
  }
  uVar1 = FUN_005bea80(param_1);
  return uVar1;
}
