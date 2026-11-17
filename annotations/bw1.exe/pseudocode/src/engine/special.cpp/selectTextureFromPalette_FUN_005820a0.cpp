// Name: engine_special.cpp_selectTextureFromPalette_FUN_005820a0
// Address: 005820a0
// Address Range: [[005820a0, 005820dd]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_005820a0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_005820a0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833b0)
                    (tex,g_INT_0061b4a8,g_UCHAR_PTR_01c50930,palette_data,g_UCHAR_PTR_01c50934);
  return iVar1;
}
