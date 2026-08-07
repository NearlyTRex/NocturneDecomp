// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
// Address: 0045fb00
// Address Range: [[0045fb00, 0045fbf9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      iVar4 = 0;
      pSVar2 = poly;
      do {
        iVar1 = pSVar2->vertices[0].vertex_index;
        if (this_ptr->skip_uv_extraction == 0) {
          this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2->vertices[0].texture_u;
          this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2->vertices[0].texture_v;
        }
        *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
        pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
      }
      g_VertexPreprocessMode = 6;
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    else {
      g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
      g_VertexPreprocessMode = 0;
      g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
  }
  return;
}
