// Name: wincore_windll.cpp_updateTexture_FUN_005b7380
// Address: 005b7380
// Address Range: [[005b7380, 005b73bd]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}
