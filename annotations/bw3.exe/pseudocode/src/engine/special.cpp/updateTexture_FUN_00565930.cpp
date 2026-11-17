// Name: engine_special.cpp_updateTexture_FUN_00565930
// Address: 00565930
// Address Range: [[00565930, 0056596a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTexture_FUN_00565930(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTexture_FUN_00565930(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6010)
                    (texture_info,g_INT_005fba28,g_UCHAR_PTR_01c6ced0,g_UCHAR_ARRAY_01c6af98,
                     g_UCHAR_PTR_01c6ced4);
  return iVar1;
}
