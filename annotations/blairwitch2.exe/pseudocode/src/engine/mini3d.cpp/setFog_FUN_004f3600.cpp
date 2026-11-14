// Name: engine_mini3d.cpp_setFog_FUN_004f3600
// Address: 004f3600
// Address Range: [[004f3600, 004f36ed]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_004f3600(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFog_FUN_004f3600(int red,int green,int blue,float fog_near,float fog_far)

{
  _DAT_01d09900 = (float)red * _DAT_005ddc48;
  _DAT_01d09904 = (float)green * _DAT_005ddc48;
  _DAT_01d09908 = (float)blue * _DAT_005ddc48;
  _DAT_01d0990c = fog_near;
  _DAT_01d09910 = fog_far;
  if (DAT_006141c0 == 0x20) {
    _DAT_01c38b5c =
         blue << (DAT_01c3582c & 0x1f) |
         red << (DAT_01c35814 & 0x1f) | green << (DAT_01c35820 & 0x1f);
  }
  else {
    _DAT_01c38b5c = red << 0x10 | green << 8 | blue;
  }
  if ((_DAT_0264bccc != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bccc)(_DAT_01d09900,_DAT_01d09904,_DAT_01d09908,fog_near,fog_far);
  }
  _DAT_01d12158 = 1.0 / (_DAT_01d09910 - _DAT_01d0990c);
  return;
}
