// Name: core_flashlit.cpp_hitTestExitButton_FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a1d4a]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a1d00(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a1d00(int x,int y)

{
  if ((((0x00000262 <= x) && (0x000001C0 <= y)) &&
      (x < 0x00000262 + CAlphaBitmap_01caf218.width)) &&
     (y < 0x000001C0 + CAlphaBitmap_01caf218.height)) {
    return 1;
  }
  return 0;
}
