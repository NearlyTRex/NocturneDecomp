// Name: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
// Address: 0046b750
// Address Range: [[0046b750, 0046b7d7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0xc) == 0) {
    if (*(int *)(this_ptr + 4) != 0) {
      return;
    }
  }
  else {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(prim + 8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(this_ptr + 4) != 0) {
      return;
    }
  }
  _DAT_01c38b54 = 0xc4;
  _DAT_01c38b58 = 6;
  core_xform_cpp_transformAndClipGeometry_FUN_00594f40(*(int *)(prim + 4),(int *)(prim + 0x18));
  if (DAT_007bee30 < 3) {
    return;
  }
  unkafter_zombie_cpp_FUN_0059a5d0((SRenderVertex *)&DAT_007bee34,DAT_007bee30,scanline_renderer);
  return;
}
