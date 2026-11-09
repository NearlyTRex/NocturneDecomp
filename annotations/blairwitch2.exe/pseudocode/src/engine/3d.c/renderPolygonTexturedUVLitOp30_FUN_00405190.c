// Name: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00405190
// Address: 00405190
// Address Range: [[00405190, 00405283]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00405190(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00405190(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b54 = 1;
    _DAT_01c38b58 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_00403a20(param_1);
    vertex_count = 0;
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_0070ca98 + iVar2) = iVar1;
      (&DAT_0062202c)[iVar1 * 0xc] = piVar3[1];
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      *(int *)(&DAT_00622030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90(vertex_count,&DAT_0070ca98);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
