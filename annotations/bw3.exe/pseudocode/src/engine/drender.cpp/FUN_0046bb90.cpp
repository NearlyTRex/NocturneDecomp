// Name: engine_drender.cpp_FUN_0046bb90
// Address: 0046bb90
// Address Range: [[0046bb90, 0046bc1f]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046bb90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_0046bb90(void)

{
  int iVar1;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(in_stack_00000008 + 8)),
     iVar1 != 0)) {
    if (in_stack_00000004->shadow_pass_active == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b8 = 6;
      _DAT_01c6e2b4 = 0x2cd;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)(in_stack_00000008 + 0x18));
  }
  return;
}
