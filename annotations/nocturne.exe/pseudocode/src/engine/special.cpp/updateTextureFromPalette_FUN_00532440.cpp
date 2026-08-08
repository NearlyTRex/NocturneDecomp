// Name: engine_special.cpp_updateTextureFromPalette_FUN_00532440
// Address: 00532440
// Address Range: [[00532440, 0053247d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_00532440(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_00532440(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,(uchar *)palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}
