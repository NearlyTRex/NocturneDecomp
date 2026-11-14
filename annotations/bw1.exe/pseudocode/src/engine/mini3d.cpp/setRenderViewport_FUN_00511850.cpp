// Name: engine_mini3d.cpp_setRenderViewport_FUN_00511850
// Address: 00511850
// Address Range: [[00511850, 00511970]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_00511850(float left,float top,float right,float bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_00511850(float left,float top,float right,float bottom)

{
  float fVar1;
  
  if (_DAT_01d25f14 == 0) {
    left = left * _DAT_01d22544;
    top = top * _DAT_01d22544;
    right = right * _DAT_01d22544;
    bottom = bottom * _DAT_01d22544;
  }
  _DAT_01d224dc = (right - left) * _DAT_005e8b6f;
  fVar1 = (bottom - top) * _DAT_005e8b6f;
  _DAT_01d224cc = left;
  _DAT_01d224d0 = top;
  _DAT_01d224e4 = left + _DAT_01d224dc;
  _DAT_01d224e8 = top + fVar1;
  _DAT_01d224d4 = right;
  _DAT_01d224dc = _DAT_01d224dc + _DAT_005e8b73;
  _DAT_01d224e0 = -fVar1 + 1.0;
  _DAT_01d224d8 = bottom;
  if (((_DAT_01d25f14 == 0) && (_DAT_02c83444 != (code *)0x0)) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83444)(left,top,right,bottom,_DAT_01d2253c,_DAT_01d22540);
  }
  engine_mini3d_cpp_resetDynamicLight_FUN_00514120();
  _DAT_01d24ffc = 1;
  return;
}
