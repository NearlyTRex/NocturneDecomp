// Name: wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b01
// Address: 005b7b01
// Address Range: [[005b7b01, 005b7b72]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_setFogColorFromPalette_FUN_005b7b01(int palette_index)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setFogColorFromPalette_FUN_005b7b01(int palette_index)

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
