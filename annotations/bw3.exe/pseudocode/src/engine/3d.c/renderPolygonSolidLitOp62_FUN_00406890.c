// Name: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406890
// Address: 00406890
// Address Range: [[00406890, 004069a7]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b4 = 0x13;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(param_1);
    if (DAT_005fba38 < 0xff) {
      _DAT_01c6e2b4 = _DAT_01c6e2b4 | 0x20;
    }
    vertex_count = 0;
    iVar4 = 0;
    _DAT_01c6e2b8 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 4) * 3; iVar2 = iVar2 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_00730418 + iVar4) = iVar1;
      (&DAT_0060b02c)[iVar1 * 0xc] = piVar3[1];
      iVar4 = iVar4 + 4;
      vertex_count = vertex_count + 1;
      *(int *)(&DAT_0060b030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,&DAT_00730418);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
