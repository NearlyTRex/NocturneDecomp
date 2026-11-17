// Name: engine_texture.cpp_ensureTextureLoaded_FUN_00597a20
// Address: 00597a20
// Address Range: [[00597a20, 00597a96]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(SMRGLTextureBasic *texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((g_INT_00713a74 == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_005970b0
                      (g_CTextureCache_PTR_02c8a680,(texture->base).count & 0xffff,
                       texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_005967a0
                        (g_CTextureCache_PTR_02c8a680,texture->texture_name);
    }
    (texture->base).count = iVar1;
    g_INT_02c8a67c = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140
              (g_CTextureCache_PTR_02c8a680,texture,(uint)bVar2);
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
