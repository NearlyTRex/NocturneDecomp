// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
// Address: 004931b0
// Address Range: [[004931b0, 0049338e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(CBitFont *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049330b) */

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
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            uVar1 = (uint)g_ColorCubeLookup
                          [((int)uVar4 >> 3) + ((int)uVar1 >> 3) * 0x400 + ((int)uVar2 >> 3) * 0x20]
            ;
LAB_00493246:
            local_20->palettes_display[0][iVar3] = uVar1;
          }
          else {
LAB_00493368:
            g_CurrentFilename = "..\\engine\\font.cpp";
            g_CurrentLineNumber = 1670;
            core_main_c_displayErrorAndQuit_FUN_004c8440("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else {
          if ((uint)g_BitsPerPixel < 0x11) {
            uVar1 = (uVar4 / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f) |
                    uVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f) |
                    uVar2 / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) &
                    0xffff;
            goto LAB_00493246;
          }
          if (g_BitsPerPixel != 0x20) goto LAB_00493368;
          local_14->palettes_display[0][0] =
               uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f) |
               uVar2 << (g_GreenBitPosition.bytes[0] & 0x1f) |
               uVar1 << (g_RedBitPosition.bytes[0] & 0x1f);
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
