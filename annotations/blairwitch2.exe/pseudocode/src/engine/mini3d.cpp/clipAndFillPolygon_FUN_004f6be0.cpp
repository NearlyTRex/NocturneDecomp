// Name: engine_mini3d.cpp_clipAndFillPolygon_FUN_004f6be0
// Address: 004f6be0
// Address Range: [[004f6be0, 004f6cfe]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f6be0(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f6be0(float *vertices,int vertex_count)

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
  
  g_INT_01d09b84 = vertex_count;
  iVar6 = 0;
  g_INT_01d09b88 = 0;
  g_INT_01d09b8c = 0;
  g_INT_01d09b90 = 0;
  g_INT_01d09b94 = 0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar6 * 0x10;
      iVar6 = iVar6 + 1;
      pfVar7 = vertices;
      pfVar9 = &g_FLOAT_01d0a398 + iVar2;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      vertices = vertices + 0x10;
    } while (iVar6 < vertex_count);
  }
  engine_mini3d_cpp_clipAgainstPlane0_FUN_004f6300();
  if ((((2 < g_INT_01d09b88) &&
       (engine_mini3d_cpp_clipAgainstPlane1_FUN_004f6430(), 2 < g_INT_01d09b8c)) &&
      (engine_mini3d_cpp_clipAgainstPlane2_FUN_004f6560(), 2 < g_INT_01d09b90)) &&
     (engine_mini3d_cpp_clipAgainstPlane3_FUN_004f6690(), 2 < g_INT_01d09b94)) {
    engine_mini3d_cpp_clampClippedPolygon_FUN_004f67b0();
    fVar5 = g_FLOAT_01d09888;
    fVar4 = g_FLOAT_01d09884;
    fVar3 = g_FLOAT_01d09880;
    iVar6 = 0;
    if (0 < g_INT_01d09b94) {
      pfVar7 = &g_FLOAT_01d0bb98;
      do {
        fVar1 = *pfVar7 * g_FLOAT_01d0987c;
        pfVar7[3] = 1.0 / pfVar7[2];
        iVar6 = iVar6 + 1;
        pfVar7[5] = fVar4 + fVar1 * pfVar7[3];
        pfVar7[6] = fVar5 + pfVar7[1] * fVar3 * pfVar7[3];
        pfVar7 = pfVar7 + 0x10;
      } while (iVar6 < g_INT_01d09b94);
    }
    engine_mini3d_cpp_fillPolygon_FUN_004f7a50(&g_FLOAT_01d0bb98,g_INT_01d09b94);
    return;
  }
  return;
}
