// Name: engine_font.cpp_FUN_004b377e
// Address: 004b377e
// Address Range: [[004b377e, 004b37cc]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_004b377e(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint engine_font_cpp_FUN_004b377e(int param_1,int param_2,uint param_3)

{
  if (DAT_005fba20 == 0x20) {
    return param_3 << (DAT_01c6af8c & 0x1f) |
           param_1 << (DAT_01c6af74 & 0x1f) | param_2 << (DAT_01c6af80 & 0x1f);
  }
  return param_1 << 0x10 | param_2 << 8 | param_3;
}
