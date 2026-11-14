// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
// Address: 0046b240
// Address Range: [[0046b240, 0046b2ba]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal), iVar1 != 0)) {
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
              (this_ptr,(prim->base).count,(int *)(prim + 1));
  }
  return;
}
