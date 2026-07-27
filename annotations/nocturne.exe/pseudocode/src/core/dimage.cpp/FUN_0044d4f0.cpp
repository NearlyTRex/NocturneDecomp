// Name: core_dimage.cpp_FUN_0044d4f0
// Address: 0044d4f0
// Address Range: [[0044d4f0, 0044d544]]
// Convention: unknown
// Signature: uint core_dimage_cpp_FUN_0044d4f0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dimage_cpp_FUN_0044d4f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return param_4 / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
         param_3 / _DAT_01c00634 << (DAT_01c00630 & 0x1f) |
         param_2 / _DAT_01c00628 << (DAT_01c00624 & 0x1f);
}
