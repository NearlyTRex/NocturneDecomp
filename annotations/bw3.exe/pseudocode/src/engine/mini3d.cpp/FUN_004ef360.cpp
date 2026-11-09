// Name: engine_mini3d.cpp_FUN_004ef360
// Address: 004ef360
// Address Range: [[004ef360, 004ef387]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef360(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef360(uint param_1)

{
  _DAT_01d76cd4 = param_1;
  if ((_DAT_02cf60ac != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60ac)(param_1);
    return;
  }
  return;
}
