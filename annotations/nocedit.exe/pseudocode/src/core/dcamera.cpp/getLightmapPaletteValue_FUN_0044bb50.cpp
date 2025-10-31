// Name: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50
// Address: 0044bb50
// Address Range: [[0044bb50, 0044bb60]]
// Convention: __cdecl
// Signature: uint core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index)
// Globals:
//   uint[256] g_LightmapTexturePalette

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index)

{
  return g_LightmapTexturePalette[palette_index] & 0xff;
}


// Assembly code:
// 0044bb50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50
//   XREF to: Stack[0x4] (READ)
// 0044bb54: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 0044bb5b: AND EAX,0xff
// 0044bb60: RET
