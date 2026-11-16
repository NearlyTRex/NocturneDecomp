// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004a8180
// Address: 004a8180
// Address Range: [[004a8180, 004a821d]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(int x,int y)

{
  if ((((0 < _DAT_01d19ba8) && (0x0000004A <= x)) && (0x000001AE <= y)) &&
     ((x < 0x0000004A + CAlphaBitmap_01d19c9c.width &&
      (y < 0x000001AE + CAlphaBitmap_01d19c9c.height)))) {
    return -1;
  }
  if (((_DAT_01d19ba8 < g_STextViewInstance.page_count + -2) && (0x000001F4 <= x)) &&
     ((0x000001AE <= y &&
      ((x < 0x000001F4 + CAlphaBitmap_01d19cb0.width &&
       (y < CAlphaBitmap_01d19cb0.height + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
