// Name: engine_special.cpp_unlockFrame_FUN_00532320
// Address: 00532320
// Address Range: [[00532320, 0053233c]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_00532320(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockFrame_FUN_00532320(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_BitsPerPixel = g_SavedBitsPerPixel;
  iVar1 = (*g_APIDLL_unlockFrame)();
  return iVar1;
}
