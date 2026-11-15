// Name: engine_special.cpp_selectTextureFromPalette_FUN_0055f650
// Address: 0055f650
// Address Range: [[0055f650, 0055f68d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_0055f650(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_0055f650(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bbe0)(tex,DAT_006141c8,_DAT_01c37770,palette_data,_DAT_01c37774);
  return iVar1;
}
