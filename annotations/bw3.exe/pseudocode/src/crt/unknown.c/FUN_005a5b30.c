// Name: crt_unknown.c_FUN_005a5b30
// Address: 005a5b30
// Address Range: [[005a5b30, 005a5b55]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005a5b30(int param_1)

#include "nocturne.h"

uint FUN_005a5b30(int param_1)

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
