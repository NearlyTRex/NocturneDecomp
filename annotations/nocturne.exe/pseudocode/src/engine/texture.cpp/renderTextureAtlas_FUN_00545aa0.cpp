// Name: engine_texture.cpp_renderTextureAtlas_FUN_00545aa0
// Address: 00545aa0
// Address Range: [[00545aa0, 00545acf]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_00545aa0(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_00545aa0(void)

{
  if (g_UseExternalRenderer == 0) {
    return;
  }
  wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
  engine_texture_cpp_CTextureCache_renderAllTextures_FUN_00545700(g_TextureCacheInstance);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  return;
}
