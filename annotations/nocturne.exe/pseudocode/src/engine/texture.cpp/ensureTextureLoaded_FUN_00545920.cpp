// Name: engine_texture.cpp_ensureTextureLoaded_FUN_00545920
// Address: 00545920
// Address Range: [[00545920, 005459cb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_006b0278 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00545390
                      (_DAT_02dd0f84,(texture->base).count & 0xffff,texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0
                        (_DAT_02dd0f84,texture->texture_name);
      (texture->base).count = iVar1;
    }
    _DAT_02dd0f80 = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(_DAT_02dd0f84,iVar1);
    if (_DAT_01c02594 != 0) {
      if (bVar2) {
        engine_special_cpp_updateTexture_FUN_00532440(texture,_DAT_01c00020);
        return (SMRGLHeaderExtended *)(texture + 1);
      }
      engine_special_cpp_selectTexture_FUN_00532400(texture,_DAT_01c00020);
    }
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
