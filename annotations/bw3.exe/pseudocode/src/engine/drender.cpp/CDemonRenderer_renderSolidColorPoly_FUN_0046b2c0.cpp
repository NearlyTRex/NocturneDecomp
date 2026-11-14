// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
// Address: 0046b2c0
// Address Range: [[0046b2c0, 0046b369]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  SMRGLPrimitivePoly *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      pSVar1 = poly;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01bdd818 + iVar2) = pSVar1->vertices[0].vertex_index;
        iVar3 = iVar3 + 1;
        pSVar1 = (SMRGLPrimitivePoly *)&(pSVar1->base).surface_normal.B;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->shadow_pass_active == 0) {
      _DAT_01c6e2b4 = 0xc0;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_0046fcc8;
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
