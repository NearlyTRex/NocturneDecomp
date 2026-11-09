// Name: engine_mini3d.cpp_FUN_004edb80
// Address: 004edb80
// Address Range: [[004edb80, 004edc6d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004edb80(int param_1,int param_2,uint param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004edb80(int param_1,int param_2,uint param_3,float param_4,float param_5)

{
  _DAT_01d76ce4 = (float)param_1 * _DAT_005c7f91;
  _DAT_01d76ce8 = (float)param_2 * _DAT_005c7f91;
  _DAT_01d76cec = (float)(int)param_3 * _DAT_005c7f91;
  _DAT_01d76cf0 = param_4;
  _DAT_01d76cf4 = param_5;
  if (DAT_005fba20 == 0x20) {
    _DAT_01c6e2bc =
         param_3 << (DAT_01c6af8c & 0x1f) |
         param_1 << (DAT_01c6af74 & 0x1f) | param_2 << (DAT_01c6af80 & 0x1f);
  }
  else {
    _DAT_01c6e2bc = param_1 << 0x10 | param_2 << 8 | param_3;
  }
  if ((_DAT_02cf60f8 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60f8)(_DAT_01d76ce4,_DAT_01d76ce8,_DAT_01d76cec,param_4,param_5);
  }
  _DAT_01d7f538 = 1.0 / (_DAT_01d76cf4 - _DAT_01d76cf0);
  return;
}
