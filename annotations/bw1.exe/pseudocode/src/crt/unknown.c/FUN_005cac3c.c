// Name: crt_unknown.c_FUN_005cac3c
// Address: 005cac3c
// Address Range: [[005cac3c, 005cac78]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005cac3c(int param_1)

#include "nocturne.h"

int FUN_005cac3c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = calloc(1,0x000000F4);
    uVar1 = 0x000000F4;
    if (param_1 != 0) {
      *(byte *)(param_1 + 0x52) = 1;
      *(uint *)(param_1 + 0xf0) = uVar1;
    }
  }
  FUN_005ccf80(param_1);
  return param_1;
}
