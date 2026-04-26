// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
// MANUAL RECONSTRUCTION
// Address Range: [[00431c00, 00431cf9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(SRGBColorPalette *rgb_palette_data)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(SRGBColorPalette *rgb_palette_data)

{
  int i;

  g_CurrentPalette = rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    for (i = 0; i < 256; i++) {
      g_Hardware16BitPalette[i] =
           (ushort)((uint)rgb_palette_data->colors[i].g / (uint)g_GreenScaleFactor
                    << (g_GreenBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)rgb_palette_data->colors[i].r / (uint)g_RedScaleFactor
                    << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)rgb_palette_data->colors[i].b / (uint)g_BlueScaleFactor
                    << (g_BlueBitPosition.bytes[0] & 0x1f));
    }
    return;
  }
  for (i = 0; i < 256; i++) {
    g_Hardware32BitPalette[i] =
         (uint)rgb_palette_data->colors[i].b << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (uint)rgb_palette_data->colors[i].r << (g_RedBitPosition.bytes[0] & 0x1f) |
         (uint)rgb_palette_data->colors[i].g << (g_GreenBitPosition.bytes[0] & 0x1f);
  }
  return;
}
