// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
// Address: 0048b1e0
// Address Range: [[0048b1e0, 0048b31b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SMRGLPrimitivePoly *pSVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar3 != 0)) {
    if (this_ptr->face_count == 0) {
      if (0 < (poly->base).base.count) {
        iVar5 = 0;
        iVar3 = 0;
        pSVar3 = &poly->base;
        do {
          iVar1 = pSVar3[1].base.type;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar1].v = (int)pSVar3[1].surface_normal.A;
          }
          *(int *)((int)g_VertexIndexBuffer + iVar5) = iVar1;
          pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar3 < (poly->base).base.count);
      }
    }
    else {
      iVar4 = 0;
      if (0 < (poly->base).base.count) {
        iVar2 = 0;
        pSVar1 = poly;
        do {
          *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar1->vertices[0].vertex_index;
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          pSVar1 = (SMRGLPrimitivePoly *)&(pSVar1->base).surface_normal.B;
        } while (iVar4 < (poly->base).base.count);
      }
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_COLOR_FROM_VERTEX);
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
