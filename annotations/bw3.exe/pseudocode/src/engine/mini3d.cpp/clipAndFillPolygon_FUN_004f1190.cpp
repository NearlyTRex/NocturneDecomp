// Name: engine_mini3d.cpp_clipAndFillPolygon_FUN_004f1190
// Address: 004f1190
// Address Range: [[004f1190, 004f12ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(float *vertices,int vertex_count)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  
  g_INT_01d76f68 = vertex_count;
  iVar6 = 0;
  g_INT_01d76f6c = 0;
  g_INT_01d76f70 = 0;
  g_INT_01d76f74 = 0;
  g_INT_01d76f78 = 0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar6 * 0x10;
      iVar6 = iVar6 + 1;
      pfVar7 = vertices;
      pfVar9 = &g_FLOAT_01d7777c + iVar2;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      vertices = vertices + 0x10;
    } while (iVar6 < vertex_count);
  }
  engine_mini3d_cpp_clipAgainstPlane0_FUN_004f0850();
  if ((((2 < g_INT_01d76f6c) &&
       (engine_mini3d_cpp_clipAgainstPlane1_FUN_004f0980(), 2 < g_INT_01d76f70)) &&
      (engine_mini3d_cpp_clipAgainstPlane2_FUN_004f0ab0(), 2 < g_INT_01d76f74)) &&
     (engine_mini3d_cpp_clipAgainstPlane3_FUN_004f0be0(), 2 < g_INT_01d76f78)) {
    engine_mini3d_cpp_clampClippedPolygon_FUN_004f0d00();
    fVar5 = g_FLOAT_01d76c68;
    fVar4 = g_FLOAT_01d76c64;
    fVar3 = g_FLOAT_01d76c60;
    iVar6 = 0;
    if (0 < g_INT_01d76f78) {
      pfVar7 = &g_FLOAT_01d78f7c;
      do {
        fVar1 = *pfVar7 * g_FLOAT_01d76c5c;
        pfVar7[3] = 1.0 / pfVar7[2];
        iVar6 = iVar6 + 1;
        pfVar7[5] = fVar4 + fVar1 * pfVar7[3];
        pfVar7[6] = fVar5 + pfVar7[1] * fVar3 * pfVar7[3];
        pfVar7 = pfVar7 + 0x10;
      } while (iVar6 < g_INT_01d76f78);
    }
    engine_mini3d_cpp_fillPolygon_FUN_004f2090(&g_FLOAT_01d78f7c,g_INT_01d76f78);
    return;
  }
  return;
}
