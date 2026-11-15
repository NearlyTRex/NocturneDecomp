// Name: engine_texture.cpp_ensureTextureLoaded_FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e76]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_0070ca74 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (_DAT_02652eb0,(texture->base).count & 0xffff,texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_00573b80
                        (_DAT_02652eb0,texture->texture_name);
    }
    (texture->base).count = iVar1;
    _DAT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(_DAT_02652eb0,texture,(uint)bVar2);
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
