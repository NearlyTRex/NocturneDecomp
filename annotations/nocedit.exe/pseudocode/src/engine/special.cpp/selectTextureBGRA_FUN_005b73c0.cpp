// Name: engine_special.cpp_selectTextureBGRA_FUN_005b73c0
// Address: 005b73c0
// Address Range: [[005b73c0, 005b73f5]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureBGRA_FUN_005b73c0(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTextureBGRA_FUN_005b73c0(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_selectTextureBGRA != (APIDLL_selectTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_selectTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}
