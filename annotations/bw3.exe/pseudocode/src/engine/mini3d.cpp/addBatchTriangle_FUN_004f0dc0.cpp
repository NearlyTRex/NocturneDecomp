// Name: engine_mini3d.cpp_addBatchTriangle_FUN_004f0dc0
// Address: 004f0dc0
// Address Range: [[004f0dc0, 004f0f14]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_004f0dc0(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_004f0dc0(float *v0,float *v1,float *v2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  short sVar7;
  float *pfVar8;
  byte bVar9;
  
  bVar9 = 0;
  fVar1 = (v1[6] - v0[6]) * (v2[5] - v1[5]);
  fVar2 = (v1[5] - v0[5]) * (v2[6] - v1[6]);
  if (_DAT_01d76cf8 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  if ((9999 < _DAT_01d7a6c8 + _DAT_01d7a6cc + 3) || (9999 < _DAT_01d7a6d0 + 3)) {
    engine_mini3d_cpp_flushTriangleBatch_FUN_004f0f20();
  }
  pfVar5 = (float *)(_DAT_01d76f60 + (_DAT_01d7a6c8 + _DAT_01d7a6cc) * 0x40);
  pfVar8 = pfVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *v0;
    v0 = v0 + (uint)bVar9 * -2 + 1;
    pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
  }
  pfVar8 = pfVar5 + 0x10;
  for (iVar6 = 0x10; iVar4 = _DAT_01d7a6d0, iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *v1;
    v1 = v1 + (uint)bVar9 * -2 + 1;
    pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
  }
  sVar3 = _DAT_01d7a6cc;
  pfVar8 = pfVar5 + 0x20;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *v2;
    v2 = v2 + (uint)bVar9 * -2 + 1;
    pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
  }
  *(short *)(iVar4 * 2 + 0x1d7a6d4) = sVar3;
  _DAT_01d7a6d0 = _DAT_01d7a6d0 + 3;
  sVar7 = _DAT_01d7a6cc + 2;
  *(short *)(&DAT_01d7a6d0 + _DAT_01d7a6d0 * 2) = sVar3 + 1;
  _DAT_01d7a6cc = _DAT_01d7a6cc + 3;
  *(short *)(_DAT_01d7a6d0 * 2 + 0x1d7a6d2) = sVar7;
  return;
}
