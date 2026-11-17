// Name: engine_texture.cpp_initTextureCache_FUN_005458a0
// Address: 005458a0
// Address Range: [[005458a0, 005458ca]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005458a0(void)

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005458a0(void)

{
  CTextureCache *this_ptr;
  
  this_ptr = operator_new(0xd300c);
  if (this_ptr == (CTextureCache *)0x0) {
    g_TextureCacheInstance = this_ptr;
    return (CTextureCache *)0x0;
  }
  g_TextureCacheInstance = engine_texture_cpp_CTextureCache_ctor_FUN_00544de0(this_ptr,0x400);
  return g_TextureCacheInstance;
}
