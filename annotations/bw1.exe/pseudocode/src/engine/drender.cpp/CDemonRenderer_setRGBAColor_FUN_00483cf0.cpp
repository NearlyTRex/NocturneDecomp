// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
// Address: 00483cf0
// Address Range: [[00483cf0, 00483d6b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
          red_component << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
          green_component << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
  g_INT_01c4f020 = blue_component | red_component << 0x10 | green_component << 8;
  if (g_INT_01c50948 == 0) {
    if (g_INT_0061b4a0 == 0x20) {
      g_INT_01c4f020 = uVar1;
    }
    g_INT_01c4f020 = g_INT_01c4f020 | this_ptr->alpha_mask;
    return;
  }
  if (g_INT_0061b4a0 == 0x20) {
    g_INT_01c4f020 = uVar1;
  }
  return;
}
