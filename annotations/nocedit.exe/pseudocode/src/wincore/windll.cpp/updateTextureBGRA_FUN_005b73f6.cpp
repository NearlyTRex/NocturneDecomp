// Name: wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6
// Address: 005b73f6
// Address Range: [[005b73f6, 005b7435]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_updateTextureBGRA != (APIDLL_updateTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_updateTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}
