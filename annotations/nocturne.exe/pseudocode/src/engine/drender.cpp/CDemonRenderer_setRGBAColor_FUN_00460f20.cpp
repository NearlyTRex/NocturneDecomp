// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
// Address: 00460f20
// Address Range: [[00460f20, 00460f9b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << (g_BlueBitPosition.bytes[0] & 0x1f) |
          red_component << (g_RedBitPosition.bytes[0] & 0x1f) |
          green_component << (g_GreenBitPosition.bytes[0] & 0x1f);
  g_ActiveRenderColor = blue_component | red_component << 0x10 | green_component << 8;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ActiveRenderColor = uVar1;
    }
    g_ActiveRenderColor = g_ActiveRenderColor | this_ptr->alpha_mask;
    return;
  }
  if (g_BitsPerPixel == 0x20) {
    g_ActiveRenderColor = uVar1;
  }
  return;
}
