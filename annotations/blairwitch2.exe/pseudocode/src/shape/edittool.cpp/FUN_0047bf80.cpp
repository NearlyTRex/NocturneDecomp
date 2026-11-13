// Name: shape_edittool.cpp_FUN_0047bf80
// Address: 0047bf80
// Address Range: [[0047bf80, 0047c05c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047bf80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047bf80(void)

{
  uint in_stack_00000004;
  char *in_stack_00000008;
  byte *puStack_14;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf((char *)0x1c235f0,in_stack_00000008,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_FUN_0047e870(in_stack_00000004);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  engine_font_cpp_FUN_004a8df0
            (_DAT_01c25590,0x1c235f0,_DAT_01c35e48,_DAT_01c35e4c,_DAT_01c263b8,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  return;
}
