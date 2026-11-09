// Name: engine_special.cpp_FUN_00582cec
// Address: 00582cec
// Address Range: [[00582cec, 00582d02]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582cec(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00582cec(void)

{
  uint uVar1;
  
  if (_DAT_02c83440 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83440)();
  return uVar1;
}
