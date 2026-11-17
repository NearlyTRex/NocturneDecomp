// Name: core_flame.cpp_preloadFlameTextures_FUN_004a5ad0
// Address: 004a5ad0
// Address Range: [[004a5ad0, 004a5b0a]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_preloadFlameTextures_FUN_004a5ad0(int flame_type)

#include "nocturne.h"

void __cdecl core_flame_cpp_preloadFlameTextures_FUN_004a5ad0(int flame_type)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)(&DAT_005fde88 + flame_type * 0xc0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)(flame_type * 0xc0 + 0x5fdf48));
  return;
}
