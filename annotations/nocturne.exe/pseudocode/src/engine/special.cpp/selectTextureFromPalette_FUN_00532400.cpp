// Name: engine_special.cpp_selectTextureFromPalette_FUN_00532400
// Address: 00532400
// Address Range: [[00532400, 0053243d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00532400(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00532400(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,(uchar *)palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}
