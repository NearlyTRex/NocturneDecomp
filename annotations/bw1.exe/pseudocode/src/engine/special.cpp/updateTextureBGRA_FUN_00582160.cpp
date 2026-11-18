// Name: engine_special.cpp_updateTextureBGRA_FUN_00582160
// Address: 00582160
// Address Range: [[00582160, 00582195]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00582160(SMRGLTextureBasic *texture_info,int flags)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureBGRA_FUN_00582160(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_INT_01c50948 != 0) && (g_PTR_02c833bc != (byte *)0x0)) {
    iVar1 = (*(code *)g_PTR_02c833bc)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}
