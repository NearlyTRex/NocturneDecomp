// Name: engine_special.cpp_FUN_00532900
// Address: 00532900
// Address Range: [[00532900, 00532921]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00532900(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00532900(void)

{
  uint uVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9db8)();
  return uVar1;
}
