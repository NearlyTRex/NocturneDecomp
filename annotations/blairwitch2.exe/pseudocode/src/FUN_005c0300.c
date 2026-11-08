// Name: FUN_005c0300
// Address: 005c0300
// Address Range: [[005c0300, 005c036b]]
// Convention: unknown
// Signature: undefined4 FUN_005c0300(uint param_1)

#include "nocturne.h"

uint FUN_005c0300(uint param_1)

{
  int iVar1;
  
  FUN_005be1b8(param_1);
  if (param_1 == 0x7b) {
    iVar1 = 1;
  }
  else {
    if (param_1 == 0xce) {
      FUN_005be180(9);
      return 0xffffffff;
    }
    if (param_1 == 0xb7) {
      FUN_005be180(7);
      return 0xffffffff;
    }
    if (0x13 < param_1) {
      param_1 = 0x13;
    }
    iVar1 = *(int *)(&DAT_0061f469 + param_1) >> 0x18;
  }
  FUN_005be180(iVar1);
  return 0xffffffff;
}
