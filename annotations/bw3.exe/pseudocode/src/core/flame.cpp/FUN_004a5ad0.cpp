// Name: core_flame.cpp_FUN_004a5ad0
// Address: 004a5ad0
// Address Range: [[004a5ad0, 004a5b0a]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_004a5ad0(int param_1)

#include "nocturne.h"

void core_flame_cpp_FUN_004a5ad0(int param_1)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)(&DAT_005fde88 + param_1 * 0xc0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)(param_1 * 0xc0 + 0x5fdf48));
  return;
}
