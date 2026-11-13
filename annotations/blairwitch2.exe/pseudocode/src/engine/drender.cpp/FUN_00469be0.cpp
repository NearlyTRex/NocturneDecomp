// Name: engine_drender.cpp_FUN_00469be0
// Address: 00469be0
// Address Range: [[00469be0, 00469c5a]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00469be0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_00469be0(void)

{
  int iVar1;
  bool bVar2;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)(in_stack_00000008 + 8)),
     iVar1 != 0)) {
    bVar2 = in_stack_00000004->shadow_pass_active == 0;
    if (bVar2) {
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9;
    }
    else {
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    _DAT_01c38b54 = (uint)bVar2;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)(in_stack_00000008 + 0x18));
  }
  return;
}
