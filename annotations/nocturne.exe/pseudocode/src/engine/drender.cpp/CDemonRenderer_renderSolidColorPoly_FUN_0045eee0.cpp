// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
// Address: 0045eee0
// Address Range: [[0045eee0, 0045ef89]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  SMRGLPrimitivePoly *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      pSVar1 = poly;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01b4d76c + iVar2) = pSVar1->vertices[0].vertex_index;
        iVar3 = iVar3 + 1;
        pSVar1 = (SMRGLPrimitivePoly *)&(pSVar1->base).surface_normal.B;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->face_count == 0) {
      _DAT_01c039a0 = 0xc0;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
  }
  return;
}
