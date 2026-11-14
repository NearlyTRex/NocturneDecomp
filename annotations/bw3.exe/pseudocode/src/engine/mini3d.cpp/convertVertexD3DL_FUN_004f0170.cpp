// Name: engine_mini3d.cpp_convertVertexD3DL_FUN_004f0170
// Address: 004f0170
// Address Range: [[004f0170, 004f0266]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_convertVertexD3DL_FUN_004f0170(float *out,float *in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_convertVertexD3DL_FUN_004f0170(float *out,float *in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float afStack_40 [2];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  *out = *in;
  out[1] = in[1];
  out[2] = in[2];
  out[3] = 0.0;
  engine_mini3d_cpp_lightVertex_FUN_004ef470(in,afStack_40);
  fVar1 = fStack_38 * _DAT_005c8195 - _DAT_006004e0;
  fVar2 = fStack_34 * _DAT_005c8195 - _DAT_006004e0;
  fVar3 = fStack_30 * _DAT_005c8195 - _DAT_006004e0;
  fVar4 = fStack_2c * _DAT_005c8195 - _DAT_006004e0;
  out[5] = 0.0;
  out[4] = (float)((int)ROUND(fVar3) << 0x10 | (int)ROUND(fVar2) << 8 | (int)ROUND(fVar1) |
                  (int)ROUND(fVar4) << 0x18);
  out[6] = in[6];
  out[7] = in[7];
  return;
}
