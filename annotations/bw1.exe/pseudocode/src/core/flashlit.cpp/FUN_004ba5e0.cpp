// Name: core_flashlit.cpp_FUN_004ba5e0
// Address: 004ba5e0
// Address Range: [[004ba5e0, 004ba62a]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004ba5e0(int param_1,int param_2)

#include "nocturne.h"

uint core_flashlit_cpp_FUN_004ba5e0(int param_1,int param_2)

{
  if ((((0x00000262 <= param_1) && (0x000001C0 <= param_2)) &&
      (param_1 < 0x00000262 + CAlphaBitmap_01cc7cac.width)) &&
     (param_2 < 0x000001C0 + CAlphaBitmap_01cc7cac.height)) {
    return 1;
  }
  return 0;
}
