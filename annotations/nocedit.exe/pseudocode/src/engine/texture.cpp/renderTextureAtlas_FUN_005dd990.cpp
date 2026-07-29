// Name: engine_texture.cpp_renderTextureAtlas_FUN_005dd990
// Address: 005dd990
// Address Range: [[005dd990, 005dd9bf]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005dd990(void)

#include "nocturne.h"

void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005dd990(void)

{
  if (g_UseExternalRenderer == 0) {
    return;
  }
  wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
  engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(g_TextureCacheInstance);
  engine_special_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
