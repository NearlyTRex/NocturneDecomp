// Name: engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f8330
// Address: 004f8330
// Address Range: [[004f8330, 004f84cc]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f8330(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f8330(float *v0,float *v1,float *v2)

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
      engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110(v0,v1,v2);
      return;
    }
    _DAT_01d0a398 = *v0;
    _DAT_01d0a39c = v0[1];
    _DAT_01d0a3a0 = v0[2];
    _DAT_01d0a3d8 = *v1;
    _DAT_01d0a3dc = v1[1];
    _DAT_01d0a3e0 = v1[2];
    _DAT_01d0a418 = *v2;
    _DAT_01d0a41c = v2[1];
    _DAT_01d0a420 = v2[2];
    _DAT_01d09b84 = 3;
    _DAT_01d09b88 = 0;
    _DAT_01d09b8c = 0;
    _DAT_01d09b90 = 0;
    _DAT_01d09b94 = 0;
    engine_mini3d_cpp_clipAgainstPlane0_FUN_004f6300();
    if ((((2 < _DAT_01d09b88) &&
         (engine_mini3d_cpp_clipAgainstPlane1_FUN_004f6430(), 2 < _DAT_01d09b8c)) &&
        (engine_mini3d_cpp_clipAgainstPlane2_FUN_004f6560(), 2 < _DAT_01d09b90)) &&
       (engine_mini3d_cpp_clipAgainstPlane3_FUN_004f6690(), 2 < _DAT_01d09b94)) {
      engine_mini3d_cpp_clampClippedPolygon_FUN_004f67b0();
      fVar4 = _DAT_01d09888;
      fVar3 = _DAT_01d09884;
      fVar2 = _DAT_01d0987c;
      iVar7 = 0;
      if (0 < _DAT_01d09b94) {
        pfVar6 = (float *)&DAT_01d0bb98;
        do {
          fVar1 = pfVar6[1] * _DAT_01d09880;
          pfVar6[3] = 1.0 / pfVar6[2];
          iVar5 = _DAT_01d09b94;
          iVar7 = iVar7 + 1;
          pfVar6[5] = fVar3 + *pfVar6 * fVar2 * pfVar6[3];
          pfVar6[6] = fVar4 + fVar1 * pfVar6[3];
          pfVar6 = pfVar6 + 0x10;
        } while (iVar7 < iVar5);
      }
      v1_00 = (float *)&DAT_01d0bbd8;
      pfVar6 = (float *)0x1d0bc18;
      for (iVar7 = 0; iVar7 < _DAT_01d09b94 + -2; iVar7 = iVar7 + 1) {
        engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110((float *)&DAT_01d0bb98,v1_00,pfVar6);
        v1_00 = v1_00 + 0x10;
        pfVar6 = pfVar6 + 0x10;
      }
    }
  }
  return;
}
