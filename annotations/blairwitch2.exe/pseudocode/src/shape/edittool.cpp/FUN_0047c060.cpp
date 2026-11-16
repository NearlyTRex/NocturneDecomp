// Name: FUN_0047c060
// Address: 0047c060
// Address Range: [[0047c060, 0047c0e0]]
// Convention: unknown
// Signature: void FUN_0047c060(CEditorTools *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c060(CEditorTools *param_1,char *param_2)

{
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (param_1,(DAT_006141b8 << 2) / 5,_DAT_01c25f7c,param_2,0);
  return;
}
