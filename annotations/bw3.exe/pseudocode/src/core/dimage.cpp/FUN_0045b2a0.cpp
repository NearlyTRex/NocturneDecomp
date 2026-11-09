// Name: core_dimage.cpp_FUN_0045b2a0
// Address: 0045b2a0
// Address Range: [[0045b2a0, 0045b2f4]]
// Convention: unknown
// Signature: uint core_dimage_cpp_FUN_0045b2a0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dimage_cpp_FUN_0045b2a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return param_4 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
         param_3 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f) |
         param_2 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f);
}
