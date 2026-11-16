// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004a1c60
// Address: 004a1c60
// Address Range: [[004a1c60, 004a1cfd]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(int x,int y)

{
  if ((((0 < _DAT_01caf110) && (0x0000004A <= x)) && (0x000001AE <= y)) &&
     ((x < 0x0000004A + CAlphaBitmap_01caf1f0.width &&
      (y < 0x000001AE + CAlphaBitmap_01caf1f0.height)))) {
    return -1;
  }
  if (((_DAT_01caf110 < g_STextViewInstance.page_count + -2) && (0x000001F4 <= x)) &&
     ((0x000001AE <= y &&
      ((x < 0x000001F4 + CAlphaBitmap_01caf204.width &&
       (y < CAlphaBitmap_01caf204.height + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
