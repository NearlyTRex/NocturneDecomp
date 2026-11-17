// Name: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
// Address: 0046b850
// Address Range: [[0046b850, 0046b8e8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
      }
      else {
        g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      g_INT_01c6e2b8 = 6;
      g_BIT_INTEGER32_01c6e2b4 = (_BIT_INTEGER32)render_flags;
    }
    else {
      g_BIT_INTEGER32_01c6e2b4.dword = 0;
      g_INT_01c6e2b8 = 0;
      g_PTR_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
