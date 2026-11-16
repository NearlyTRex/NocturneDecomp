// Name: FUN_004055d0
// Address: 004055d0
// Address Range: [[004055d0, 004056a3]]
// Convention: unknown
// Signature: int * FUN_004055d0(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004055d0(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  bVar2 = 0;
  CStack_28.x = *(int *)&(param_1->surface_normal).A;
  CStack_28.y = *(int *)&(param_1->surface_normal).B;
  CStack_28.z = *(int *)&(param_1->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(&CStack_28,&CStack_1c);
  CStack_28.x = CStack_1c.x;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&param_1->surface_normal);
  if (iVar1 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b54 = 1;
    _DAT_01c38b58 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00403a20(param_1);
    engine_clipper_c_clipAndRasterize_FUN_00431d90((param_1->base).count,(int *)(param_1 + 1));
  }
  return &param_1[1].base.type + (param_1->base).count;
}
