// Name: shape_edittool.cpp_FUN_0047be90
// Address: 0047be90
// Address Range: [[0047be90, 0047bf73]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047be90(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047be90(uint param_1,char *param_2)

{
  byte *local_14;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  local_14 = &stack0x0000000c;
  _vsprintf((char *)0x1c231f0,param_2,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004a92a0
            (_DAT_01c25590,DAT_006141b8 / 2,DAT_006141bc / 2,_DAT_01c263b4,-1,(char *)0x1c231f0);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  return;
}
