// Name: wincore_windll.cpp_unlockTexture_FUN_005b7e4b
// Address: 005b7e4b
// Address Range: [[005b7e4b, 005b7e62]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_unlockTexture_FUN_005b7e4b(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_unlockTexture_FUN_005b7e4b(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockTexture == (APIDLL_unlockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockTexture)();
  return iVar1;
}
