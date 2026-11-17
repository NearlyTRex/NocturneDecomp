// Name: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_00469be0
// Address: 00469be0
// Address Range: [[00469be0, 00469c5a]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_00469be0(CDemonRenderer *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_00469be0(CDemonRenderer *this_ptr,int param_2)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)(param_2 + 8)), iVar1 != 0)) {
    g_BIT_INTEGER32_01c38b54.bytes[0] = this_ptr->shadow_pass_active == 0;
    if ((bool)g_BIT_INTEGER32_01c38b54.bytes[0]) {
      g_INT_01c38b58 = 6;
      g_PTR_01c35e6c = core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_004722e9;
    }
    else {
      g_INT_01c38b58 = 0;
      g_PTR_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    g_BIT_INTEGER32_01c38b54.dword._1_3_ = 0;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,*(int *)(param_2 + 4),(int *)(param_2 + 0x18));
  }
  return;
}
