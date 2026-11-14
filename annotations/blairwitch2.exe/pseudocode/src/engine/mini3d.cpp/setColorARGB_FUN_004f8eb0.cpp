// Name: engine_mini3d.cpp_setColorARGB_FUN_004f8eb0
// Address: 004f8eb0
// Address Range: [[004f8eb0, 004f8f82]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f8eb0(uint argb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f8eb0(uint argb)

{
  float fVar1;
  
  _DAT_01d0d2d8 = (float)(argb >> 0x10 & 0xff) * _DAT_005ddff4;
  _DAT_01d0d2dc = (float)(argb >> 8 & 0xff) * _DAT_005ddff4;
  _DAT_01d0d2e0 = (float)(argb & 0xff) * _DAT_005ddff4;
  fVar1 = (float)(argb >> 0x18) * _DAT_005ddff4;
  if (_DAT_01d09860 != fVar1) {
    _DAT_01d09860 = fVar1;
    if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,fVar1);
      _DAT_01d0d2e4 = argb;
      return;
    }
  }
  _DAT_01d0d2e4 = argb;
  return;
}
