// Name: engine_texture.cpp_clearTextureCache_FUN_005dd8e0
// Address: 005dd8e0
// Address Range: [[005dd8e0, 005dd8ef]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_clearTextureCache_FUN_005dd8e0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_clearTextureCache_FUN_005dd8e0(void)

{
  engine_texture_cpp_CTextureCache_free_FUN_005dcb30(g_TextureCacheInstance);
  return;
}
