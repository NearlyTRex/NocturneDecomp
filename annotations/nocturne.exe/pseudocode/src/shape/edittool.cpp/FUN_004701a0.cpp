// Name: shape_edittool.cpp_FUN_004701a0
// Address: 004701a0
// Address Range: [[004701a0, 00470220]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004701a0(CEditorTools *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004701a0(CEditorTools *param_1,char *param_2)

{
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (param_1,(DAT_005b761c << 2) / 5,_DAT_01bcd9bc,param_2,0);
  return;
}
