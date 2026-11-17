// Name: engine_texture.cpp_storeTrueColorTexture_FUN_00597b80
// Address: 00597b80
// Address Range: [[00597b80, 00597c20]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_00597b80(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_00597b80(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

{
  int iVar1;
  
  if ((g_INT_00713a74 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_005970b0
                      (g_CTextureCache_PTR_02c8a680,(texture->base).count & 0xffff,
                       texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addTrueColorTexture_FUN_00596ed0
                        (g_CTextureCache_PTR_02c8a680,texture->texture_name,dimension,
                         true_color_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replaceTrueColorTexture_FUN_00597000
                (g_CTextureCache_PTR_02c8a680,texture,dimension,true_color_data);
    }
    g_INT_02c8a67c = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140
              (g_CTextureCache_PTR_02c8a680,texture,2);
    return;
  }
  return;
}
