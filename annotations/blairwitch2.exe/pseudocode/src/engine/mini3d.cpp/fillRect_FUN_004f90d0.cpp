// Name: engine_mini3d.cpp_fillRect_FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f9320]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillRect_FUN_004f90d0(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillRect_FUN_004f90d0(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *vertices;
  float fVar7;
  double dVar8;
  int unaff_retaddr;
  
  if ((float)x1 < g_FLOAT_01d0986c) {
    dVar8 = round((double)g_FLOAT_01d0986c);
    unaff_retaddr = (int)ROUND(dVar8);
  }
  if (g_FLOAT_01d09874 < (float)y1) {
    dVar8 = round((double)g_FLOAT_01d09874);
    x1 = (int)ROUND(dVar8);
  }
  if (unaff_retaddr <= y1) {
    if ((float)x1 < g_FLOAT_01d09870) {
      dVar8 = round((double)g_FLOAT_01d09870);
      unaff_retaddr = (int)ROUND(dVar8);
    }
    if (g_FLOAT_01d09878 < (float)x2) {
      dVar8 = round((double)g_FLOAT_01d09878);
      y1 = (int)ROUND(dVar8);
    }
    if (x1 <= x2) {
      fVar7 = engine_mini3d_cpp_nextDepth2D_FUN_004f93d0();
      vertices = g_FLOAT_PTR_01d12114;
      fVar1 = 1.0 / fVar7;
      g_FLOAT_PTR_01d12114[5] = 0.0;
      vertices[6] = 0.5;
      fVar4 = -0.5f;
      fVar2 = (float)unaff_retaddr + -0.5f;
      vertices[7] = 0.5;
      *vertices = fVar2;
      vertices[0xd] = 0.0;
      vertices[0xe] = 0.5;
      vertices[0xf] = 0.5;
      vertices[1] = (float)x1 + fVar4;
      vertices[2] = fVar7;
      vertices[3] = fVar1;
      vertices[4] = (float)g_INT_01d0d2e4;
      vertices[0x15] = 0.0;
      vertices[0x16] = 0.5;
      fVar5 = 0.5f;
      fVar3 = (float)y1 + 0.5f;
      vertices[0x17] = 0.5;
      vertices[8] = fVar3;
      vertices[9] = (float)x1 + fVar4;
      vertices[10] = fVar7;
      vertices[0xb] = fVar1;
      vertices[0xc] = (float)g_INT_01d0d2e4;
      vertices[0x10] = fVar3;
      vertices[0x1d] = 0.0;
      vertices[0x1e] = 0.5;
      vertices[0x1f] = 0.5;
      vertices[0x11] = (float)x2 + fVar5;
      vertices[0x12] = fVar7;
      vertices[0x13] = fVar1;
      vertices[0x14] = (float)g_INT_01d0d2e4;
      vertices[0x18] = fVar2;
      vertices[0x19] = (float)x2 + fVar5;
      vertices[0x1a] = fVar7;
      vertices[0x1b] = fVar1;
      vertices[0x1c] = (float)g_INT_01d0d2e4;
      engine_mini3d_cpp_useTexture_FUN_004f3380(0x618100);
      iVar6 = g_INT_01d09858;
      g_INT_01d09858 = 0;
      engine_mini3d_cpp_polyListD3DTL_FUN_004f40a0(vertices,4,&g_USHORT_006180f0,2);
      g_INT_01d09858 = iVar6;
      return;
    }
  }
  return;
}
