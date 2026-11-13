// Name: engine_mini3d.cpp_drawLine_FUN_004f3700
// Address: 004f3700
// Address Range: [[004f3700, 004f37d9]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawLine_FUN_004f3700(int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_drawLine_FUN_004f3700(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *vertices;
  float fVar4;
  
  vertices = _DAT_01d7f4f4;
  fVar4 = engine_mini3d_cpp_nextDepth2D_FUN_004f3af0();
  fVar3 = _DAT_01d76cc4;
  fVar1 = _DAT_01d76cc4 * (float)x1;
  fVar2 = (float)y1 * _DAT_01d76cc4;
  vertices[2] = fVar4;
  vertices[3] = 1.0 / fVar4;
  vertices[4] = _DAT_01d7a6c4;
  vertices[5] = 0.0;
  vertices[6] = 0.5;
  vertices[7] = 0.5;
  vertices[0xd] = 0.0;
  vertices[0xe] = 0.5;
  vertices[0xf] = 0.5;
  *vertices = fVar1;
  vertices[1] = fVar2;
  vertices[10] = fVar4;
  vertices[8] = (float)x2 * fVar3;
  vertices[0xb] = 1.0 / fVar4;
  fVar1 = _DAT_01d7a6c4;
  vertices[9] = (float)y2 * fVar3;
  vertices[0xc] = fVar1;
  engine_mini3d_cpp_lineListD3DTL_FUN_004ee9f0(vertices,2);
  return;
}
