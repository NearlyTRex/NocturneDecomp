// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
// Address: 0046d3d0
// Address Range: [[0046d3d0, 0046d44b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (DAT_01c6af8c & 0x1f) |
          red_component << (DAT_01c6af74 & 0x1f) | green_component << (DAT_01c6af80 & 0x1f);
  _DAT_01c6b5c0 = blue_component | red_component << 0x10 | green_component << 8;
  if (_DAT_01c6cee8 == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5c0 = uVar1;
    }
    _DAT_01c6b5c0 = _DAT_01c6b5c0 | *(uint *)(this_ptr + 0x14);
    return;
  }
  if (DAT_005fba20 == 0x20) {
    _DAT_01c6b5c0 = uVar1;
  }
  return;
}
