// Name: engine_special.cpp_updateTextureBGRA_FUN_005b7400
// Address: 005b7400
// Address Range: [[005b7400, 005b7435]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_005b7400(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_005b7400(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_updateTextureBGRA != (APIDLL_updateTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_updateTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}
