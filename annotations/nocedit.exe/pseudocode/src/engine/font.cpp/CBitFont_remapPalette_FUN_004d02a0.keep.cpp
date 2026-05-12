// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
// Address: 004d02a0
// MANUAL RECONSTRUCTION
// Address Range: [[004d02a0, 004d0471]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr)

{
  int bmp;
  int i;
  byte *pal_src;
  uint *pal_dst;

  for (bmp = 0; bmp < this_ptr->bitmap_count; bmp = bmp + 1) {
    pal_src = (byte *)&this_ptr->palette_data[bmp * 0x300];
    pal_dst = this_ptr->palettes_display[bmp];
    for (i = 0; i < 256; i = i + 1) {
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_004d044b:
          g_CurrentFilename = "..\\engine\\font.cpp";
          g_CurrentLineNumber = 0x686;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CBitFont::remapPalette - Invalid bitsPerPixel");
        }
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        pal_dst[i] =
             ((uint)pal_src[i * 3 + 2] / (uint)g_BlueScaleFactor <<
              (g_BlueBitPosition.bytes[0] & 0x1f) |
             (uint)pal_src[i * 3 + 1] / (uint)g_GreenScaleFactor <<
             (g_GreenBitPosition.bytes[0] & 0x1f) |
             (uint)pal_src[i * 3] / (uint)g_RedScaleFactor <<
             (g_RedBitPosition.bytes[0] & 0x1f)) & 0xffff;
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_004d044b;
        pal_dst[i] =
             (uint)pal_src[i * 3 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
             (uint)pal_src[i * 3] << (g_RedBitPosition.bytes[0] & 0x1f) |
             (uint)pal_src[i * 3 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f);
      }
    }
  }
  return;
}
