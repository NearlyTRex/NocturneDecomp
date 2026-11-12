// Name: core_flashlit.cpp_FUN_004a8180
// Address: 004a8180
// Address Range: [[004a8180, 004a821d]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004a8180(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flashlit_cpp_FUN_004a8180(int param_1,int param_2)

{
  if ((((0 < _DAT_01d19ba8) && (0x0000004A <= param_1)) && (0x000001AE <= param_2)) &&
     ((param_1 < 0x0000004A + CAlphaBitmap_01d19c9c.width &&
      (param_2 < 0x000001AE + CAlphaBitmap_01d19c9c.height)))) {
    return 0xffffffff;
  }
  if (((_DAT_01d19ba8 < g_STextViewInstance.page_count + -2) && (0x000001F4 <= param_1)) &&
     ((0x000001AE <= param_2 &&
      ((param_1 < 0x000001F4 + CAlphaBitmap_01d19cb0.width &&
       (param_2 < CAlphaBitmap_01d19cb0.height + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
