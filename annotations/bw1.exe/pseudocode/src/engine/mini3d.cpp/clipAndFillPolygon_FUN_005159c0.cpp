// Name: engine_mini3d.cpp_clipAndFillPolygon_FUN_005159c0
// Address: 005159c0
// Address Range: [[005159c0, 00515ade]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_005159c0(float *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_005159c0(float *vertices,int vertex_count)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  
  _DAT_01d227e8 = vertex_count;
  iVar5 = 0;
  _DAT_01d227ec = 0;
  _DAT_01d227f0 = 0;
  _DAT_01d227f4 = 0;
  _DAT_01d227f8 = 0;
  if (0 < vertex_count) {
    do {
      iVar8 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      pfVar6 = vertices;
      pfVar9 = (float *)(&DAT_01d22ffc + iVar8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      }
      vertices = vertices + 0x10;
    } while (iVar5 < vertex_count);
  }
  engine_mini3d_cpp_clipAgainstPlane0_FUN_00515080();
  if ((((2 < _DAT_01d227ec) &&
       (engine_mini3d_cpp_clipAgainstPlane1_FUN_005151b0(), 2 < _DAT_01d227f0)) &&
      (engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(), 2 < _DAT_01d227f4)) &&
     (engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(), 2 < _DAT_01d227f8)) {
    engine_mini3d_cpp_clampClippedPolygon_FUN_00515530();
    fVar4 = _DAT_01d224e8;
    fVar3 = _DAT_01d224e4;
    fVar2 = _DAT_01d224e0;
    iVar5 = 0;
    if (0 < _DAT_01d227f8) {
      pfVar6 = (float *)&DAT_01d247fc;
      do {
        fVar1 = *pfVar6 * _DAT_01d224dc;
        pfVar6[3] = 1.0 / pfVar6[2];
        iVar5 = iVar5 + 1;
        pfVar6[5] = fVar3 + fVar1 * pfVar6[3];
        pfVar6[6] = fVar4 + pfVar6[1] * fVar2 * pfVar6[3];
        pfVar6 = pfVar6 + 0x10;
      } while (iVar5 < _DAT_01d227f8);
    }
    engine_mini3d_cpp_fillPolygon_FUN_005168c0((float *)&DAT_01d247fc,_DAT_01d227f8);
    return;
  }
  return;
}
