// Name: engine_mini3d.cpp_setColorARGB_FUN_00517de0
// Address: 00517de0
// Address Range: [[00517de0, 00517eb2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_00517de0(uint argb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_00517de0(uint argb)

{
  float fVar1;
  
  _DAT_01d25f38 = (float)(argb >> 0x10 & 0xff) * _DAT_005e903b;
  _DAT_01d25f3c = (float)(argb >> 8 & 0xff) * _DAT_005e903b;
  _DAT_01d25f40 = (float)(argb & 0xff) * _DAT_005e903b;
  fVar1 = (float)(argb >> 0x18) * _DAT_005e903b;
  if (_DAT_01d224c0 != fVar1) {
    _DAT_01d224c0 = fVar1;
    if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,fVar1);
      _DAT_01d25f44 = argb;
      return;
    }
  }
  _DAT_01d25f44 = argb;
  return;
}
