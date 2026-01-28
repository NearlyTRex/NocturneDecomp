// Name: wincore_windll.cpp_selectTexture_FUN_005b7340
// Address: 005b7340
// Address Range: [[005b7340, 005b737d]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic *tex,byte *palette_data)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic *tex,byte *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}
