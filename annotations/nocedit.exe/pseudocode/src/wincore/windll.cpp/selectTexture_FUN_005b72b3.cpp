// Name: wincore_windll.cpp_selectTexture_FUN_005b72b3
// Address: 005b72b3
// Address Range: [[005b72b3, 005b72fa]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_selectTexture_FUN_005b72b3(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectTexture_FUN_005b72b3(SMRGLTextureBasic *texture_info)

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
