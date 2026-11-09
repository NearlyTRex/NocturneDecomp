// Name: engine_special.cpp_FUN_00582bce
// Address: 00582bce
// Address Range: [[00582bce, 00582be2]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582bce(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00582bce(void)

{
  uint uVar1;
  
  if (_DAT_02c83428 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83428)();
  return uVar1;
}
