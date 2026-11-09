// Name: engine_font.cpp_FUN_004c2560
// Address: 004c2560
// Address Range: [[004c2560, 004c2680]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004c2560(uint param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c2647) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004c2560(uint param_1,uint param_2,uint param_3)

{
  if (DAT_0061b4a0 != 8) {
    if (DAT_0061b4a0 == 0x10) {
      _DAT_01cc8cd2 =
           (ushort)(param_3 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
           (ushort)(param_1 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)(param_2 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f));
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01cc8cd4 =
           param_3 << (DAT_01c4e9ec & 0x1f) |
           param_1 << (DAT_01c4e9d4 & 0x1f) | param_2 << (DAT_01c4e9e0 & 0x1f);
    }
    else {
      _DAT_01d1d400 = "..\\engine\\font.cpp";
      _DAT_01d1d404 = 0x4c0;
      core_main_c_FUN_005030e0("Invalid bitsPerPixel in CBitFont::setTrueColor");
    }
  }
  _DAT_01cc8cdc = param_2;
  _DAT_01cc8ce0 = param_3;
  _DAT_01cc8cd8 = param_1;
  return;
}
