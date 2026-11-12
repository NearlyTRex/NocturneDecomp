// Name: engine_mini3d.cpp_FUN_004ed020
// Address: 004ed020
// Address Range: [[004ed020, 004ed140]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ed020(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ed020(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (_DAT_01d7a694 == 0) {
    param_1 = param_1 * _DAT_01d76cc4;
    param_2 = param_2 * _DAT_01d76cc4;
    param_3 = param_3 * _DAT_01d76cc4;
    param_4 = param_4 * _DAT_01d76cc4;
  }
  _DAT_01d76c5c = (param_3 - param_1) * _DAT_005c7e71;
  fVar1 = (param_4 - param_2) * _DAT_005c7e71;
  _DAT_01d76c4c = param_1;
  _DAT_01d76c50 = param_2;
  _DAT_01d76c64 = param_1 + _DAT_01d76c5c;
  _DAT_01d76c68 = param_2 + fVar1;
  _DAT_01d76c54 = param_3;
  _DAT_01d76c5c = _DAT_01d76c5c + _DAT_005c7e75;
  _DAT_01d76c60 = -fVar1 + 1.0;
  _DAT_01d76c58 = param_4;
  if (((_DAT_01d7a694 == 0) && (_DAT_02cf60a0 != (code *)0x0)) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60a0)(param_1,param_2,param_3,param_4,_DAT_01d76cbc,_DAT_01d76cc0);
  }
  engine_mini3d_cpp_FUN_004ef8f0();
  _DAT_01d7977c = 1;
  return;
}
