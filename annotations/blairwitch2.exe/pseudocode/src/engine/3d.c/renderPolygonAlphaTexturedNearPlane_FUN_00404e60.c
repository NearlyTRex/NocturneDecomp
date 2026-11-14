// Name: engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404e60
// Address: 00404e60
// Address Range: [[00404e60, 00404ef6]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonAlphaTexturedNearPlane_FUN_00404e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_3d_c_renderPolygonAlphaTexturedNearPlane_FUN_00404e60(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)(in_stack_00000004 + 8));
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
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b54 = 9;
    _DAT_01c38b58 = 3;
    engine_clipper_c_clipAndRasterize_FUN_00431d90
              (*(int *)(in_stack_00000004 + 4),(int *)(in_stack_00000004 + 0x18));
  }
  return *(int *)(in_stack_00000004 + 4) * 4 + in_stack_00000004 + 0x18;
}
