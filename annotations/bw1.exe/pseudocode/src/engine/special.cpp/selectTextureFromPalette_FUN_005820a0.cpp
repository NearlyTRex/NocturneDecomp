// Name: engine_special.cpp_selectTextureFromPalette_FUN_005820a0
// Address: 005820a0
// Address Range: [[005820a0, 005820dd]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_005820a0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_selectTextureFromPalette_FUN_005820a0(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833b0)(tex,DAT_0061b4a8,_DAT_01c50930,palette_data,_DAT_01c50934);
  return iVar1;
}
