// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
// Address: 0046be60
// Address Range: [[0046be60, 0046bf88]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar2 != 0)) {
    if (this_ptr->shadow_pass_active == 0) {
      if (0 < (poly->base).base.count) {
        iVar4 = 0;
        iVar2 = 0;
        pSVar3 = poly;
        do {
          iVar1 = pSVar3->vertices[0].vertex_index;
          if (this_ptr->skip_uv_extraction == 0) {
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar3->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar3->vertices[0].texture_v;
          }
          *(int *)(&DAT_01bdd818 + iVar4) = iVar1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < (poly->base).base.count);
      }
    }
    else {
      iVar2 = 0;
      if (0 < (poly->base).base.count) {
        iVar4 = 0;
        pSVar3 = poly;
        do {
          *(int *)(&DAT_01bdd818 + iVar4) = pSVar3->vertices[0].vertex_index;
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          pSVar3 = (SMRGLPrimitivePoly *)&(pSVar3->base).surface_normal.B;
        } while (iVar2 < (poly->base).base.count);
      }
    }
    if (this_ptr->shadow_pass_active == 0) {
      _DAT_01c6e2b4 = 0x41;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d;
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
