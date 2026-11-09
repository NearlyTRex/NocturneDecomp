// Name: unkafter_minecar.cpp_FUN_004f2ac0
// Address: 004f2ac0
// Address Range: [[004f2ac0, 004f2b9c]]
// Convention: unknown
// Signature: void unkafter_minecar_cpp_FUN_004f2ac0(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_minecar_cpp_FUN_004f2ac0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  _DAT_01d0987c = (param_3 - param_1) * _DAT_005ddae8;
  fVar1 = (param_4 - param_2) * _DAT_005ddae8;
  _DAT_01d0986c = param_1;
  _DAT_01d09870 = param_2;
  _DAT_01d09884 = param_1 + _DAT_01d0987c;
  _DAT_01d09888 = param_2 + fVar1;
  _DAT_01d09874 = param_3;
  _DAT_01d0987c = _DAT_01d0987c + _DAT_005ddaec;
  _DAT_01d09880 = -fVar1 + 1.0;
  _DAT_01d09878 = param_4;
  if (((_DAT_01d0d2b4 == 0) && (_DAT_0264bc74 != (code *)0x0)) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc74)(param_1,param_2,param_3,param_4,_DAT_01d098dc,_DAT_01d098e0);
  }
  engine_mini3d_cpp_FUN_004f53d0();
  _DAT_01d0c398 = 1;
  return;
}
