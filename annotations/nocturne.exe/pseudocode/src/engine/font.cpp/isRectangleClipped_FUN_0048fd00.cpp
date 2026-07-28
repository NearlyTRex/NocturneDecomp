// Name: engine_font.cpp_isRectangleClipped_FUN_0048fd00
// Address: 0048fd00
// Address Range: [[0048fd00, 0048fd46]]
// Convention: unknown
// Signature: undefined4 engine_font_cpp_isRectangleClipped_FUN_0048fd00(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_font_cpp_isRectangleClipped_FUN_0048fd00(int param_1,int param_2,int param_3,int param_4)

{
  if ((((_DAT_01c00c58 <= param_3) && (_DAT_01c00c5c <= param_4)) &&
      (param_3 <= (_DAT_01c00c60 + 1) - param_1)) && (param_4 <= (_DAT_01c00c64 + 1) - param_2)) {
    return 0;
  }
  return 1;
}
