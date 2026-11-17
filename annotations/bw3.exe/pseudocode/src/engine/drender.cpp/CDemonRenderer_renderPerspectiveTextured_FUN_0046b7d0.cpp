// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0
// Address: 0046b7d0
// Address Range: [[0046b7d0, 0046b84a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int param_2)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    g_BIT_INTEGER32_01c6e2b4.bytes[0] = this_ptr->shadow_pass_active == 0;
    if ((bool)g_BIT_INTEGER32_01c6e2b4.bytes[0]) {
      g_INT_01c6e2b8 = 6;
      g_PTR_01c6b5cc = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359;
    }
    else {
      g_INT_01c6e2b8 = 0;
      g_PTR_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    g_BIT_INTEGER32_01c6e2b4.dword._1_3_ = 0;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}
