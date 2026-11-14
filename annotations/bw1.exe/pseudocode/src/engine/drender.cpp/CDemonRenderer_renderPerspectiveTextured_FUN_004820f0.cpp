// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0
// Address: 004820f0
// Address Range: [[004820f0, 0048216a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0(CDemonRenderer *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_004820f0(CDemonRenderer *this_ptr,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    bVar2 = this_ptr->shadow_pass_active == 0;
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
              (this_ptr,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}
