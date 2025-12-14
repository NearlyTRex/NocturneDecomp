// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
// Address: 004d02a0
// Address Range: [[004d02a0, 004d0471]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d0425) */

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  CBitFont *local_2c;
  CBitFont *local_24;
  CBitFont *local_20;
  int local_1c;
  CBitFont *local_18;
  CBitFont *local_14;
  
  local_1c = 0;
  if (0 < this_ptr->bitmap_count) {
    local_20 = this_ptr;
    local_2c = this_ptr;
    local_24 = this_ptr;
    do {
      local_24 = (CBitFont *)(local_24->palette_data + 0x29c);
      local_18 = local_2c;
      local_14 = local_2c;
      pCVar1 = local_20;
      do {
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel != 8) {
LAB_004d044b:
            g_CurrentFilename = "..\\engine\\font.cpp";
            g_CurrentLineNumber = 0x686;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if ((uint)g_BitsPerPixel < 0x11) {
          local_14->palettes_display[0][0] =
               ((uint)(byte)pCVar1->palette_data[2] / (uint)g_BlueScaleFactor <<
                ((byte)g_BlueBitPosition & 0x1f) |
               (uint)(byte)pCVar1->palette_data[1] / (uint)g_GreenScaleFactor <<
               ((byte)g_GreenBitPosition & 0x1f) |
               (uint)(byte)pCVar1->palette_data[0] / (uint)g_RedScaleFactor <<
               ((byte)g_RedBitPosition & 0x1f)) & 0xffff;
        }
        else {
          if (g_BitsPerPixel != 0x20) goto LAB_004d044b;
          local_18->palettes_display[0][0] =
               (uint)(byte)pCVar1->palette_data[2] << ((byte)g_BlueBitPosition & 0x1f) |
               (uint)(byte)pCVar1->palette_data[0] << ((byte)g_RedBitPosition & 0x1f) |
               (uint)(byte)pCVar1->palette_data[1] << ((byte)g_GreenBitPosition & 0x1f);
        }
        pCVar1 = (CBitFont *)((int)&pCVar1->bitmap_count + 3);
        local_18 = (CBitFont *)local_18->bitmap_files;
        local_14 = (CBitFont *)local_14->bitmap_files;
      } while (local_14 != local_24);
      local_20 = (CBitFont *)(local_20->palette_data + 0x19c);
      local_2c = (CBitFont *)(local_2c->palette_data + 0x29c);
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->bitmap_count);
  }
  return;
}
