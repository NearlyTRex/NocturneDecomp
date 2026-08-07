// Name: engine_special.cpp_restoreVideoMode_FUN_005325f0
// Address: 005325f0
// Address Range: [[005325f0, 00532617]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreVideoMode_FUN_005325f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreVideoMode_FUN_005325f0(void)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) && (g_UseExternalRenderer = 0, _DAT_02dc9d88 != (code *)0x0)) {
    iVar1 = (*_DAT_02dc9d88)();
    return iVar1;
  }
  return 0;
}
