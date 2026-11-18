// Name: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
// Address: 0046b8f0
// Address Range: [[0046b8f0, 0046ba61]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar3 != 0))
    {
      if (this_ptr->shadow_pass_active == 0) {
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
            *(int *)((int)g_VertexIndexBuffer + iVar4) = iVar1;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < (poly->base).base.count);
        }
      }
      else {
        iVar3 = 0;
        if (0 < (poly->base).base.count) {
          iVar4 = 0;
          pSVar2 = poly;
          do {
            *(int *)((int)g_VertexIndexBuffer + iVar4) = pSVar2->vertices[0].vertex_index;
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
          } while (iVar3 < (poly->base).base.count);
        }
      }
      if (this_ptr->shadow_pass_active == 0) {
        if (g_INT_005fba20 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        g_RenderStateFlags.dword = render_flags;
        g_VertexPreprocessMode = 6;
      }
      else {
        g_RenderStateFlags.dword = 0;
        g_VertexPreprocessMode = 0;
        g_ScanlineRenderFunc = (MainScanlineFunc *)core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,(poly->base).base.count,g_VertexIndexBuffer);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
            (this_ptr,&poly->base,render_flags);
  return;
}
