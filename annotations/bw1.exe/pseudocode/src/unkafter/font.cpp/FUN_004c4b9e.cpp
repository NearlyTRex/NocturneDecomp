// Name: unkafter_font.cpp_FUN_004c4b9e
// Address: 004c4b9e
// Address Range: [[004c4b9e, 004c4bec]]
// Convention: unknown
// Signature: uint unkafter_font_cpp_FUN_004c4b9e(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint unkafter_font_cpp_FUN_004c4b9e(int param_1,int param_2,uint param_3)

{
  if (DAT_0061b4a0 == 0x20) {
    return param_3 << (DAT_01c4e9ec & 0x1f) |
           param_1 << (DAT_01c4e9d4 & 0x1f) | param_2 << (DAT_01c4e9e0 & 0x1f);
  }
  return param_1 << 0x10 | param_2 << 8 | param_3;
}
