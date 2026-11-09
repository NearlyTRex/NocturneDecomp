// Name: core_dimage.cpp_FUN_00448fcc
// Address: 00448fcc
// Address Range: [[00448fcc, 00448fcf]]
// Convention: unknown
// Signature: uint core_dimage_cpp_FUN_00448fcc(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dimage_cpp_FUN_00448fcc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return param_4 / _DAT_01c35830 << (DAT_01c3582c & 0x1f) |
         param_3 / _DAT_01c35824 << (DAT_01c35820 & 0x1f) |
         param_2 / _DAT_01c35818 << (DAT_01c35814 & 0x1f);
}
