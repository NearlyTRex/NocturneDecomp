// Name: shape_edittool.cpp_FUN_004771f0
// Address: 004771f0
// Address Range: [[004771f0, 004772d1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004771f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_004771f0(void)

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
    in_stack_00000010 = &DAT_0057f0fb;
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
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                    (_DAT_01bcd070,in_stack_00000004->checkbox_text);
  in_stack_00000004->right_boundary = in_stack_00000004->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(in_stack_00000004);
  iVar2 = in_stack_00000004->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(in_stack_00000004);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (_DAT_01bcd070,in_stack_00000004->checkbox_text);
  in_stack_00000004->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
