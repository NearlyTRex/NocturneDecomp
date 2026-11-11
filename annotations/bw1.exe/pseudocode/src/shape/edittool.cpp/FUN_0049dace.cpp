// Name: shape_edittool.cpp_FUN_0049dace
// Address: 0049dace
// Address Range: [[0049dace, 0049dbb1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049dace(CEdCheck *param_1,int param_2,int param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0049dace(CEdCheck *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_4 == (char *)0x0) {
    param_4 = (char *)0x5dc89e;
  }
  param_1->x_position = param_2;
  pcVar6 = param_1->checkbox_text;
  param_1->y_position = param_3;
  do {
    cVar1 = *param_4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
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
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,param_1->checkbox_text);
  param_1->right_boundary = param_1->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(param_1);
  iVar2 = param_1->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_0049dc50(param_1);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,param_1->checkbox_text);
  param_1->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
