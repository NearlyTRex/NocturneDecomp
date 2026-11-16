// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004ba5dd]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(int x,int y)

{
  if ((((0 < _DAT_01cc7b90) && (0x0000004A <= x)) && (0x000001AE <= y)) &&
     ((x < 0x0000004A + CAlphaBitmap_01cc7c84.width &&
      (y < 0x000001AE + CAlphaBitmap_01cc7c84.height)))) {
    return -1;
  }
  if (((_DAT_01cc7b90 < g_STextViewInstance.page_count + -2) && (0x000001F4 <= x)) &&
     ((0x000001AE <= y &&
      ((x < 0x000001F4 + CAlphaBitmap_01cc7c98.width &&
       (y < CAlphaBitmap_01cc7c98.height + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
