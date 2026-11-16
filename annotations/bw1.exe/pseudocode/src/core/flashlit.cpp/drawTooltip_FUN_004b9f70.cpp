// Name: core_flashlit.cpp_drawTooltip_FUN_004b9f70
// Address: 004b9f70
// Address Range: [[004b9f70, 004b9fef]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_drawTooltip_FUN_004b9f70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flashlit_cpp_drawTooltip_FUN_004b9f70(void)

{
  if (-1 < DAT_0061d310) {
    if (_DAT_01cc8000 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_0061d310,_DAT_01cc7f20,_DAT_01cc7f24 + -1,_DAT_01cc7f28 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (_DAT_0152d240,&DAT_01cc7f38,_DAT_01cc7f2c,_DAT_01cc7f30,0xff,-1);
      return;
    }
    _DAT_01cc7f1c = _DAT_01cc8000;
    DAT_01cc7f38 = 0;
    DAT_0061d310 = -1;
  }
  return;
}
