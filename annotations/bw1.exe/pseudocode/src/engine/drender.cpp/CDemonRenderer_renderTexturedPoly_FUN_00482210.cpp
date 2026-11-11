// Name: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
// Address: 00482210
// Address Range: [[00482210, 00482381]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

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
            *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
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
            *(int *)(&DAT_01bc1240 + iVar4) = pSVar2->vertices[0].vertex_index;
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
          } while (iVar3 < (poly->base).base.count);
        }
      }
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
        }
        else {
          _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        _DAT_01c51d14 = render_flags;
        _DAT_01c51d18 = 6;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (this_ptr,(poly->base).base.count,(int *)&DAT_01bc1240);
    }
    return;
  }
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20
            (this_ptr,&poly->base,render_flags);
  return;
}
