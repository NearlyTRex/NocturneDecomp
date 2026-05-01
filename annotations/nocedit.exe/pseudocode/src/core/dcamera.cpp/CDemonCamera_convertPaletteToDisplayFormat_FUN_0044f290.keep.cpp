// Name: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290
// Address: 0044f290
// MANUAL RECONSTRUCTION
// Address Range: [[0044f290, 0044f303]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera *this_ptr)

{
  int i;
  uint uVar2;
  uint uVar5;
  uint uVar6;

  for (i = 0; i < 256; i = i + 1) {
    uVar5 = (uint)g_CameraImagePaletteData.colors[i].g;
    uVar6 = (uint)g_CameraImagePaletteData.colors[i].r;
    uVar2 = (uint)g_CameraImagePaletteData.colors[i].b;
    if (g_BitsPerPixel == 0x20) {
      uVar2 = uVar2 << (g_BlueBitPosition.bytes[0] & 0x1f) |
              uVar6 << (g_RedBitPosition.bytes[0] & 0x1f) |
              uVar5 << (g_GreenBitPosition.bytes[0] & 0x1f);
    }
    else {
      uVar2 = uVar6 << 0x10 | uVar5 << 8 | uVar2;
    }
    g_CameraConvertedPalette[i] = uVar2;
  }
  return;
}
