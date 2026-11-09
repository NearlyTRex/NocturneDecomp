// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
// Address: 00481b80
// Address Range: [[00481b80, 00481bfa]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(prim + 8), iVar1 != 0)) {
    if (*(int *)(this_ptr + 4) == 0) {
      _DAT_01c51d14 = 0xc0;
      _DAT_01c51d18 = 6;
      _DAT_01c4f02c = core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_00487148;
    }
    else {
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
              (this_ptr,*(int *)(prim + 4),(int *)(prim + 0x18));
  }
  return;
}
