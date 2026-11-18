// Name: engine_mini3d.cpp_drawLine_FUN_004f9000
// Address: 004f9000
// Address Range: [[004f9000, 004f90c5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawLine_FUN_004f9000(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawLine_FUN_004f9000(int x1,int y1,int x2,int y2)

{
  int iVar1;
  float *vertices;
  float fVar2;
  
  vertices = g_FLOAT_PTR_01d12114;
  fVar2 = engine_mini3d_cpp_nextDepth2D_FUN_004f93d0();
  vertices[5] = 0.0;
  vertices[6] = 0.5;
  vertices[7] = 0.5;
  vertices[0xd] = 0.0;
  vertices[0xe] = 0.5;
  vertices[0xf] = 0.5;
  vertices[2] = fVar2;
  *vertices = (float)x1;
  vertices[3] = 1.0 / fVar2;
  vertices[4] = (float)g_INT_01d0d2e4;
  vertices[1] = (float)y1;
  vertices[8] = (float)x2;
  vertices[10] = fVar2;
  vertices[0xb] = 1.0 / fVar2;
  iVar1 = g_INT_01d0d2e4;
  vertices[9] = (float)y2;
  vertices[0xc] = (float)iVar1;
  engine_mini3d_cpp_lineListD3DTL_FUN_004f44d0(vertices,2);
  return;
}
