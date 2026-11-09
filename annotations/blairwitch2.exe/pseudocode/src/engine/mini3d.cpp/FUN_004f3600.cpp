// Name: engine_mini3d.cpp_FUN_004f3600
// Address: 004f3600
// Address Range: [[004f3600, 004f36ed]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3600(int param_1,int param_2,uint param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3600(int param_1,int param_2,uint param_3,float param_4,float param_5)

{
  _DAT_01d09900 = (float)param_1 * _DAT_005ddc48;
  _DAT_01d09904 = (float)param_2 * _DAT_005ddc48;
  _DAT_01d09908 = (float)(int)param_3 * _DAT_005ddc48;
  _DAT_01d0990c = param_4;
  _DAT_01d09910 = param_5;
  if (DAT_006141c0 == 0x20) {
    _DAT_01c38b5c =
         param_3 << (DAT_01c3582c & 0x1f) |
         param_1 << (DAT_01c35814 & 0x1f) | param_2 << (DAT_01c35820 & 0x1f);
  }
  else {
    _DAT_01c38b5c = param_1 << 0x10 | param_2 << 8 | param_3;
  }
  if ((_DAT_0264bccc != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bccc)(_DAT_01d09900,_DAT_01d09904,_DAT_01d09908,param_4,param_5);
  }
  _DAT_01d12158 = 1.0 / (_DAT_01d09910 - _DAT_01d0990c);
  return;
}
