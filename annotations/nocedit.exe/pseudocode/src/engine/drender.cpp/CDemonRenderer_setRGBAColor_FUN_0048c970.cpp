// Name: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
// Address: 0048c970
// Address Range: [[0048c970, 0048c9eb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 (CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
          (CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)

{
  uint uVar1;
  
  uVar1 = blue_component << ((byte)g_BlueBitPosition & 0x1f) |
          red_component << ((byte)g_RedBitPosition & 0x1f) |
          green_component << ((byte)g_GreenBitPosition & 0x1f);
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
