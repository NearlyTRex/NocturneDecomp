// Name: shape_edittool.cpp_FUN_00494500
// Address: 00494500
// Address Range: [[00494500, 004945f7]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00494500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00494500(void)

{
  uint in_stack_00000004;
  char *in_stack_00000008;
  char acStack_414 [1024];
  byte *puStack_14;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf(acStack_414,in_stack_00000008,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_FUN_00496ee0(in_stack_00000004);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
  engine_font_cpp_FUN_004c1dd0
            (_DAT_01c3eb50,acStack_414,_DAT_01c4f008,_DAT_01c4f00c,_DAT_01c3f578,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  return;
}
