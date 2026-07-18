// Name: wincore_windll.cpp_updateTextureGlobal_FUN_005b7300
// Address: 005b7300
// Address Range: [[005b7300, 005b733a]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_updateTextureGlobal_FUN_005b7300(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_updateTextureGlobal_FUN_005b7300(SMRGLTextureBasic *texture_info)

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
