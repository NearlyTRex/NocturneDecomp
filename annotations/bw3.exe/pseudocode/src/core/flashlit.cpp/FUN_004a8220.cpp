// Name: core_flashlit.cpp_FUN_004a8220
// Address: 004a8220
// Address Range: [[004a8220, 004a826a]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004a8220(int param_1,int param_2)

#include "nocturne.h"

uint core_flashlit_cpp_FUN_004a8220(int param_1,int param_2)

{
  if ((((0x00000262 <= param_1) && (0x000001C0 <= param_2)) &&
      (param_1 < 0x00000262 + CAlphaBitmap_01d19cc4.width)) &&
     (param_2 < 0x000001C0 + CAlphaBitmap_01d19cc4.height)) {
    return 1;
  }
  return 0;
}
