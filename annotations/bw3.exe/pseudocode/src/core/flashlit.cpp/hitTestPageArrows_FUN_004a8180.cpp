// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004a8180
// Address: 004a8180
// Address Range: [[004a8180, 004a821d]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(int x,int y)

{
  if ((((0 < g_INT_01d19ba8) && (g_INT_005fe378 <= x)) && (g_INT_005fe37c <= y)) &&
     ((x < g_INT_005fe378 + CAlphaBitmap_01d19c9c.width &&
      (y < g_INT_005fe37c + CAlphaBitmap_01d19c9c.height)))) {
    return -1;
  }
  if (((g_INT_01d19ba8 < g_STextViewInstance.page_count + -2) && (g_INT_005fe380 <= x)) &&
     ((g_INT_005fe384 <= y &&
      ((x < g_INT_005fe380 + CAlphaBitmap_01d19cb0.width &&
       (y < CAlphaBitmap_01d19cb0.height + g_INT_005fe384)))))) {
    return 1;
  }
  return 0;
}
