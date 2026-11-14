// Name: engine_mini3d.cpp_clipAndFillPolygon_FUN_004f1190
// Address: 004f1190
// Address Range: [[004f1190, 004f12ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(float *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(float *vertices,int vertex_count)

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
  
  _DAT_01d76f68 = vertex_count;
  iVar5 = 0;
  _DAT_01d76f6c = 0;
  _DAT_01d76f70 = 0;
  _DAT_01d76f74 = 0;
  _DAT_01d76f78 = 0;
  if (0 < vertex_count) {
    do {
      iVar8 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      pfVar6 = vertices;
      pfVar9 = (float *)(&DAT_01d7777c + iVar8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      }
      vertices = vertices + 0x10;
    } while (iVar5 < vertex_count);
  }
  engine_mini3d_cpp_clipAgainstPlane0_FUN_004f0850();
  if ((((2 < _DAT_01d76f6c) &&
       (engine_mini3d_cpp_clipAgainstPlane1_FUN_004f0980(), 2 < _DAT_01d76f70)) &&
      (engine_mini3d_cpp_clipAgainstPlane2_FUN_004f0ab0(), 2 < _DAT_01d76f74)) &&
     (engine_mini3d_cpp_clipAgainstPlane3_FUN_004f0be0(), 2 < _DAT_01d76f78)) {
    engine_mini3d_cpp_clampClippedPolygon_FUN_004f0d00();
    fVar4 = _DAT_01d76c68;
    fVar3 = _DAT_01d76c64;
    fVar2 = _DAT_01d76c60;
    iVar5 = 0;
    if (0 < _DAT_01d76f78) {
      pfVar6 = (float *)&DAT_01d78f7c;
      do {
        fVar1 = *pfVar6 * _DAT_01d76c5c;
        pfVar6[3] = 1.0 / pfVar6[2];
        iVar5 = iVar5 + 1;
        pfVar6[5] = fVar3 + fVar1 * pfVar6[3];
        pfVar6[6] = fVar4 + pfVar6[1] * fVar2 * pfVar6[3];
        pfVar6 = pfVar6 + 0x10;
      } while (iVar5 < _DAT_01d76f78);
    }
    engine_mini3d_cpp_fillPolygon_FUN_004f2090((float *)&DAT_01d78f7c,_DAT_01d76f78);
    return;
  }
  return;
}
