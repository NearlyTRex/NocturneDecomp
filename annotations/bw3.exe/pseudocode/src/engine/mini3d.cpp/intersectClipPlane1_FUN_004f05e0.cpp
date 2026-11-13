// Name: engine_mini3d.cpp_intersectClipPlane1_FUN_004f05e0
// Address: 004f05e0
// Address Range: [[004f05e0, 004f069f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_intersectClipPlane1_FUN_004f05e0(float *from,float *to,float *out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_intersectClipPlane1_FUN_004f05e0(float *from,float *to,float *out)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (*from + from[2]) / (((*from + from[2]) - *to) - to[2]);
  fVar2 = (to[2] - from[2]) * fVar1 + from[2];
  out[2] = fVar2;
  *out = -fVar2;
  iVar3 = _DAT_01d7a694;
  out[1] = (to[1] - from[1]) * fVar1 + from[1];
  if (iVar3 != 0) {
    return;
  }
  out[0xb] = (to[0xb] - from[0xb]) * fVar1 + from[0xb];
  out[10] = (to[10] - from[10]) * fVar1 + from[10];
  out[9] = (to[9] - from[9]) * fVar1 + from[9];
  out[7] = (to[7] - from[7]) * fVar1 + from[7];
  out[8] = (to[8] - from[8]) * fVar1 + from[8];
  out[0xc] = (to[0xc] - from[0xc]) * fVar1 + from[0xc];
  out[0xd] = (to[0xd] - from[0xd]) * fVar1 + from[0xd];
  return;
}
