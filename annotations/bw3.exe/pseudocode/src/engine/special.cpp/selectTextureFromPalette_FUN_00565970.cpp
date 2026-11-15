// Name: engine_special.cpp_selectTextureFromPalette_FUN_00565970
// Address: 00565970
// Address Range: [[00565970, 005659ad]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00565970(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_00565970(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf600c)(tex,DAT_005fba28,_DAT_01c6ced0,palette_data,_DAT_01c6ced4);
  return iVar1;
}
