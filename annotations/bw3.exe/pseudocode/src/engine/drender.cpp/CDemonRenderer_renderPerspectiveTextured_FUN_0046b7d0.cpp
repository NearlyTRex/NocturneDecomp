// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0
// Address: 0046b7d0
// Address Range: [[0046b7d0, 0046b84a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    bVar2 = this_ptr->shadow_pass_active == 0;
    if (bVar2) {
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359;
    }
    else {
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    _DAT_01c6e2b4 = (uint)bVar2;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}
