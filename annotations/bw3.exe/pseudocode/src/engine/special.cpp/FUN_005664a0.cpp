// Name: engine_special.cpp_FUN_005664a0
// Address: 005664a0
// Address Range: [[005664a0, 005664b2]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005664a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_005664a0(void)

{
  uint uVar1;
  
  if (_DAT_02cf6084 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6084)();
  return uVar1;
}
