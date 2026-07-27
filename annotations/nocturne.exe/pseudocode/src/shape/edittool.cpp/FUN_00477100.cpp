// Name: shape_edittool.cpp_FUN_00477100
// Address: 00477100
// Address Range: [[00477100, 0047718e]]
// Convention: unknown
// Signature: int shape_edittool_cpp_FUN_00477100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int shape_edittool_cpp_FUN_00477100(int param_1)

{
  int iVar1;
  
  if (_DAT_01bcd070 == 0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (param_1 == 0) {
    iVar1 = *(int *)(_DAT_01bcd070 + 0x316c);
  }
  else {
    iVar1 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,param_1);
  }
  return DAT_005b7620 / 0x50 + iVar1;
}
