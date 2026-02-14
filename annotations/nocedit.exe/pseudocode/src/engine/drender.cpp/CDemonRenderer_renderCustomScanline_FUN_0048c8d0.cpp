// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
// Address: 0048c8d0
// Address Range: [[0048c8d0, 0048c957]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,RenderScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,RenderScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (this_ptr->plane_culling_enabled == 0) {
    if (this_ptr->face_count != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
    if (iVar1 == 0) {
      return;
    }
    if (this_ptr->face_count != 0) {
      return;
    }
  }
  g_RenderStateFlags.dword = RENDER_TEXTURE_COMPLEX;
  g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
  core_xform_cpp_transformAndClipGeometry_FUN_005f8550((prim->base).count,(int *)(prim + 1));
  if (g_ClippedVertexCount < 3) {
    return;
  }
  engine_3d_c_rasterizePolygon_FUN_005fd4e0
            (g_ClippedVertexBuffer,g_ClippedVertexCount,scanline_renderer);
  return;
}
