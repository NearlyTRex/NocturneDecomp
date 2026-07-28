// Name: engine_texture.cpp_updateTextureWithPalette_FUN_00545a10
// Address: 00545a10
// Address Range: [[00545a10, 00545a33]]
// Convention: unknown
// Signature: void engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(void)

{
  SMRGLTextureBasic *in_stack_00000004;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(in_stack_00000004);
  engine_special_cpp_updateTexture_FUN_00532440(in_stack_00000004,_DAT_01c00020);
  return;
}
