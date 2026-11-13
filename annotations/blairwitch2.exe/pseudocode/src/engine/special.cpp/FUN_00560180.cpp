// Name: engine_special.cpp_FUN_00560180
// Address: 00560180
// Address Range: [[00560180, 00560192]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00560180(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00560180(void)

{
  uint uVar1;
  
  if (_DAT_0264bc58 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_0264bc58)();
  return uVar1;
}
