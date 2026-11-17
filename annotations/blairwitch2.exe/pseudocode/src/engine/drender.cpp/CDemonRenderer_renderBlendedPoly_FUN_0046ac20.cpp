// Name: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20
// Address: 0046ac20
// Address Range: [[0046ac20, 0046ad64]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403970(&(poly->base).surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < (poly->base).base.count) {
      iVar3 = 0;
      pSVar2 = poly;
      do {
        iVar1 = pSVar2->vertices[0].vertex_index;
        *(int *)((int)g_VertexIndexBuffer + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        g_VertexPreprocessMode = 6;
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_COLOR_FROM_VERTEX);
        if ((this_ptr->skip_uv_extraction == 0) && (iVar4 = 0, 0 < (poly->base).base.count)) {
          iVar3 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)((int)g_VertexIndexBuffer + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2->vertices[0].texture_v;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < (poly->base).base.count);
        }
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    }
  }
  return;
}
