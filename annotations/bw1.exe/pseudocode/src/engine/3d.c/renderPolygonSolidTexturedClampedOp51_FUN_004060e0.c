// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0
// Address: 004060e0
// Address Range: [[004060e0, 00406272]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int vertex_count;
  
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    vertex_count = 0;
    _DAT_01c51d14 = 0xc3;
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    _DAT_01c51d18 = 1;
    iVar1 = 0;
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 4) * 3; iVar5 = iVar5 + 3) {
      *(int *)((int)&DAT_00713a98 + iVar1) = *piVar4;
      iVar2 = piVar4[1];
      iVar3 = piVar4[2];
      if (DAT_0061b4a8 < 0x41) {
        if (iVar2 < 0x40000) {
          iVar2 = 0x40000;
        }
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (0xfbffff < iVar2) {
          iVar2 = 0xfbffff;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
      }
      else {
        if (iVar2 < 0x10000) {
          iVar2 = 0x10000;
        }
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (0xfeffff < iVar2) {
          iVar2 = 0xfeffff;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
      }
      (&DAT_0062902c)[*piVar4 * 0xc] = iVar2;
      iVar2 = *piVar4;
      iVar1 = iVar1 + 4;
      vertex_count = vertex_count + 1;
      piVar4 = piVar4 + 3;
      *(int *)(&DAT_00629030 + iVar2 * 0x30) = iVar3;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0(vertex_count,&DAT_00713a98);
  }
  return *(int *)(param_1 + 4) * 0xc + param_1 + 0x18;
}
