// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
// Address: 0046d330
// Address Range: [[0046d330, 0046d3b7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0xc) == 0) {
    if (*(int *)(this_ptr + 4) != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(prim + 8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(this_ptr + 4) != 0) {
      return;
    }
  }
  _DAT_01c6e2b4 = 0xc4;
  _DAT_01c6e2b8 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(*(int *)(prim + 4),(int *)(prim + 0x18));
  if (DAT_007e3e88 < 3) {
    return;
  }
  core_asgaya_cpp_FUN_005a23c0(&DAT_007e3e8c,DAT_007e3e88,scanline_renderer);
  return;
}
