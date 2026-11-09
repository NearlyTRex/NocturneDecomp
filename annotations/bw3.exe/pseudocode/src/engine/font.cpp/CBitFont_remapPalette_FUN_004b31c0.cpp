// Name: engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0
// Address: 004b31c0
// Address Range: [[004b31c0, 004b3391]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004b31c0(CBitFont *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b3345) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004b31c0(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  CBitFont *local_2c;
  CBitFont *local_24;
  CBitFont *local_20;
  int local_1c;
  CBitFont *local_18;
  CBitFont *local_14;
  
  local_1c = 0;
  if (0 < *(int *)this_ptr) {
    local_20 = this_ptr;
    local_2c = this_ptr;
    local_24 = this_ptr;
    do {
      local_24 = local_24 + 0x400;
      local_18 = local_2c;
      local_14 = local_2c;
      pCVar1 = local_20;
      do {
        if (DAT_005fba20 < 0x10) {
          if (DAT_005fba20 != 8) {
LAB_004b336b:
            _DAT_01d71de0 = "..\\engine\\font.cpp";
            _DAT_01d71de4 = 0x8e4;
            core_main_c_FUN_004e4330("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if (DAT_005fba20 < 0x11) {
          *(uint *)(local_14 + 0xdb4) =
               ((byte)pCVar1[0x1b6] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
               (byte)pCVar1[0x1b5] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f) |
               (byte)pCVar1[0x1b4] / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) & 0xffff;
        }
        else {
          if (DAT_005fba20 != 0x20) goto LAB_004b336b;
          *(uint *)(local_18 + 0xdb4) =
               (uint)(byte)pCVar1[0x1b6] << (DAT_01c6af8c & 0x1f) |
               (uint)(byte)pCVar1[0x1b4] << (DAT_01c6af74 & 0x1f) |
               (uint)(byte)pCVar1[0x1b5] << (DAT_01c6af80 & 0x1f);
        }
        pCVar1 = pCVar1 + 3;
        local_18 = local_18 + 4;
        local_14 = local_14 + 4;
      } while (local_14 != local_24);
      local_20 = local_20 + 0x300;
      local_2c = local_2c + 0x400;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)this_ptr);
  }
  return;
}
