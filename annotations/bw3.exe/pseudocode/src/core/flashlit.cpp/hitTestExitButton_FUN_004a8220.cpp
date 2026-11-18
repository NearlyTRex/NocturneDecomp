// Name: core_flashlit.cpp_hitTestExitButton_FUN_004a8220
// Address: 004a8220
// Address Range: [[004a8220, 004a826a]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a8220(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a8220(int x,int y)

{
  if ((((g_INT_005fe390 <= x) && (g_INT_005fe394 <= y)) &&
      (x < g_INT_005fe390 + CAlphaBitmap_01d19cc4.width)) &&
     (y < g_INT_005fe394 + CAlphaBitmap_01d19cc4.height)) {
    return 1;
  }
  return 0;
}
