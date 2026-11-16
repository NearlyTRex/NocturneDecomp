// Name: engine_texture.cpp_storePalettedTexture_FUN_00597ac0
// Address: 00597ac0
// Address Range: [[00597ac0, 00597b75]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storePalettedTexture_FUN_00597ac0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_storePalettedTexture_FUN_00597ac0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  int iVar1;
  
  if ((DAT_00713a74 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_005970b0
                      (_DAT_02c8a680,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00596e60
                        (_DAT_02c8a680,texture->texture_name,dimension,texture_data,palette_data,
                         opacity_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00596f30
                (_DAT_02c8a680,texture,dimension,texture_data,palette_data,opacity_data);
    }
    _DAT_02c8a67c = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140(_DAT_02c8a680,texture,1);
    return;
  }
  return;
}
