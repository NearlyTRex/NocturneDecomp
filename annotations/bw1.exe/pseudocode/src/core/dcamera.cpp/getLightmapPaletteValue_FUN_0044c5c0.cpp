// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044c5c0
// Address: 0044c5c0
// Address Range: [[0044c5c0, 0044c5d0]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044c5c0(int palette_index)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044c5c0(int palette_index)

{
  return *(uint *)(&DAT_00b8189c + palette_index * 4) & 0xff;
}
