// Name: engine_mini3d.cpp_setColorARGB_FUN_004f35b0
// Address: 004f35b0
// Address Range: [[004f35b0, 004f3682]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f35b0(uint argb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f35b0(uint argb)

{
  float fVar1;
  
  _DAT_01d7a6b8 = (float)(argb >> 0x10 & 0xff) * _DAT_005c833d;
  _DAT_01d7a6bc = (float)(argb >> 8 & 0xff) * _DAT_005c833d;
  _DAT_01d7a6c0 = (float)(argb & 0xff) * _DAT_005c833d;
  fVar1 = (float)(argb >> 0x18) * _DAT_005c833d;
  if (_DAT_01d76c40 != fVar1) {
    _DAT_01d76c40 = fVar1;
    if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,fVar1);
      _DAT_01d7a6c4 = argb;
      return;
    }
  }
  _DAT_01d7a6c4 = argb;
  return;
}
