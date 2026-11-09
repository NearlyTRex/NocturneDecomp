// Name: unkafter_box.cpp_FUN_004fb1c0
// Address: 004fb1c0
// Address Range: [[004fb1c0, 004fb1ee]]
// Convention: unknown
// Signature: undefined4 * unkafter_box_cpp_FUN_004fb1c0(undefined4 *param_1)

#include "nocturne.h"

uint * unkafter_box_cpp_FUN_004fb1c0(uint *param_1)

{
  *param_1 = 0;
  param_1[0x709] = 0;
  memset(param_1 + 0x70a,0,0x1c200);
  return param_1;
}
