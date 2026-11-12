// Name: core_morph.cpp_FUN_005238c0
// Address: 005238c0
// Address Range: [[005238c0, 005238ee]]
// Convention: unknown
// Signature: undefined4 * core_morph_cpp_FUN_005238c0(undefined4 *param_1)

#include "nocturne.h"

uint * core_morph_cpp_FUN_005238c0(uint *param_1)

{
  *param_1 = 0;
  param_1[0x709] = 0;
  memset(param_1 + 0x70a,0,0x1c200);
  return param_1;
}
