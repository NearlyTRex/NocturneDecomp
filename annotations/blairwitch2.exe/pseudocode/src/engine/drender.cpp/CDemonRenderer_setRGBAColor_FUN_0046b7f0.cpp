// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
// Address: 0046b7f0
// Address Range: [[0046b7f0, 0046b86b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (g_BlueBitPosition.bytes[0] & 0x1f) |
          red_component << (g_RedBitPosition.bytes[0] & 0x1f) |
          green_component << (g_GreenBitPosition.bytes[0] & 0x1f);
  g_INT_01c35e60 = blue_component | red_component << 0x10 | green_component << 8;
  if (g_INT_01c37788 == 0) {
    if (g_INT_006141c0 == 0x20) {
      g_INT_01c35e60 = uVar1;
    }
    g_INT_01c35e60 = g_INT_01c35e60 | this_ptr->alpha_mask;
    return;
  }
  if (g_INT_006141c0 == 0x20) {
    g_INT_01c35e60 = uVar1;
  }
  return;
}
