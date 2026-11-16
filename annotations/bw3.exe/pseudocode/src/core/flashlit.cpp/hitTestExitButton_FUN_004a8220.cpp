// Name: core_flashlit.cpp_hitTestExitButton_FUN_004a8220
// Address: 004a8220
// Address Range: [[004a8220, 004a826a]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a8220(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004a8220(int x,int y)

{
  if ((((0x00000262 <= x) && (0x000001C0 <= y)) &&
      (x < 0x00000262 + CAlphaBitmap_01d19cc4.width)) &&
     (y < 0x000001C0 + CAlphaBitmap_01d19cc4.height)) {
    return 1;
  }
  return 0;
}
