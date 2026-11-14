// Name: engine_texture.cpp_ensureTextureLoaded_FUN_0056aa10
// Address: 0056aa10
// Address Range: [[0056aa10, 0056aa86]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_007303f4 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_FUN_0056a0a0
                      (_DAT_02cfd0d0,(texture->base).count & 0xffff,texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_00569790
                        (_DAT_02cfd0d0,texture->texture_name);
    }
    (texture->base).count = iVar1;
    _DAT_02cfd0cc = iVar1;
    engine_texture_cpp_FUN_0056a130(_DAT_02cfd0d0,texture,bVar2);
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
