// Name: shape_edittool.cpp_FUN_00486670
// Address: 00486670
// Address Range: [[00486670, 00486751]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00486670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_00486670(void)

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
    in_stack_00000010 = (char *)0x5bd95b;
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
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30
                    (_DAT_01c5b0e0,in_stack_00000004->checkbox_text);
  in_stack_00000004->right_boundary = in_stack_00000004->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(in_stack_00000004);
  iVar2 = in_stack_00000004->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(in_stack_00000004);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                    (_DAT_01c5b0e0,in_stack_00000004->checkbox_text);
  in_stack_00000004->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
