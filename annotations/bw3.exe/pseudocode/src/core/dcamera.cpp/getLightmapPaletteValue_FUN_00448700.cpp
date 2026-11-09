// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_00448700
// Address: 00448700
// Address Range: [[00448700, 00448710]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_00448700(int palette_index)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_00448700(int palette_index)

{
  return *(uint *)(&DAT_00b9e14c + palette_index * 4) & 0xff;
}
