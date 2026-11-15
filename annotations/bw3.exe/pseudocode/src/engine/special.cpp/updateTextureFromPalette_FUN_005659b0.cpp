// Name: engine_special.cpp_updateTextureFromPalette_FUN_005659b0
// Address: 005659b0
// Address Range: [[005659b0, 005659ed]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_005659b0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTextureFromPalette_FUN_005659b0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6010)(tex,DAT_005fba28,_DAT_01c6ced0,palette_data,_DAT_01c6ced4);
  return iVar1;
}
