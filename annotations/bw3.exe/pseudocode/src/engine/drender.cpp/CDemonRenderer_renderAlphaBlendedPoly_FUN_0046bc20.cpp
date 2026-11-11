// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
// Address: 0046bc20
// Address Range: [[0046bc20, 0046bd5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar4 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (0 < (poly->base).base.count) {
        iVar2 = 0;
        iVar4 = 0;
        pSVar3 = poly;
        do {
          iVar1 = pSVar3->vertices[0].vertex_index;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar3->vertices[0].texture_v;
          }
          *(int *)(&DAT_01bdd818 + iVar2) = iVar1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < (poly->base).base.count);
      }
    }
    else {
      iVar4 = 0;
      if (0 < (poly->base).base.count) {
        iVar2 = 0;
        pSVar3 = poly;
        do {
          *(int *)(&DAT_01bdd818 + iVar2) = pSVar3->vertices[0].vertex_index;
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
        } while (iVar4 < (poly->base).base.count);
      }
    }
    if (this_ptr->shadow_pass_active == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b8 = 6;
      _DAT_01c6e2b4 = 0x2cd;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,(poly->base).base.count,(int *)&DAT_01bdd818);
  }
  return;
}
