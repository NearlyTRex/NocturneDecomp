// Name: wincore_windll.cpp_selectTextureGlobal_FUN_005b72c0
// Address: 005b72c0
// Address Range: [[005b72c0, 005b72fa]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_selectTextureGlobal_FUN_005b72c0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectTextureGlobal_FUN_005b72c0(SMRGLTextureBasic *texture_info)

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
