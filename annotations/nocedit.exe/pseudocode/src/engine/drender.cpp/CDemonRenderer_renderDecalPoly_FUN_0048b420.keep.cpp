// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0048b420
// Address: 0048b420
// MANUAL RECONSTRUCTION
// Address Range: [[0048b420, 0048b548]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0048b420(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0048b420(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  int iVar3;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar3 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (poly->base).base.count) {
        iVar3 = 0;
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
    }
    else {
      iVar2 = 0;
      if (0 < (poly->base).base.count) {
        do {
          g_VertexIndexBuffer[iVar2] = poly->vertices[iVar2].vertex_index;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (poly->base).base.count);
      }
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST);
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
  }
  return;
}
