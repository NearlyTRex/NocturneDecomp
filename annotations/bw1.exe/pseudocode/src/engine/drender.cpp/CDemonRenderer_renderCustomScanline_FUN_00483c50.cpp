// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
// Address: 00483c50
// Address Range: [[00483c50, 00483cd7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

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
  _DAT_01c51d14 = 0xc4;
  _DAT_01c51d18 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(*(int *)(prim + 4),(int *)(prim + 0x18));
  if (DAT_007c7554 < 3) {
    return;
  }
  unkafter_zombie_cpp_FUN_005bf640((SRenderVertex *)&DAT_007c7558,DAT_007c7554,scanline_renderer);
  return;
}
