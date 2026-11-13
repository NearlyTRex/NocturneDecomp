// Name: engine_special.cpp_FUN_00565a30
// Address: 00565a30
// Address Range: [[00565a30, 00565a65]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00565a30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00565a30(void)

{
  uint uVar1;
  
  if ((_DAT_01c6cee8 != 0) && (_DAT_02cf6018 != (code *)0x0)) {
    uVar1 = (*_DAT_02cf6018)();
    return uVar1;
  }
  return 0;
}
