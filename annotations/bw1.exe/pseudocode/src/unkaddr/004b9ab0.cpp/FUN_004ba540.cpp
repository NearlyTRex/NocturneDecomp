// Name: unkaddr_004b9ab0.cpp_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004ba5dd]]
// Convention: unknown
// Signature: undefined4 unkaddr_004b9ab0_cpp_FUN_004ba540(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkaddr_004b9ab0_cpp_FUN_004ba540(int param_1,int param_2)

{
  if ((((0 < _DAT_01cc7b90) && (0x0000004A <= param_1)) && (0x000001AE <= param_2)) &&
     ((param_1 < 0x0000004A + CAlphaBitmap_01cc7c84._12_4_ &&
      (param_2 < 0x000001AE + CAlphaBitmap_01cc7c84._16_4_)))) {
    return 0xffffffff;
  }
  if (((_DAT_01cc7b90 < g_STextViewInstance._56_4_ + -2) && (0x000001F4 <= param_1)) &&
     ((0x000001AE <= param_2 &&
      ((param_1 < 0x000001F4 + CAlphaBitmap_01cc7c98._12_4_ &&
       (param_2 < CAlphaBitmap_01cc7c98._16_4_ + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
