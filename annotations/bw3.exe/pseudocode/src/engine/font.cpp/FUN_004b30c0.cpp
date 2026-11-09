// Name: engine_font.cpp_FUN_004b30c0
// Address: 004b30c0
// Address Range: [[004b30c0, 004b30e1]]
// Convention: unknown
// Signature: undefined4 engine_font_cpp_FUN_004b30c0(int param_1,int param_2)

#include "nocturne.h"

uint engine_font_cpp_FUN_004b30c0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x35e8);
  }
  return 0;
}
