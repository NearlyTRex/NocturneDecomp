// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
// Address: 004696f0
// Address Range: [[004696f0, 00469799]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  SMRGLPrimitivePoly *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(poly + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(poly + 4)) {
      pSVar1 = poly;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01ba5c84 + iVar2) = *(uint *)(pSVar1 + 0x18);
        iVar3 = iVar3 + 1;
        pSVar1 = pSVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (this_ptr->shadow_pass_active == 0) {
      _DAT_01c38b54 = 0xc0;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_0046ec58;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01ba5c84);
  }
  return;
}
