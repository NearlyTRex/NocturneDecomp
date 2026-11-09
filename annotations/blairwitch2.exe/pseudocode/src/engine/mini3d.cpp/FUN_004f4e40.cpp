// Name: engine_mini3d.cpp_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4e67]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4e40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4e40(uint param_1)

{
  _DAT_01d098f0 = param_1;
  if ((_DAT_0264bc80 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc80)(param_1);
    return;
  }
  return;
}
