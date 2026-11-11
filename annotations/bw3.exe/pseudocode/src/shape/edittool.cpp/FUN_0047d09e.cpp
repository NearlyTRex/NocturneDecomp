// Name: shape_edittool.cpp_FUN_0047d09e
// Address: 0047d09e
// Address Range: [[0047d09e, 0047d197]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047d09e(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047d09e(uint param_1,uint param_2)

{
  byte auStack_414 [1024];
  byte *puStack_14;
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf(auStack_414,param_2,&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_FUN_0047fa80(param_1);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  engine_mini3d_cpp_FUN_004edaf0(0x3f800000);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01c5b0e0,auStack_414,_DAT_01c6b5a8,_DAT_01c6b5ac,_DAT_01c5bb20,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  return;
}
