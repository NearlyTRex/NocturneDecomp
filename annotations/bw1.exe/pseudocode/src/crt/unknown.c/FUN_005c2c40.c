// Name: crt_unknown.c_FUN_005c2c40
// Address: 005c2c40
// Address Range: [[005c2c40, 005c2c65]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005c2c40(int param_1)

#include "nocturne.h"

uint FUN_005c2c40(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)**(byte **)(param_1 + 8);
  if (uVar1 != 0) {
    *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
    return uVar1;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return 0xffffffff;
}
