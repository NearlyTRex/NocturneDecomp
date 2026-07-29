// Name: engine_special.cpp_unlockTexture_FUN_005b7e50
// Address: 005b7e50
// Address Range: [[005b7e50, 005b7e62]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_005b7e50(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockTexture_FUN_005b7e50(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockTexture == (APIDLL_unlockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockTexture)();
  return iVar1;
}
