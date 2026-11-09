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
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 != 8) {
LAB_004c478b:
            _DAT_01d1d400 = "..\\engine\\font.cpp";
            _DAT_01d1d404 = 0x8e4;
            core_main_c_FUN_005030e0("CBitFont::remapPalette - Invalid bitsPerPixel");
          }
        }
        else if (DAT_0061b4a0 < 0x11) {
          *(uint *)(local_14 + 0xdb4) =
               ((byte)pCVar1[0x1b6] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
               (byte)pCVar1[0x1b5] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f) |
               (byte)pCVar1[0x1b4] / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) & 0xffff;
        }
        else {
          if (DAT_0061b4a0 != 0x20) goto LAB_004c478b;
          *(uint *)(local_18 + 0xdb4) =
               (uint)(byte)pCVar1[0x1b6] << (DAT_01c4e9ec & 0x1f) |
               (uint)(byte)pCVar1[0x1b4] << (DAT_01c4e9d4 & 0x1f) |
               (uint)(byte)pCVar1[0x1b5] << (DAT_01c4e9e0 & 0x1f);
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
