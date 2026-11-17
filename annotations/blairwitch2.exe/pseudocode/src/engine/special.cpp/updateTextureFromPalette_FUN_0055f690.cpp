// Name: engine_special.cpp_updateTextureFromPalette_FUN_0055f690
// Address: 0055f690
// Address Range: [[0055f690, 0055f6cd]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_0055f690(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_0055f690(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bbe4)
                    (tex,g_INT_006141c8,g_UCHAR_PTR_01c37770,palette_data,g_UCHAR_PTR_01c37774);
  return iVar1;
}
