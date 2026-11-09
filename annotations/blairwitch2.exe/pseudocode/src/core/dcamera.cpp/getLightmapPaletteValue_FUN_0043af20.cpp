// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_0043af20
// Address: 0043af20
// Address Range: [[0043af20, 0043af30]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0043af20(int palette_index)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0043af20(int palette_index)

{
  return *(uint *)(&DAT_00b6639c + palette_index * 4) & 0xff;
}
