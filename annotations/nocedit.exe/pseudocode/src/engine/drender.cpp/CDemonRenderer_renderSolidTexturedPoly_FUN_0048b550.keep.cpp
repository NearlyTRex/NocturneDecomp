// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550
// Address: 0048b550
// MANUAL RECONSTRUCTION
// Address Range: [[0048b550, 0048b649]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0048b550(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  int iVar3;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar2 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      do {
        iVar1 = poly->vertices[iVar3].vertex_index;
        if (this_ptr->skip_uv_extraction == 0) {
          this_ptr->vertex_buffer_ptr[iVar1].u = poly->vertices[iVar3].texture_u;
          this_ptr->vertex_buffer_ptr[iVar1].v = poly->vertices[iVar3].texture_v;
        }
        g_VertexIndexBuffer[iVar3] = iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    else {
      g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
      g_VertexPreprocessMode = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
  }
  return;
}
