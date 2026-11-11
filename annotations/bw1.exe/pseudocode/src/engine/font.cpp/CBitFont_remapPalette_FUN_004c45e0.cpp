// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0
// Address: 004c45e0
// Address Range: [[004c45e0, 004c47b1]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004c45e0(CBitFont *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c4765) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004c45e0(CBitFont *this_ptr)

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
      local_24 = (CBitFont *)(local_24->palette_data + 0x24c);
      local_18 = local_2c;
      local_14 = local_2c;
      pCVar1 = local_20;
      do {
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 != 8) {
LAB_004c478b:
            _DAT_01d1d400 = "..\\engine\\font.cpp";
            _DAT_01d1d404 = 0x8e4;
            core_main_c_FUN_005030e0("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if (DAT_0061b4a0 < 0x11) {
          local_14->palettes_display[0][0] =
               ((byte)pCVar1->palette_data[2] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
               (byte)pCVar1->palette_data[1] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f) |
               (byte)pCVar1->palette_data[0] / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) & 0xffff;
        }
        else {
          if (DAT_0061b4a0 != 0x20) goto LAB_004c478b;
          local_18->palettes_display[0][0] =
               (uint)(byte)pCVar1->palette_data[2] << (DAT_01c4e9ec & 0x1f) |
               (uint)(byte)pCVar1->palette_data[0] << (DAT_01c4e9d4 & 0x1f) |
               (uint)(byte)pCVar1->palette_data[1] << (DAT_01c4e9e0 & 0x1f);
        }
        pCVar1 = (CBitFont *)((int)&pCVar1->bitmap_count + 3);
        local_18 = (CBitFont *)local_18->bitmap_files;
        local_14 = (CBitFont *)local_14->bitmap_files;
      } while (local_14 != local_24);
      local_20 = (CBitFont *)(local_20->palette_data + 0x14c);
      local_2c = (CBitFont *)(local_2c->palette_data + 0x24c);
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->bitmap_count);
  }
  return;
}
