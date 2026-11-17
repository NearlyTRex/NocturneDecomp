// Name: engine_texture.cpp_updateTextureWithPalette_FUN_00597c60
// Address: 00597c60
// Address Range: [[00597c60, 00597c83]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00597c60(SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00597c60(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_005976a0(g_CTextureCache_PTR_02c8a680,texture);
  return;
}
