// Name: engine_special.cpp_selectTexture_FUN_00532380
// Address: 00532380
// Address Range: [[00532380, 005323ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_00532380(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTexture_FUN_00532380(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectTexture)
                    (texture_info,g_CurrentTextureDimension,g_CurrentTextureData,g_SourcePaletteData
                     ,g_CurrentTextureOpacityData);
  return iVar1;
}
