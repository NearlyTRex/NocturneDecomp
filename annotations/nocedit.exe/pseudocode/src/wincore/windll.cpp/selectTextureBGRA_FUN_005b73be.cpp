// Name: wincore_windll.cpp_selectTextureBGRA_FUN_005b73be
// Address: 005b73be
// Address Range: [[005b73be, 005b73f5]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_selectTextureBGRA != (APIDLL_selectTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_selectTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}
