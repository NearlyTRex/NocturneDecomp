// Name: FUN_005c85c0
// Address: 005c85c0
// Address Range: [[005c85c0, 005c862b]]
// Convention: unknown
// Signature: undefined4 FUN_005c85c0(uint param_1)

#include "nocturne.h"

uint FUN_005c85c0(uint param_1)

{
  int iVar1;
  
  FUN_005c6488(param_1);
  if (param_1 == 0x7b) {
    iVar1 = 1;
  }
  else {
    if (param_1 == 0xce) {
      FUN_005c6450(9);
      return 0xffffffff;
    }
    if (param_1 == 0xb7) {
      FUN_005c6450(7);
      return 0xffffffff;
    }
    if (0x13 < param_1) {
      param_1 = 0x13;
    }
    iVar1 = *(int *)(&DAT_006267c9 + param_1) >> 0x18;
  }
  FUN_005c6450(iVar1);
  return 0xffffffff;
}
