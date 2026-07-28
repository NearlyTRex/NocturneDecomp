// Name: crt_unknown.c_string_getc_FUN_00566af0
// Address: 00566af0
// Address Range: [[00566af0, 00566b15]]
// Convention: unknown
// Signature: uint crt_unknown_c_string_getc_FUN_00566af0(int param_1)

#include "nocturne.h"

uint string_getc(int param_1)

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
