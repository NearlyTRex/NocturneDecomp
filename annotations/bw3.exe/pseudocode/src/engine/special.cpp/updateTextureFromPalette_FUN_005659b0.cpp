// Name: engine_special.cpp_updateTextureFromPalette_FUN_005659b0
// Address: 005659b0
// Address Range: [[005659b0, 005659ed]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_005659b0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_005659b0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_updateTexture)
                    (tex,g_INT_005fba28,g_CurrentTextureData,palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}
