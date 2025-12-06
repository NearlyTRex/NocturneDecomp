// Name: wincore_windll.cpp_updateTexture_FUN_005b72fb
// Address: 005b72fb
// Address Range: [[005b72fb, 005b733a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_updateTexture_FUN_005b72fb(SMRGLTextureBasic * texture_info)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_updateTexture_FUN_005b72fb(SMRGLTextureBasic *texture_info)

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
