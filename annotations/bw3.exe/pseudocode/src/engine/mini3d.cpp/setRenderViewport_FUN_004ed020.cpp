// Name: engine_mini3d.cpp_setRenderViewport_FUN_004ed020
// Address: 004ed020
// Address Range: [[004ed020, 004ed140]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004ed020(float left,float top,float right,float bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004ed020(float left,float top,float right,float bottom)

{
  float fVar1;
  
  if (_DAT_01d7a694 == 0) {
    left = left * _DAT_01d76cc4;
    top = top * _DAT_01d76cc4;
    right = right * _DAT_01d76cc4;
    bottom = bottom * _DAT_01d76cc4;
  }
  _DAT_01d76c5c = (right - left) * _DAT_005c7e71;
  fVar1 = (bottom - top) * _DAT_005c7e71;
  _DAT_01d76c4c = left;
  _DAT_01d76c50 = top;
  _DAT_01d76c64 = left + _DAT_01d76c5c;
  _DAT_01d76c68 = top + fVar1;
  _DAT_01d76c54 = right;
  _DAT_01d76c5c = _DAT_01d76c5c + _DAT_005c7e75;
  _DAT_01d76c60 = -fVar1 + 1.0;
  _DAT_01d76c58 = bottom;
  if (((_DAT_01d7a694 == 0) && (_DAT_02cf60a0 != (code *)0x0)) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60a0)(left,top,right,bottom,_DAT_01d76cbc,_DAT_01d76cc0);
  }
  engine_mini3d_cpp_resetDynamicLight_FUN_004ef8f0();
  _DAT_01d7977c = 1;
  return;
}
