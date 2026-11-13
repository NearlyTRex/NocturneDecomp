// Name: shape_edittool.cpp_FUN_0049dad0
// Address: 0049dad0
// Address Range: [[0049dad0, 0049dbb1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049dad0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_0049dad0(void)

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
    in_stack_00000010 = (char *)0x5dc89e;
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
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50
                    (_DAT_01c3eb50,in_stack_00000004->checkbox_text);
  in_stack_00000004->right_boundary = in_stack_00000004->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(in_stack_00000004);
  iVar2 = in_stack_00000004->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_0049dc50(in_stack_00000004);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                    (_DAT_01c3eb50,in_stack_00000004->checkbox_text);
  in_stack_00000004->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
