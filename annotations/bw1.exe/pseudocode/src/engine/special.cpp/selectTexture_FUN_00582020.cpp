// Name: engine_special.cpp_selectTexture_FUN_00582020
// Address: 00582020
// Address Range: [[00582020, 0058205a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_00582020(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTexture_FUN_00582020(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833b0)
                    (texture_info,g_INT_0061b4a8,g_UCHAR_PTR_01c50930,g_UCHAR_ARRAY_01c4e9f8,
                     g_UCHAR_PTR_01c50934);
  return iVar1;
}
