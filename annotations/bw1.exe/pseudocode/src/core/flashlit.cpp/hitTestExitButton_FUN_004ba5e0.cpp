// Name: core_flashlit.cpp_hitTestExitButton_FUN_004ba5e0
// Address: 004ba5e0
// Address Range: [[004ba5e0, 004ba62a]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004ba5e0(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestExitButton_FUN_004ba5e0(int x,int y)

{
  if ((((0x00000262 <= x) && (0x000001C0 <= y)) &&
      (x < 0x00000262 + CAlphaBitmap_01cc7cac.width)) &&
     (y < 0x000001C0 + CAlphaBitmap_01cc7cac.height)) {
    return 1;
  }
  return 0;
}
