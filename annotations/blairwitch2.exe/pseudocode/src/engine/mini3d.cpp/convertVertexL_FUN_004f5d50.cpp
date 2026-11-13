// Name: engine_mini3d.cpp_convertVertexL_FUN_004f5d50
// Address: 004f5d50
// Address Range: [[004f5d50, 004f5d85]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_convertVertexL_FUN_004f5d50(float *out,float *in)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_convertVertexL_FUN_004f5d50(float *out,float *in)

{
  *out = *in;
  out[1] = in[1];
  out[2] = in[2];
  engine_mini3d_cpp_lightVertex_FUN_004f4f50(in,out + 3);
  out[7] = in[6];
  out[8] = in[7];
  return;
}
