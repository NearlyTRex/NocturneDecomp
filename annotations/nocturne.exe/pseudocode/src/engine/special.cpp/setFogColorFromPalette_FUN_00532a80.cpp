// Name: engine_special.cpp_setFogColorFromPalette_FUN_00532a80
// Address: 00532a80
// Address Range: [[00532a80, 00532ae2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)

{
  int iVar1;
  
  iVar1 = palette_index * 3;
  g_FogColorRed = (int)g_SourcePaletteData[iVar1];
  g_FogColorGreen = (int)g_SourcePaletteData[iVar1 + 1];
  g_FogColorBlue = (int)g_SourcePaletteData[iVar1 + 2];
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  return iVar1;
}
