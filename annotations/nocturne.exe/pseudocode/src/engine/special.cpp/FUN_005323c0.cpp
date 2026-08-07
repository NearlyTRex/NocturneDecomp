// Name: engine_special.cpp_FUN_005323c0
// Address: 005323c0
// Address Range: [[005323c0, 005323fa]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005323c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_005323c0(void)

{
  uint uVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9da0)();
  return uVar1;
}
