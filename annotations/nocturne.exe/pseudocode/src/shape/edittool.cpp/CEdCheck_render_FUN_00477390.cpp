// Name: shape_edittool.cpp_CEdCheck_render_FUN_00477390
// Address: 00477390
// Address Range: [[00477390, 004774a6]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEdCheck_render_FUN_00477390(CEdCheck *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_CEdCheck_render_FUN_00477390(CEdCheck *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int left;
  int iVar5;
  int color_value;
  int local_14;
  
  iVar2 = param_1->y_position;
  iVar5 = param_1->right_boundary;
  left = param_1->x_position;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(param_1);
  iVar1 = ((iVar2 + iVar5) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(param_1);
  iVar2 = iVar2 + left;
  local_14 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(param_1);
  local_14 = iVar1 + local_14;
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,param_1->checkbox_text);
  color_value = -1;
  iVar5 = param_1->text_color_mode;
  iVar3 = ((param_1->y_position + param_1->right_boundary) - iVar3) / 2;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(param_1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,param_1->checkbox_text,iVar4 + iVar2,iVar3,iVar5,color_value);
  shape_edittool_cpp_draw3DBorder_FUN_00476260(left,iVar1,iVar2,local_14,param_1->border_style_flag)
  ;
  if (param_1->border_style_flag == 0) {
    local_14 = local_14 + -1;
    iVar2 = iVar2 + -1;
    if (param_1->checked_state != 1) {
      return;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    left = left + 1;
    if (param_1->checked_state != 1) {
      return;
    }
  }
  _DAT_01c00c70 = 0;
  engine_2d_c_clipLineGlobal_FUN_00403940(left + 1,iVar1 + 1,iVar2 + -2,local_14 + -2);
  engine_2d_c_clipLineGlobal_FUN_00403940(iVar2 + -2,iVar1 + 1,left + 1,local_14 + -2);
  return;
}
