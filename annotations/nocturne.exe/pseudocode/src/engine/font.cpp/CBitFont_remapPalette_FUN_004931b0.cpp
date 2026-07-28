// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
// Address: 004931b0
// Address Range: [[004931b0, 0049338e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(CBitFont *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049330b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(CBitFont *this_ptr)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  CBitFont *pCVar5;
  CBitFont *local_28;
  int local_24;
  CBitFont *local_20;
  CBitFont *local_14;
  
  local_24 = 0;
  if (0 < this_ptr->bitmap_count) {
    local_20 = this_ptr;
    local_28 = this_ptr;
    do {
      iVar3 = 0;
      local_14 = local_20;
      pCVar5 = local_28;
      do {
        uVar4 = (uint)(byte)pCVar5->palette_data[2];
        uVar2 = (uint)(byte)pCVar5->palette_data[1];
        uVar1 = (uint)(byte)pCVar5->palette_data[0];
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            uVar1 = (uint)(byte)(&DAT_01bf7720)
                                [((int)uVar4 >> 3) +
                                 ((int)uVar1 >> 3) * 0x400 + ((int)uVar2 >> 3) * 0x20];
LAB_00493246:
            local_20->palettes_display[0][iVar3] = uVar1;
          }
          else {
LAB_00493368:
            PTR_01cc4800 = "..\\engine\\font.cpp";
            INT_01cc4804 = 0x686;
            core_main_c_FUN_004c8440("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else {
          if (DAT_005b7624 < 0x11) {
            uVar1 = (uVar4 / _DAT_01c00640 << (DAT_01c0063c & 0x1f) |
                    uVar1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f) |
                    uVar2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) & 0xffff;
            goto LAB_00493246;
          }
          if (DAT_005b7624 != 0x20) goto LAB_00493368;
          local_14->palettes_display[0][0] =
               uVar4 << (DAT_01c0063c & 0x1f) |
               uVar2 << (DAT_01c00630 & 0x1f) | uVar1 << (DAT_01c00624 & 0x1f);
        }
        iVar3 = iVar3 + 1;
        local_14 = (CBitFont *)local_14->bitmap_files;
        pCVar5 = (CBitFont *)((int)&pCVar5->bitmap_count + 3);
      } while (iVar3 < 0x100);
      local_28 = (CBitFont *)(local_28->palette_data + 0x19c);
      local_20 = (CBitFont *)(local_20->palette_data + 0x29c);
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->bitmap_count);
  }
  return;
}
