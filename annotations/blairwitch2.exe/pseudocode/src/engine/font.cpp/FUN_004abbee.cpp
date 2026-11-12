// Name: engine_font.cpp_FUN_004abbee
// Address: 004abbee
// Address Range: [[004abbee, 004abc3c]]
// Convention: unknown
// Signature: uint engine_font_cpp_FUN_004abbee(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint engine_font_cpp_FUN_004abbee(int param_1,int param_2,uint param_3)

{
  if (DAT_006141c0 == 0x20) {
    return param_3 << (DAT_01c3582c & 0x1f) |
           param_1 << (DAT_01c35814 & 0x1f) | param_2 << (DAT_01c35820 & 0x1f);
  }
  return param_1 << 0x10 | param_2 << 8 | param_3;
}
