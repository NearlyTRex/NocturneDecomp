// Name: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
// Address: 00469c60
// Address Range: [[00469c60, 00469cf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)

{
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(prim + 8), iVar1 != 0)) {
    if (*(int *)(this_ptr + 4) == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      _DAT_01c38b58 = 6;
      _DAT_01c38b54 = render_flags;
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
