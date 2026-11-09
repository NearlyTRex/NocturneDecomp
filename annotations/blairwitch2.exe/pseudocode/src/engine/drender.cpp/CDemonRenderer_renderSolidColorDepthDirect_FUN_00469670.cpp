// Name: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
// Address: 00469670
// Address Range: [[00469670, 004696ea]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(prim + 8), iVar1 != 0)) {
    if (*(int *)(this_ptr + 4) == 0) {
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
              (this_ptr,*(int *)(prim + 4),(int *)(prim + 0x18));
  }
  return;
}
