// Name: core_flashlit.cpp_hitTestPageArrows_FUN_004a1c60
// Address: 004a1c60
// Address Range: [[004a1c60, 004a1cfd]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(int x,int y)

{
  if ((((0 < g_INT_01caf110) && (g_INT_00616018 <= x)) && (g_INT_0061601c <= y)) &&
     ((x < g_INT_00616018 + CAlphaBitmap_01caf1f0.width &&
      (y < g_INT_0061601c + CAlphaBitmap_01caf1f0.height)))) {
    return -1;
  }
  if (((g_INT_01caf110 < g_STextViewInstance.page_count + -2) && (g_INT_00616020 <= x)) &&
     ((g_INT_00616024 <= y &&
      ((x < g_INT_00616020 + CAlphaBitmap_01caf204.width &&
       (y < CAlphaBitmap_01caf204.height + g_INT_00616024)))))) {
    return 1;
  }
  return 0;
}
