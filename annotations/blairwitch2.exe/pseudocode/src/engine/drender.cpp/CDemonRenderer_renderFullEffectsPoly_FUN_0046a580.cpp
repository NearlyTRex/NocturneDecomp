// Name: engine_drender.cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0046a580
// Address: 0046a580
// Address Range: [[0046a580, 0046a6e3]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0046a580(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0046a580(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *pSVar4;
  uint uStack_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(&(poly->base).surface_normal), iVar3 != 0)) {
    uStack_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      iVar2 = 0;
      pSVar4 = poly;
      do {
        iVar1 = pSVar4->vertices[0].vertex_index;
        *(int *)(&DAT_01ba5c84 + iVar2) = iVar1;
        iVar2 = iVar2 + 4;
        uStack_14 = uStack_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar4 = (SMRGLPrimitivePoly *)&(pSVar4->base).surface_normal.B;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (poly->base).base.count);
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
        }
        else {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        _DAT_01c38b58 = 6;
        _DAT_01c38b54 = 999;
        if ((this_ptr->skip_uv_extraction == 0) && (iVar3 = 0, 0 < (poly->base).base.count)) {
          iVar2 = 0;
          pSVar4 = poly;
          do {
            iVar1 = *(int *)(&DAT_01ba5c84 + iVar2);
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar4->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar4->vertices[0].texture_v;
            pSVar4 = (SMRGLPrimitivePoly *)&(pSVar4->base).surface_normal.B;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < (poly->base).base.count);
        }
      }
      else {
        _DAT_01c38b54 = 1;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (this_ptr,(poly->base).base.count,(int *)&DAT_01ba5c84);
    }
  }
  return;
}
