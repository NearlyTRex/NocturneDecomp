// Name: engine_mini3d.cpp_FUN_004f030c
// Address: 004f030c
// Address Range: [[004f030c, 004f0337]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f030c(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f030c(uint param_1)

{
  _DAT_01d76cf8 = param_1;
  if ((_DAT_02cf60ec != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60ec)(param_1);
    return;
  }
  return;
}
