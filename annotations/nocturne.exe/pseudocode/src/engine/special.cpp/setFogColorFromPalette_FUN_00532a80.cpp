// Name: engine_special.cpp_setFogColorFromPalette_FUN_00532a80
// Address: 00532a80
// Address Range: [[00532a80, 00532ae2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)

{
  int iVar1;
  
  iVar1 = palette_index * 3;
  _DAT_02dc9e0c = (uint)g_SourcePaletteData[iVar1];
  _DAT_02dc9e10 = (uint)g_SourcePaletteData[iVar1 + 1];
  _DAT_02dc9e14 = (uint)g_SourcePaletteData[iVar1 + 2];
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9dcc)(_DAT_02dc9e0c,_DAT_02dc9e10,_DAT_02dc9e14);
  return iVar1;
}
