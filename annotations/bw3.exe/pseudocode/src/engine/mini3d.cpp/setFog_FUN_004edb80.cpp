// Name: engine_mini3d.cpp_setFog_FUN_004edb80
// Address: 004edb80
// Address Range: [[004edb80, 004edc6d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_004edb80(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFog_FUN_004edb80(int red,int green,int blue,float fog_near,float fog_far)

{
  _DAT_01d76ce4 = (float)red * _DAT_005c7f91;
  _DAT_01d76ce8 = (float)green * _DAT_005c7f91;
  _DAT_01d76cec = (float)blue * _DAT_005c7f91;
  _DAT_01d76cf0 = fog_near;
  _DAT_01d76cf4 = fog_far;
  if (DAT_005fba20 == 0x20) {
    _DAT_01c6e2bc =
         blue << (DAT_01c6af8c & 0x1f) |
         red << (DAT_01c6af74 & 0x1f) | green << (DAT_01c6af80 & 0x1f);
  }
  else {
    _DAT_01c6e2bc = red << 0x10 | green << 8 | blue;
  }
  if ((_DAT_02cf60f8 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60f8)(_DAT_01d76ce4,_DAT_01d76ce8,_DAT_01d76cec,fog_near,fog_far);
  }
  _DAT_01d7f538 = 1.0 / (_DAT_01d76cf4 - _DAT_01d76cf0);
  return;
}
