// Name: engine_special.cpp_lockFrame_FUN_005322e0
// Address: 005322e0
// Address Range: [[005322e0, 00532317]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) && (iVar1 = (*g_APIDLL_lockFrame)(), iVar1 != 0)) {
    _DAT_02dc9e20 = g_BitsPerPixel;
    INT_02dc9e24 = 1;
    g_BitsPerPixel = _DAT_02dc9e1c;
    return 1;
  }
  return 0;
}
