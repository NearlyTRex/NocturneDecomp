// Name: shape_edittool.cpp_FUN_0047d0a0
// Address: 0047d0a0
// Address Range: [[0047d0a0, 0047d197]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047d0a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0047d0a0(void)

{
  uint in_stack_00000004;
  char *in_stack_00000008;
  char acStack_414 [1024];
  byte *puStack_14;
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf(acStack_414,in_stack_00000008,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_FUN_0047fa80(in_stack_00000004);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01c5b0e0,acStack_414,_DAT_01c6b5a8,_DAT_01c6b5ac,_DAT_01c5bb20,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  return;
}
