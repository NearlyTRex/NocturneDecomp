// Name: engine_mini3d.cpp_clipAndFillPolygon_FUN_005159c0
// Address: 005159c0
// Address Range: [[005159c0, 00515ade]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_005159c0(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_005159c0(float *vertices,int vertex_count)

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
  
  g_INT_01d227e8 = vertex_count;
  iVar6 = 0;
  g_INT_01d227ec = 0;
  g_INT_01d227f0 = 0;
  g_INT_01d227f4 = 0;
  g_INT_01d227f8 = 0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar6 * 0x10;
      iVar6 = iVar6 + 1;
      pfVar7 = vertices;
      pfVar9 = &g_FLOAT_01d22ffc + iVar2;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      vertices = vertices + 0x10;
    } while (iVar6 < vertex_count);
  }
  engine_mini3d_cpp_clipAgainstPlane0_FUN_00515080();
  if ((((2 < g_INT_01d227ec) &&
       (engine_mini3d_cpp_clipAgainstPlane1_FUN_005151b0(), 2 < g_INT_01d227f0)) &&
      (engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(), 2 < g_INT_01d227f4)) &&
     (engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(), 2 < g_INT_01d227f8)) {
    engine_mini3d_cpp_clampClippedPolygon_FUN_00515530();
    fVar5 = g_FLOAT_01d224e8;
    fVar4 = g_FLOAT_01d224e4;
    fVar3 = g_FLOAT_01d224e0;
    iVar6 = 0;
    if (0 < g_INT_01d227f8) {
      pfVar7 = &g_FLOAT_01d247fc;
      do {
        fVar1 = *pfVar7 * g_FLOAT_01d224dc;
        pfVar7[3] = 1.0 / pfVar7[2];
        iVar6 = iVar6 + 1;
        pfVar7[5] = fVar4 + fVar1 * pfVar7[3];
        pfVar7[6] = fVar5 + pfVar7[1] * fVar3 * pfVar7[3];
        pfVar7 = pfVar7 + 0x10;
      } while (iVar6 < g_INT_01d227f8);
    }
    engine_mini3d_cpp_fillPolygon_FUN_005168c0(&g_FLOAT_01d247fc,g_INT_01d227f8);
    return;
  }
  return;
}
