// Name: engine_texture.cpp_ensureTextureLoaded_FUN_00597a20
// Address: 00597a20
// Address Range: [[00597a20, 00597a96]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_00713a74 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_005970b0
                      (_DAT_02c8a680,(texture->base).count & 0xffff,texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_005967a0
                        (_DAT_02c8a680,texture->texture_name);
    }
    (texture->base).count = iVar1;
    _DAT_02c8a67c = iVar1;
    engine_texture_cpp_FUN_00597140(_DAT_02c8a680,texture,bVar2);
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
