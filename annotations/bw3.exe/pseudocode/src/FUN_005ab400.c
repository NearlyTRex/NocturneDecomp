// Name: FUN_005ab400
// Address: 005ab400
// Address Range: [[005ab400, 005ab46b]]
// Convention: unknown
// Signature: undefined4 FUN_005ab400(uint param_1)

#include "nocturne.h"

uint FUN_005ab400(uint param_1)

{
  int iVar1;
  
  FUN_005a92f8(param_1);
  if (param_1 == 0x7b) {
    iVar1 = 1;
  }
  else {
    if (param_1 == 0xce) {
      FUN_005a92c0(9);
      return 0xffffffff;
    }
    if (param_1 == 0xb7) {
      FUN_005a92c0(7);
      return 0xffffffff;
    }
    if (0x13 < param_1) {
      param_1 = 0x13;
    }
    iVar1 = *(int *)(&DAT_00607b6d + param_1) >> 0x18;
  }
  FUN_005a92c0(iVar1);
  return 0xffffffff;
}
