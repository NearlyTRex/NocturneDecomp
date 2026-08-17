// Name: engine_special.cpp_updateTexture_FUN_005323c0
// Address: 005323c0
// Address Range: [[005323c0, 005323fa]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTexture_FUN_005323c0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTexture_FUN_005323c0(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (texture_info,g_CurrentTextureDimension,g_CurrentTextureData,g_SourcePaletteData
                     ,g_CurrentTextureOpacityData);
  return iVar1;
}
