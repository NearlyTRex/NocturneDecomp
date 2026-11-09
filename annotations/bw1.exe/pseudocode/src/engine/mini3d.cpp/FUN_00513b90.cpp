// Name: engine_mini3d.cpp_FUN_00513b90
// Address: 00513b90
// Address Range: [[00513b90, 00513bb7]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00513b90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00513b90(uint param_1)

{
  _DAT_01d22554 = param_1;
  if ((_DAT_02c83450 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83450)(param_1);
    return;
  }
  return;
}
