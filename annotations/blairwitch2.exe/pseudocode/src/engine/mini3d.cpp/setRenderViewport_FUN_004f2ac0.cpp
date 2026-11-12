// Name: engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0
// Address: 004f2ac0
// Address Range: [[004f2ac0, 004f2b9c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(float left,float top,float right,float bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(float left,float top,float right,float bottom)

{
  float fVar1;
  
  _DAT_01d0987c = (right - left) * _DAT_005ddae8;
  fVar1 = (bottom - top) * _DAT_005ddae8;
  _DAT_01d0986c = left;
  _DAT_01d09870 = top;
  _DAT_01d09884 = left + _DAT_01d0987c;
  _DAT_01d09888 = top + fVar1;
  _DAT_01d09874 = right;
  _DAT_01d0987c = _DAT_01d0987c + _DAT_005ddaec;
  _DAT_01d09880 = -fVar1 + 1.0;
  _DAT_01d09878 = bottom;
  if (((_DAT_01d0d2b4 == 0) && (_DAT_0264bc74 != (code *)0x0)) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc74)(left,top,right,bottom,_DAT_01d098dc,_DAT_01d098e0);
  }
  engine_mini3d_cpp_FUN_004f53d0();
  _DAT_01d0c398 = 1;
  return;
}
