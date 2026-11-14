// Name: shape_edittool.cpp_FUN_00485470
// Address: 00485470
// Address Range: [[00485470, 00485551]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00485470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00485470(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CEdCheck *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  char *in_stack_00000010;
  
  if (in_stack_00000010 == (char *)0x0) {
    in_stack_00000010 = (char *)0x5d2b05;
  }
  in_stack_00000004->x_position = in_stack_00000008;
  pcVar6 = in_stack_00000004->checkbox_text;
  in_stack_00000004->y_position = in_stack_0000000c;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0
                    (_DAT_01c25590,in_stack_00000004->checkbox_text);
  in_stack_00000004->right_boundary = in_stack_00000004->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(in_stack_00000004);
  iVar2 = in_stack_00000004->x_position;
  iVar4 = shape_edittool_cpp_FUN_004855f0();
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00
                    (_DAT_01c25590,in_stack_00000004->checkbox_text);
  in_stack_00000004->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
