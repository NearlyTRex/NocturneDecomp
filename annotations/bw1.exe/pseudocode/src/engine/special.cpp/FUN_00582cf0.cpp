// Name: engine_special.cpp_FUN_00582cf0
// Address: 00582cf0
// Address Range: [[00582cf0, 00582d02]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582cf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00582cf0(void)

{
  uint uVar1;
  
  if (_DAT_02c83440 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83440)();
  return uVar1;
}
