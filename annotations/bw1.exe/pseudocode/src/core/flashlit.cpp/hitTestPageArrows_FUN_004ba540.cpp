// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004ba5dd]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(int x,int y)

{
  if ((((0 < g_INT_01cc7b90) && (g_INT_0061d2e8 <= x)) && (g_INT_0061d2ec <= y)) &&
     ((x < g_INT_0061d2e8 + CAlphaBitmap_01cc7c84.width &&
      (y < g_INT_0061d2ec + CAlphaBitmap_01cc7c84.height)))) {
    return -1;
  }
  if (((g_INT_01cc7b90 < g_STextViewInstance.page_count + -2) && (g_INT_0061d2f0 <= x)) &&
     ((g_INT_0061d2f4 <= y &&
      ((x < g_INT_0061d2f0 + CAlphaBitmap_01cc7c98.width &&
       (y < CAlphaBitmap_01cc7c98.height + g_INT_0061d2f4)))))) {
    return 1;
  }
  return 0;
}
