// Name: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
// Address: 004a6c00
// Address Range: [[004a6c00, 004a6d16]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(CEdCheck *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar6;
  int iVar2;
  int iVar7;
  int iVar3;
  int iVar4;
  int left;
  int iVar8;
  int local_14;
  int iVar5;
  int color_value;
  
  iVar8 = this_ptr->y_position;
  iVar6 = this_ptr->right_boundary;
  left = this_ptr->x_position;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar6 = ((iVar8 + iVar6) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  iVar8 = iVar2 + left;
  iVar7 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  local_14 = iVar6 + iVar7;
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,this_ptr->checkbox_text);
  color_value = -1;
  iVar5 = this_ptr->text_color_mode;
  iVar7 = ((this_ptr->y_position + this_ptr->right_boundary) - iVar3) / 2;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(this_ptr);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_EditorFont,this_ptr->checkbox_text,iVar4 + iVar8,iVar7,iVar5,color_value);
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0
            (left,iVar6,iVar8,local_14,this_ptr->border_style_flag);
  if (this_ptr->border_style_flag == 0) {
    local_14 = local_14 + -1;
    iVar8 = iVar8 + -1;
    if (this_ptr->checked_state != 1) {
      return;
    }
  }
  else {
    iVar6 = iVar6 + 1;
    left = left + 1;
    if (this_ptr->checked_state != 1) {
      return;
    }
  }
  g_ActiveRenderColor = 0;
  engine_2d_c_clipLineGlobal_FUN_00402c50(left + 1,iVar6 + 1,iVar8 + -2,local_14 + -2);
  engine_2d_c_clipLineGlobal_FUN_00402c50(iVar8 + -2,iVar6 + 1,left + 1,local_14 + -2);
  return;
}
