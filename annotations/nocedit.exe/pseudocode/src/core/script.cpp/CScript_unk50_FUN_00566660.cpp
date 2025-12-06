// Name: core_script.cpp_CScript_unk50_FUN_00566660
// Address: 00566660
// Address Range: [[00566660, 005667f9]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_unk50_FUN_00566660()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_script.cpp_CScript_unk50(CScript* param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

void core_script_cpp_CScript_unk50_FUN_00566660(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  DAT_03114200 = g_ConsoleFont;
  iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ConsoleFont,0x4d);
  iVar2 = shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(DAT_03114200);
  DAT_03114204 = iVar1 + iVar2;
  DAT_03114208 = shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(DAT_03114200);
  DAT_031141d4 = in_stack_00000018;
  DAT_031141d8 = in_stack_0000001c + 1;
  DAT_031141dc = in_stack_00000020 + 1;
  DAT_031141d0 = in_stack_00000008;
  DAT_031141f4 = DAT_031141dc - DAT_03114208;
  DAT_031141f0 = in_stack_00000008;
  DAT_031141f8 = DAT_031141d8;
  _DAT_031141fc = DAT_031141dc;
  iVar1 = shape_edittool_cpp_calculateGridHeight_FUN_004a64b0();
  iVar2 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  DAT_031141e0 = DAT_031141d0;
  DAT_031141e4 = DAT_031141d4 + 1;
  DAT_031141e8 = DAT_031141d8 - iVar2;
  DAT_031141ec = DAT_031141f4 - iVar1;
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)&DAT_0310fd0c,DAT_031141d0,DAT_031141ec,DAT_031141e8,DAT_031141f4);
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            ((CEdScrollBar *)&DAT_0310fcd8,DAT_031141e8,DAT_031141e4,DAT_031141d8,DAT_031141ec);
  DAT_0310fce0 = (DAT_031141ec - DAT_031141e4) / DAT_03114208;
  DAT_0310fd14 = (DAT_031141e8 - DAT_031141e0) / DAT_03114204;
  iVar1 = 0;
  DAT_0310fd10 = 0;
  DAT_0310fcdc = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                           ((CBitFont *)(in_stack_00000004 + 0x38));
  while( true ) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (iVar2 <= iVar1) break;
    core_script_cpp_FUN_00566800();
    iVar1 = iVar1 + 1;
  }
  core_script_cpp_FUN_005644e0();
  return;
}
