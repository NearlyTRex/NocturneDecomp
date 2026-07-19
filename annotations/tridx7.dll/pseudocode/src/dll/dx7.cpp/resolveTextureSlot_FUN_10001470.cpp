// Name: dll_dx7.cpp_resolveTextureSlot_FUN_10001470
// Address: 10001470
// Address Range: [[10001470, 100014d6]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_resolveTextureSlot_FUN_10001470(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_resolveTextureSlot_FUN_10001470(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  switch(*g_ExternalRendererBridge.texture_dimension) {
  case 0x20:
    iVar1 = dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(g_TextureCache32,texture_info);
    return iVar1;
  default:
    return 0;
  case 0x40:
    iVar1 = dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(g_TextureCache64,texture_info);
    return iVar1;
  case 0x80:
    iVar1 = dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(g_TextureCache128,texture_info);
    return iVar1;
  case 0x100:
    iVar1 = dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(g_TextureCache256,texture_info);
    return iVar1;
  }
}
