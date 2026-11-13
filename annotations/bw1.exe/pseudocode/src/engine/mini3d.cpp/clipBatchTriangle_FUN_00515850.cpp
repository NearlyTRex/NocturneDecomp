// Name: engine_mini3d.cpp_clipBatchTriangle_FUN_00515850
// Address: 00515850
// Address Range: [[00515850, 005159bb]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipBatchTriangle_FUN_00515850(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipBatchTriangle_FUN_00515850(float *v0,float *v1,float *v2)

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
      engine_mini3d_cpp_addBatchTriangle_FUN_005155f0(v0,v1,v2);
      return;
    }
    _DAT_01d227e8 = 3;
    pfVar6 = (float *)&DAT_01d22ffc;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar6 = *v0;
      v0 = v0 + 1;
      pfVar6 = pfVar6 + 1;
    }
    _DAT_01d227ec = 0;
    pfVar6 = (float *)&DAT_01d2303c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar6 = *v1;
      v1 = v1 + 1;
      pfVar6 = pfVar6 + 1;
    }
    _DAT_01d227f0 = 0;
    _DAT_01d227f4 = 0;
    _DAT_01d227f8 = 0;
    pfVar6 = (float *)&DAT_01d2307c;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar6 = *v2;
      v2 = v2 + 1;
      pfVar6 = pfVar6 + 1;
    }
    engine_mini3d_cpp_clipAgainstPlane0_FUN_00515080();
    if ((((2 < _DAT_01d227ec) &&
         (engine_mini3d_cpp_clipAgainstPlane1_FUN_005151b0(), 2 < _DAT_01d227f0)) &&
        (engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(), 2 < _DAT_01d227f4)) &&
       (engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(), 2 < _DAT_01d227f8)) {
      engine_mini3d_cpp_clampClippedPolygon_FUN_00515530();
      fVar4 = _DAT_01d224e8;
      fVar3 = _DAT_01d224e4;
      fVar2 = _DAT_01d224dc;
      iVar7 = 0;
      if (0 < _DAT_01d227f8) {
        pfVar6 = (float *)&DAT_01d247fc;
        do {
          fVar1 = pfVar6[1] * _DAT_01d224e0;
          pfVar6[3] = 1.0 / pfVar6[2];
          iVar5 = _DAT_01d227f8;
          iVar7 = iVar7 + 1;
          pfVar6[5] = fVar3 + *pfVar6 * fVar2 * pfVar6[3];
          pfVar6[6] = fVar4 + fVar1 * pfVar6[3];
          pfVar6 = pfVar6 + 0x10;
        } while (iVar7 < iVar5);
      }
      v1_00 = (float *)&DAT_01d2483c;
      pfVar6 = (float *)0x1d2487c;
      for (iVar7 = 0; iVar7 < _DAT_01d227f8 + -2; iVar7 = iVar7 + 1) {
        engine_mini3d_cpp_addBatchTriangle_FUN_005155f0((float *)&DAT_01d247fc,v1_00,pfVar6);
        v1_00 = v1_00 + 0x10;
        pfVar6 = pfVar6 + 0x10;
      }
    }
  }
  return;
}
