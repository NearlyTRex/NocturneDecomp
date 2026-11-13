// Name: engine_mini3d.cpp_intersectUserClipPlane_FUN_004f84d0
// Address: 004f84d0
// Address Range: [[004f84d0, 004f85f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_intersectUserClipPlane_FUN_004f84d0(float *from,float *to,float *out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_intersectUserClipPlane_FUN_004f84d0(float *from,float *to,float *out)

{
  float fVar1;
  
  fVar1 = (to[2] - from[2]) * _DAT_01d0d2c4 +
          (*to - *from) * _DAT_01d0d2bc + (to[1] - from[1]) * _DAT_01d0d2c0;
  if (ABS(fVar1) == 0.0) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x1475;
    core_main_c_FUN_004e4500("Bad clip!");
  }
  fVar1 = -(_DAT_01d0d2c4 * from[2] +
           _DAT_01d0d2c0 * from[1] + _DAT_01d0d2bc * *from + _DAT_01d0d2c8) / fVar1;
  *out = (*to - *from) * fVar1 + *from;
  out[1] = (to[1] - from[1]) * fVar1 + from[1];
  out[2] = (to[2] - from[2]) * fVar1 + from[2];
  out[7] = (to[7] - from[7]) * fVar1 + from[7];
  out[8] = (to[8] - from[8]) * fVar1 + from[8];
  out[3] = (to[3] - from[3]) * fVar1 + from[3];
  out[4] = (to[4] - from[4]) * fVar1 + from[4];
  out[5] = (to[5] - from[5]) * fVar1 + from[5];
  out[6] = (to[6] - from[6]) * fVar1 + from[6];
  return;
}
