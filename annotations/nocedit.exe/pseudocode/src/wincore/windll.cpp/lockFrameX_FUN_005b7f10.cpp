// Name: wincore_windll.cpp_lockFrameX_FUN_005b7f10
// Address: 005b7f10
// Address Range: [[005b7f10, 005b7f3f]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_lockFrameX_FUN_005b7f10(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockFrameX_FUN_005b7f10(void)

{
  int iVar1;
  
  if ((g_APIDLL_lockFrameX != (APIDLL_lockFrameX *)0x0) &&
     (iVar1 = (*g_APIDLL_lockFrameX)(), iVar1 != 0)) {
    g_SavedBitsPerPixel = g_BitsPerPixel;
    g_BitsPerPixel = g_VideoModeXBPP;
    return 1;
  }
  return 0;
}
