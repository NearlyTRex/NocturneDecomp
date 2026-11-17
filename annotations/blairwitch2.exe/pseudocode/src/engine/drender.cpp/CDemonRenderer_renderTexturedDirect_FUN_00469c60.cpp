// Name: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
// Address: 00469c60
// Address Range: [[00469c60, 00469cf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal), iVar1 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_VertexPreprocessMode = 6;
      g_RenderStateFlags = (_BIT_INTEGER32)render_flags;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
