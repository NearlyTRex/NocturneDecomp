// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_00469fa0
// Address: 00469fa0
// Address Range: [[00469fa0, 0046a02f]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_00469fa0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_00469fa0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_INT_01c38b58 = 6;
      g_BIT_INTEGER32_01c38b54.dword = 0x2cd;
    }
    else {
      g_BIT_INTEGER32_01c38b54.dword = 0;
      g_INT_01c38b58 = 0;
      g_PTR_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
