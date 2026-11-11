// Name: shape_edittool.cpp_FUN_0048666e
// Address: 0048666e
// Address Range: [[0048666e, 00486751]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0048666e(CEdCheck *param_1,int param_2,int param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0048666e(CEdCheck *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_4 == (char *)0x0) {
    param_4 = (char *)0x5bd95b;
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
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(_DAT_01c5b0e0,param_1->checkbox_text);
  param_1->right_boundary = param_1->y_position + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(param_1);
  iVar2 = param_1->x_position;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(param_1);
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01c5b0e0,param_1->checkbox_text);
  param_1->total_width = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
