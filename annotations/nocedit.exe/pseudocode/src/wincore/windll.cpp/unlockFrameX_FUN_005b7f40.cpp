// Name: wincore_windll.cpp_unlockFrameX_FUN_005b7f40
// Address: 005b7f40
// Address Range: [[005b7f40, 005b7f65]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_unlockFrameX_FUN_005b7f40(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_unlockFrameX_FUN_005b7f40(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockFrameX == (APIDLL_unlockFrameX *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_unlockFrameX)();
    if (iVar1 != 0) {
      g_BitsPerPixel = g_SavedBitsPerPixel;
      return 1;
    }
  }
  return iVar1;
}
