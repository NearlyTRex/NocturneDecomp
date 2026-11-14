// Name: core_flashlit.cpp_FUN_004a1d00
// Address: 004a1d00
// Address Range: [[004a1d00, 004a1d4a]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004a1d00(int param_1,int param_2)

#include "nocturne.h"

uint core_flashlit_cpp_FUN_004a1d00(int param_1,int param_2)

{
  if ((((0x00000262 <= param_1) && (0x000001C0 <= param_2)) &&
      (param_1 < 0x00000262 + CAlphaBitmap_01caf218.width)) &&
     (param_2 < 0x000001C0 + CAlphaBitmap_01caf218.height)) {
    return 1;
  }
  return 0;
}
