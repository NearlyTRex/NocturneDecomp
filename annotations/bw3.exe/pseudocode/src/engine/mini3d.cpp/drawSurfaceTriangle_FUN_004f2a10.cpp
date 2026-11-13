// Name: engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f2a10
// Address: 004f2a10
// Address Range: [[004f2a10, 004f2bac]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f2a10(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f2a10(float *v0,float *v1,float *v2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *v1_00;
  
  if (((uint)v0[4] & (uint)v1[4] & (uint)v2[4]) == 0) {
    if ((v0[4] == 0.0 && v1[4] == 0.0) && v2[4] == 0.0) {
      engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0(v0,v1,v2);
      return;
    }
    _DAT_01d7777c = *v0;
    _DAT_01d77780 = v0[1];
    _DAT_01d77784 = v0[2];
    _DAT_01d777bc = *v1;
    _DAT_01d777c0 = v1[1];
    _DAT_01d777c4 = v1[2];
    _DAT_01d777fc = *v2;
    _DAT_01d77800 = v2[1];
    _DAT_01d77804 = v2[2];
    _DAT_01d76f68 = 3;
    _DAT_01d76f6c = 0;
    _DAT_01d76f70 = 0;
    _DAT_01d76f74 = 0;
    _DAT_01d76f78 = 0;
    engine_mini3d_cpp_clipAgainstPlane0_FUN_004f0850();
    if ((((2 < _DAT_01d76f6c) &&
         (engine_mini3d_cpp_clipAgainstPlane1_FUN_004f0980(), 2 < _DAT_01d76f70)) &&
        (engine_mini3d_cpp_clipAgainstPlane2_FUN_004f0ab0(), 2 < _DAT_01d76f74)) &&
       (engine_mini3d_cpp_clipAgainstPlane3_FUN_004f0be0(), 2 < _DAT_01d76f78)) {
      engine_mini3d_cpp_clampClippedPolygon_FUN_004f0d00();
      fVar4 = _DAT_01d76c68;
      fVar3 = _DAT_01d76c64;
      fVar2 = _DAT_01d76c5c;
      iVar7 = 0;
      if (0 < _DAT_01d76f78) {
        pfVar6 = (float *)&DAT_01d78f7c;
        do {
          fVar1 = pfVar6[1] * _DAT_01d76c60;
          pfVar6[3] = 1.0 / pfVar6[2];
          iVar5 = _DAT_01d76f78;
          iVar7 = iVar7 + 1;
          pfVar6[5] = fVar3 + *pfVar6 * fVar2 * pfVar6[3];
          pfVar6[6] = fVar4 + fVar1 * pfVar6[3];
          pfVar6 = pfVar6 + 0x10;
        } while (iVar7 < iVar5);
      }
      v1_00 = (float *)&DAT_01d78fbc;
      pfVar6 = (float *)0x1d78ffc;
      for (iVar7 = 0; iVar7 < _DAT_01d76f78 + -2; iVar7 = iVar7 + 1) {
        engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f27a0((float *)&DAT_01d78f7c,v1_00,pfVar6);
        v1_00 = v1_00 + 0x10;
        pfVar6 = pfVar6 + 0x10;
      }
    }
  }
  return;
}
