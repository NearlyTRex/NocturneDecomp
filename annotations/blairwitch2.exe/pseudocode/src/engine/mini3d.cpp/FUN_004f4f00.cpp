// Name: engine_mini3d.cpp_FUN_004f4f00
// Address: 004f4f00
// Address Range: [[004f4f00, 004f4f47]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4f00(uint param_1,uint param_2,uint param_3)

{
  _DAT_01d098e4 = param_1;
  _DAT_01d098e8 = param_2;
  _DAT_01d098ec = param_3;
  if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc78)(param_1,param_2,param_3,_DAT_01d09860);
    return;
  }
  return;
}
