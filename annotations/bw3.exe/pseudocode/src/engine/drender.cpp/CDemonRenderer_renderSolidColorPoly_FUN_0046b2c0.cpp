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
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(poly + 4)) {
      pSVar1 = poly;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01bdd818 + iVar2) = *(uint *)(pSVar1 + 0x18);
        iVar3 = iVar3 + 1;
        pSVar1 = pSVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(poly + 4));
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
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
  }
  return;
}
