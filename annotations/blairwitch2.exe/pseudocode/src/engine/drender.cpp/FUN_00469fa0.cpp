// Name: engine_drender.cpp_FUN_00469fa0
// Address: 00469fa0
// Address Range: [[00469fa0, 0046a02f]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00469fa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_00469fa0(void)

{
  int iVar1;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)(in_stack_00000008 + 8)),
     iVar1 != 0)) {
    if (in_stack_00000004->shadow_pass_active == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      _DAT_01c38b58 = 6;
      _DAT_01c38b54 = 0x2cd;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)(in_stack_00000008 + 0x18));
  }
  return;
}
