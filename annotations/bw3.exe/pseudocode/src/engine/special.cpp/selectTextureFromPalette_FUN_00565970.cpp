// Name: engine_special.cpp_selectTextureFromPalette_FUN_00565970
// Address: 00565970
// Address Range: [[00565970, 005659ad]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00565970(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00565970(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf600c)
                    (tex,g_INT_005fba28,g_UCHAR_PTR_01c6ced0,palette_data,g_UCHAR_PTR_01c6ced4);
  return iVar1;
}
