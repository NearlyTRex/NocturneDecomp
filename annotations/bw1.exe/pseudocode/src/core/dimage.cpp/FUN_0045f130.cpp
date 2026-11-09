// Name: core_dimage.cpp_FUN_0045f130
// Address: 0045f130
// Address Range: [[0045f130, 0045f184]]
// Convention: unknown
// Signature: uint core_dimage_cpp_FUN_0045f130(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dimage_cpp_FUN_0045f130(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return param_4 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
         param_3 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f) |
         param_2 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f);
}
