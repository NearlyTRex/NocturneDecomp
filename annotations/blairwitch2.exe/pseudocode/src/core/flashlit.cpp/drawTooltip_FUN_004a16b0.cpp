// Name: core_flashlit.cpp_drawTooltip_FUN_004a16b0
// Address: 004a16b0
// Address Range: [[004a16b0, 004a172f]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a16b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a16b0(void)

{
  if (-1 < DAT_00616040) {
    if (_DAT_01caf568 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_00616040,_DAT_01caf48c,_DAT_01caf490 + -1,_DAT_01caf494 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                (_DAT_01511cbc,&DAT_01caf4a0,_DAT_01caf498,_DAT_01caf49c,0xff,-1);
      return;
    }
    _DAT_01caf488 = _DAT_01caf568;
    DAT_01caf4a0 = 0;
    DAT_00616040 = -1;
  }
  return;
}
