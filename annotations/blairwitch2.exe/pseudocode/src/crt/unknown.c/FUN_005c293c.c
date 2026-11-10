// Name: crt_unknown.c_FUN_005c293c
// Address: 005c293c
// Address Range: [[005c293c, 005c2978]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c293c(int param_1)

#include "nocturne.h"

int FUN_005c293c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_005b98d0(1,0x000000F4);
    uVar1 = 0x000000F4;
    if (param_1 != 0) {
      *(byte *)(param_1 + 0x52) = 1;
      *(uint *)(param_1 + 0xf0) = uVar1;
    }
  }
  FUN_005c4c80(param_1);
  return param_1;
}
