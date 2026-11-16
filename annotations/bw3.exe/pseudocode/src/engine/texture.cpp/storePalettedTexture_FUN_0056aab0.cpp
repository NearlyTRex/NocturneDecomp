// Name: engine_texture.cpp_storePalettedTexture_FUN_0056aab0
// Address: 0056aab0
// Address Range: [[0056aab0, 0056ab65]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storePalettedTexture_FUN_0056aab0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_storePalettedTexture_FUN_0056aab0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  int iVar1;
  
  if ((DAT_007303f4 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_0056a0a0
                      (_DAT_02cfd0d0,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00569e50
                        (_DAT_02cfd0d0,texture->texture_name,dimension,texture_data,palette_data,
                         opacity_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00569f20
                (_DAT_02cfd0d0,texture,dimension,texture_data,palette_data,opacity_data);
    }
    _DAT_02cfd0cc = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_0056a130(_DAT_02cfd0d0,texture,1);
    return;
  }
  return;
}
