// Name: engine_special.cpp_lockFrame_FUN_005322e0
// Address: 005322e0
// Address Range: [[005322e0, 00532317]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrame_FUN_005322e0(void)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) && (iVar1 = (*g_APIDLL_lockFrame)(), iVar1 != 0)) {
    g_SavedBitsPerPixel = g_BitsPerPixel;
    g_ExternalFrameLocked = 1;
    g_BitsPerPixel = g_ExternalBitsPerPixel;
    return 1;
  }
  return 0;
}
