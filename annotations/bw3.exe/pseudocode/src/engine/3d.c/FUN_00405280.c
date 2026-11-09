// Name: engine_3d.c_FUN_00405280
// Address: 00405280
// Address Range: [[00405280, 00405353]]
// Convention: unknown
// Signature: int engine_3d_c_FUN_00405280(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_FUN_00405280(int param_1)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar2 = 0;
  uStack_28 = *(uint *)(param_1 + 8);
  uStack_24 = *(uint *)(param_1 + 0xc);
  uStack_20 = *(uint *)(param_1 + 0x10);
  engine_matrix_c_normalizeVector3DFixed_FUN_004e6140(&stack0xffffffd8);
  uStack_28 = uStack_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(param_1 + 8);
  if (iVar1 != 0) {
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
    _DAT_01c6e2b4 = 1;
    _DAT_01c6e2b8 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(param_1);
    engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(param_1 + 4),(int *)(param_1 + 0x18));
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
