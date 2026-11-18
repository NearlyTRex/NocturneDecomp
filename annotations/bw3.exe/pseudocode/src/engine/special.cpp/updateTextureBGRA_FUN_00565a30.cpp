// Name: engine_special.cpp_updateTextureBGRA_FUN_00565a30
// Address: 00565a30
// Address Range: [[00565a30, 00565a65]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00565a30(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00565a30(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_INT_01c6cee8 != 0) && (g_APIDLL_updateTextureBGRA != (byte *)0x0)) {
    iVar1 = (*(code *)g_APIDLL_updateTextureBGRA)(texture_info,g_INT_005fba28,flags);
    return iVar1;
  }
  return 0;
}
