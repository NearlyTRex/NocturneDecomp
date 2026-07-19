// Name: dll_dx7.cpp_bindTextureBySize_FUN_100015d0
// Address: 100015d0
// Address Range: [[100015d0, 10001633]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_bindTextureBySize_FUN_100015d0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_bindTextureBySize_FUN_100015d0(SMRGLTextureBasic *texture_info)

{
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(g_TextureCache32,texture_info);
    return;
  case 0x40:
    dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(g_TextureCache64,texture_info);
    return;
  case 0x80:
    dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(g_TextureCache128,texture_info);
    return;
  case 0x100:
    dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(g_TextureCache256,texture_info);
  }
  return;
}
