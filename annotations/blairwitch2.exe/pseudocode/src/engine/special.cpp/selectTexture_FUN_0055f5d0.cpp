// Name: engine_special.cpp_selectTexture_FUN_0055f5d0
// Address: 0055f5d0
// Address Range: [[0055f5d0, 0055f60a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTexture_FUN_0055f5d0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTexture_FUN_0055f5d0(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bbe0)
                    (texture_info,g_INT_006141c8,g_UCHAR_PTR_01c37770,g_UCHAR_ARRAY_01c35838,
                     g_UCHAR_PTR_01c37774);
  return iVar1;
}
