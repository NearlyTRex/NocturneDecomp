// Name: engine_mini3d.cpp_FUN_005123b0
// Address: 005123b0
// Address Range: [[005123b0, 0051249d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005123b0(int param_1,int param_2,uint param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005123b0(int param_1,int param_2,uint param_3,float param_4,float param_5)

{
  _DAT_01d22564 = (float)param_1 * _DAT_005e8c8f;
  _DAT_01d22568 = (float)param_2 * _DAT_005e8c8f;
  _DAT_01d2256c = (float)(int)param_3 * _DAT_005e8c8f;
  _DAT_01d22570 = param_4;
  _DAT_01d22574 = param_5;
  if (DAT_0061b4a0 == 0x20) {
    _DAT_01c51d1c =
         param_3 << (DAT_01c4e9ec & 0x1f) |
         param_1 << (DAT_01c4e9d4 & 0x1f) | param_2 << (DAT_01c4e9e0 & 0x1f);
  }
  else {
    _DAT_01c51d1c = param_1 << 0x10 | param_2 << 8 | param_3;
  }
  if ((_DAT_02c8349c != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c8349c)(_DAT_01d22564,_DAT_01d22568,_DAT_01d2256c,param_4,param_5);
  }
  _DAT_01d2adb8 = 1.0 / (_DAT_01d22574 - _DAT_01d22570);
  return;
}
