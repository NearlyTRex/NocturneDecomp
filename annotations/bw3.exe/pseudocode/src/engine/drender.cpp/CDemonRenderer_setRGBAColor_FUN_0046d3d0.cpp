// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
// Address: 0046d3d0
// Address Range: [[0046d3d0, 0046d44b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
          red_component << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
          green_component << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
  g_INT_01c6b5c0 = blue_component | red_component << 0x10 | green_component << 8;
  if (g_INT_01c6cee8 == 0) {
    if (g_INT_005fba20 == 0x20) {
      g_INT_01c6b5c0 = uVar1;
    }
    g_INT_01c6b5c0 = g_INT_01c6b5c0 | this_ptr->alpha_mask;
    return;
  }
  if (g_INT_005fba20 == 0x20) {
    g_INT_01c6b5c0 = uVar1;
  }
  return;
}
