// Name: FUN_00405400
// Address: 00405400
// Address Range: [[00405400, 004054d3]]
// Convention: unknown
// Signature: int * FUN_00405400(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00405400(SMRGLHeaderPrimitive *param_1)

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
  engine_matrix_c_normalizeVector3DFixed_FUN_00508700(&CStack_28,&CStack_1c);
  CStack_28.x = CStack_1c.x;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&param_1->surface_normal);
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
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d14 = 1;
    _DAT_01c51d18 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(param_1);
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((param_1->base).count,(int *)(param_1 + 1));
  }
  return &param_1[1].base.type + (param_1->base).count;
}
