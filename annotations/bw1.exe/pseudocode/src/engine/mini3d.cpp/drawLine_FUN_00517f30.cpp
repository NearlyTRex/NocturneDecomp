// Name: engine_mini3d.cpp_drawLine_FUN_00517f30
// Address: 00517f30
// Address Range: [[00517f30, 00518009]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawLine_FUN_00517f30(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawLine_FUN_00517f30(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *vertices;
  float fVar5;
  
  vertices = g_FLOAT_PTR_01d2ad74;
  fVar5 = engine_mini3d_cpp_nextDepth2D_FUN_00518320();
  fVar3 = g_FLOAT_01d22544;
  fVar1 = g_FLOAT_01d22544 * (float)x1;
  fVar2 = (float)y1 * g_FLOAT_01d22544;
  vertices[2] = fVar5;
  vertices[3] = 1.0 / fVar5;
  vertices[4] = (float)g_INT_01d25f44;
  vertices[5] = 0.0;
  vertices[6] = 0.5;
  vertices[7] = 0.5;
  vertices[0xd] = 0.0;
  vertices[0xe] = 0.5;
  vertices[0xf] = 0.5;
  *vertices = fVar1;
  vertices[1] = fVar2;
  vertices[10] = fVar5;
  vertices[8] = (float)x2 * fVar3;
  vertices[0xb] = 1.0 / fVar5;
  iVar4 = g_INT_01d25f44;
  vertices[9] = (float)y2 * fVar3;
  vertices[0xc] = (float)iVar4;
  engine_mini3d_cpp_lineListD3DTL_FUN_00513220(vertices,2);
  return;
}
