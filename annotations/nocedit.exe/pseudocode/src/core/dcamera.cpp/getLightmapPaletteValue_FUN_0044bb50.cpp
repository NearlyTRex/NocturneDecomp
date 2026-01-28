// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50
// Address: 0044bb50
// Address Range: [[0044bb50, 0044bb60]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index)

{
  return g_LightmapTexturePalette[palette_index] & 0xff;
}
