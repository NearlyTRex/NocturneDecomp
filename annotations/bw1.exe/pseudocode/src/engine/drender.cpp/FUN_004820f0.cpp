// Name: engine_drender.cpp_FUN_004820f0
// Address: 004820f0
// Address Range: [[004820f0, 0048216a]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_004820f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_drender_cpp_FUN_004820f0(void)

{
  int iVar1;
  bool bVar2;
  CDemonRenderer *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000004->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(in_stack_00000008 + 8)),
     iVar1 != 0)) {
    bVar2 = in_stack_00000004->shadow_pass_active == 0;
    if (bVar2) {
      _DAT_01c51d18 = 6;
      _DAT_01c4f02c = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9;
    }
    else {
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    }
    _DAT_01c51d14 = (uint)bVar2;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (in_stack_00000004,*(int *)(in_stack_00000008 + 4),(int *)(in_stack_00000008 + 0x18));
  }
  return;
}
