// Name: engine_mini3d.cpp_FUN_004f35ae
// Address: 004f35ae
// Address Range: [[004f35ae, 004f3682]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f35ae(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f35ae(uint param_1)

{
  float fVar1;
  
  _DAT_01d7a6b8 = (float)(param_1 >> 0x10 & 0xff) * _DAT_005c833d;
  _DAT_01d7a6bc = (float)(param_1 >> 8 & 0xff) * _DAT_005c833d;
  _DAT_01d7a6c0 = (float)(param_1 & 0xff) * _DAT_005c833d;
  fVar1 = (float)(param_1 >> 0x18) * _DAT_005c833d;
  if (_DAT_01d76c40 != fVar1) {
    _DAT_01d76c40 = fVar1;
    if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,fVar1);
      _DAT_01d7a6c4 = param_1;
      return;
    }
  }
  _DAT_01d7a6c4 = param_1;
  return;
}
