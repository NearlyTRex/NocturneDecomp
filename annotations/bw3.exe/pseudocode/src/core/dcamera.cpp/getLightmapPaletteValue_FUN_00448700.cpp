// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_00448700
// Address: 00448700
// Address Range: [[00448700, 00448710]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_00448700(int palette_index)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_00448700(int palette_index)

{
  return g_LightmapTexturePalette[palette_index] & 0xff;
}
