// Name: engine_drender.cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0048b730
// Address: 0048b730
// Address Range: [[0048b730, 0048b884]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0048b730(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0048b730(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  uint local_14;
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar5 = engine_3d_c_isVisiblePlane_FUN_00403950(&(poly->base).surface_normal), iVar5 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < (poly->base).base.count) {
      iVar3 = 0;
      pSVar3 = poly;
      do {
        iVar1 = pSVar3->vertices[0].vertex_index;
        *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_VertexPreprocessMode = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX | RENDER_COLOR_FROM_VERTEX);
        if ((this_ptr->skip_uv_extraction == 0) && (iVar5 = 0, 0 < (poly->base).base.count)) {
          iVar6 = 0;
          pSVar2 = &poly->base;
          do {
            iVar2 = *(int *)((int)g_VertexIndexBuffer + iVar6);
            this_ptr->vertex_buffer_ptr[iVar2].u = pSVar2[1].base.count;
            this_ptr->vertex_buffer_ptr[iVar2].v = (int)pSVar2[1].surface_normal.A;
            pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < (poly->base).base.count);
        }
      }
      else {
        g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
        g_VertexPreprocessMode = PREPROCESS_NONE;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    }
  }
  return;
}
