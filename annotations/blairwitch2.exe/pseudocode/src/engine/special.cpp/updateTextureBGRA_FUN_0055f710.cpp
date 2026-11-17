// Name: engine_special.cpp_updateTextureBGRA_FUN_0055f710
// Address: 0055f710
// Address Range: [[0055f710, 0055f745]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_0055f710(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_0055f710(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_INT_01c37788 != 0) && (g_PTR_0264bbec != (byte *)0x0)) {
    iVar1 = (*(code *)g_PTR_0264bbec)(texture_info,g_INT_006141c8,flags);
    return iVar1;
  }
  return 0;
}
