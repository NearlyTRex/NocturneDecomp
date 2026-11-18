// Name: engine_mini3d.cpp_fillRect_FUN_00518010
// Address: 00518010
// Address Range: [[00518010, 00518274]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillRect_FUN_00518010(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillRect_FUN_00518010(int x1,int y1,int x2,int y2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float *vertices;
  float fVar8;
  double dVar9;
  int unaff_retaddr;
  
  if ((float)x1 < g_FLOAT_01d224cc) {
    dVar9 = round((double)g_FLOAT_01d224cc);
    unaff_retaddr = (int)ROUND(dVar9);
  }
  if (g_FLOAT_01d224d4 < (float)y1) {
    dVar9 = round((double)g_FLOAT_01d224d4);
    x1 = (int)ROUND(dVar9);
  }
  if (unaff_retaddr <= y1) {
    if ((float)x1 < g_FLOAT_01d224d0) {
      dVar9 = round((double)g_FLOAT_01d224d0);
      unaff_retaddr = (int)ROUND(dVar9);
    }
    if (g_FLOAT_01d224d8 < (float)x2) {
      dVar9 = round((double)g_FLOAT_01d224d8);
      y1 = (int)ROUND(dVar9);
    }
    if (x1 <= x2) {
      fVar8 = engine_mini3d_cpp_nextDepth2D_FUN_00518320();
      vertices = g_FLOAT_PTR_01d2ad74;
      fVar7 = g_FLOAT_01d22544;
      fVar4 = -0.5f;
      fVar1 = 1.0 / fVar8;
      fVar5 = (float)unaff_retaddr * g_FLOAT_01d22544 + -0.5f;
      *g_FLOAT_PTR_01d2ad74 = fVar5;
      vertices[5] = 0.0;
      vertices[6] = 0.5;
      vertices[7] = 0.5;
      fVar4 = (float)x1 * fVar7 + fVar4;
      vertices[0xd] = 0.0;
      vertices[1] = fVar4;
      vertices[2] = fVar8;
      vertices[3] = fVar1;
      vertices[4] = (float)g_INT_01d25f44;
      vertices[0xe] = 0.5;
      vertices[0xf] = 0.5;
      vertices[0x15] = 0.0;
      fVar2 = 0.5f;
      fVar3 = (float)y1 * fVar7 + 0.5f;
      vertices[0x16] = 0.5;
      vertices[8] = fVar3;
      vertices[9] = fVar4;
      vertices[10] = fVar8;
      vertices[0xb] = fVar1;
      vertices[0xc] = (float)g_INT_01d25f44;
      vertices[0x10] = fVar3;
      vertices[0x17] = 0.5;
      vertices[0x1d] = 0.0;
      vertices[0x1e] = 0.5;
      fVar2 = fVar2 + (float)x2 * fVar7;
      vertices[0x1f] = 0.5;
      vertices[0x11] = fVar2;
      vertices[0x12] = fVar8;
      vertices[0x13] = fVar1;
      vertices[0x14] = (float)g_INT_01d25f44;
      vertices[0x18] = fVar5;
      vertices[0x19] = fVar2;
      vertices[0x1a] = fVar8;
      vertices[0x1b] = fVar1;
      vertices[0x1c] = (float)g_INT_01d25f44;
      engine_mini3d_cpp_useTexture_FUN_005121b0(0x61f5e8);
      iVar6 = g_INT_01d224b8;
      g_INT_01d224b8 = 0;
      engine_mini3d_cpp_polyListD3DTL_FUN_00512de0(vertices,4,&g_USHORT_0061f5d8,2);
      g_INT_01d224b8 = iVar6;
      return;
    }
  }
  return;
}
