// Name: engine_mini3d.cpp_setFog_FUN_005123b0
// Address: 005123b0
// Address Range: [[005123b0, 0051249d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setFog_FUN_005123b0(int red,int green,int blue,float fog_near,float fog_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setFog_FUN_005123b0(int red,int green,int blue,float fog_near,float fog_far)

{
  _DAT_01d22564 = (float)red * _DAT_005e8c8f;
  _DAT_01d22568 = (float)green * _DAT_005e8c8f;
  _DAT_01d2256c = (float)blue * _DAT_005e8c8f;
  _DAT_01d22570 = fog_near;
  _DAT_01d22574 = fog_far;
  if (DAT_0061b4a0 == 0x20) {
    _DAT_01c51d1c =
         blue << (DAT_01c4e9ec & 0x1f) |
         red << (DAT_01c4e9d4 & 0x1f) | green << (DAT_01c4e9e0 & 0x1f);
  }
  else {
    _DAT_01c51d1c = red << 0x10 | green << 8 | blue;
  }
  if ((_DAT_02c8349c != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c8349c)(_DAT_01d22564,_DAT_01d22568,_DAT_01d2256c,fog_near,fog_far);
  }
  _DAT_01d2adb8 = 1.0 / (_DAT_01d22574 - _DAT_01d22570);
  return;
}
