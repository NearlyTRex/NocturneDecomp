// Name: core_flashlit.cpp_hitTestExitButton_FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a1d4a]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a1d00(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a1d00(int x,int y)

{
  if ((((g_INT_00616028 <= x) && (g_INT_0061602c <= y)) &&
      (x < g_INT_00616028 + CAlphaBitmap_01caf218.width)) &&
     (y < g_INT_0061602c + CAlphaBitmap_01caf218.height)) {
    return 1;
  }
  return 0;
}
