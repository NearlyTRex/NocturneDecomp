// Name: engine_texture.cpp_storeTrueColorTexture_FUN_0056ab70
// Address: 0056ab70
// Address Range: [[0056ab70, 0056ac10]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_0056ab70(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_0056ab70(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

{
  int iVar1;
  
  if ((DAT_007303f4 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_0056a0a0
                      (_DAT_02cfd0d0,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addTrueColorTexture_FUN_00569ec0
                        (_DAT_02cfd0d0,texture->texture_name,dimension,true_color_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replaceTrueColorTexture_FUN_00569ff0
                (_DAT_02cfd0d0,texture,dimension,true_color_data);
    }
    _DAT_02cfd0cc = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_0056a130(_DAT_02cfd0d0,texture,2);
    return;
  }
  return;
}
