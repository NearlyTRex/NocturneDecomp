// Name: engine_mini3d.cpp_convertVertexD3DL_FUN_005149a0
// Address: 005149a0
// Address Range: [[005149a0, 00514a96]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_convertVertexD3DL_FUN_005149a0(float *out,float *in)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_convertVertexD3DL_FUN_005149a0(float *out,float *in)

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
  engine_mini3d_cpp_lightVertex_FUN_00513ca0(in,afStack_40);
  fVar1 = fStack_38 * 255.0f - 0.5f;
  fVar2 = fStack_34 * 255.0f - 0.5f;
  fVar3 = fStack_30 * 255.0f - 0.5f;
  fVar4 = fStack_2c * 255.0f - 0.5f;
  out[5] = 0.0;
  out[4] = (float)((int)ROUND(fVar3) << 0x10 | (int)ROUND(fVar2) << 8 | (int)ROUND(fVar1) |
                  (int)ROUND(fVar4) << 0x18);
  out[6] = in[6];
  out[7] = in[7];
  return;
}
