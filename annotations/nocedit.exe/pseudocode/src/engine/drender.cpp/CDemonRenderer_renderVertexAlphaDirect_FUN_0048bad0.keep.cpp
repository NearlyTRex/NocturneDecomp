// Name: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
// Address: 0048bad0
// MANUAL RECONSTRUCTION
// Address Range: [[0048bad0, 0048bb99]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int *vertex_indices;
  uint uVar2;
  int iVar3;

  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (prim->base).count) {
      vertex_indices = (int *)(prim + 1);
      do {
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[vertex_indices[iVar3]].projected_vertex.screen_x;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (prim->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_ALPHA_FROM_VERTEX | RENDER_COLOR_FROM_VERTEX);
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(prim->base).count,(int *)(prim + 1));
    }
  }
  return;
}
