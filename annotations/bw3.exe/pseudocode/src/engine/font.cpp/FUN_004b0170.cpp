// Name: engine_font.cpp_FUN_004b0170
// Address: 004b0170
// Address Range: [[004b0170, 004b018a]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b0170(int param_1,float param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_004b0170(int param_1,float param_2)

{
  *(float *)(param_1 + 0x4218) = param_2;
  *(float *)(param_1 + 0x421c) = 1.0 / param_2;
  return;
}
