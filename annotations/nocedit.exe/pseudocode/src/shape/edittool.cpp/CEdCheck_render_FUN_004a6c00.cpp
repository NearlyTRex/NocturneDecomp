// Name: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
// Address: 004a6c00
// Address Range: [[004a6c00, 004a6d16]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdCheck_render_FUN_004a6c00(CEdCheck * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *unaff_EBX;
  int left;
  int in_stack_00000008;
  int iVar5;
  int color_mode;
  
  iVar2 = this_ptr->y_position;
  iVar5 = this_ptr->right_boundary;
  left = this_ptr->x_position;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar1 = ((iVar2 + iVar5) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  iVar2 = iVar2 + left;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar3 = iVar1 + iVar3;
  engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,this_ptr->checkbox_text);
  color_mode = -1;
  iVar5 = this_ptr->coord_unk;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(this_ptr);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,unaff_EBX,iVar4 + iVar2,iVar5,color_mode,iVar3);
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0
            (left,iVar1,iVar2,(int)this_ptr,this_ptr->border_style_flag);
  if (this_ptr->border_style_flag == 0) {
    in_stack_00000008 = in_stack_00000008 + -1;
    iVar2 = iVar2 + -1;
    if (this_ptr->checked_state != 1) {
      return;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    left = left + 1;
    if (this_ptr->checked_state != 1) {
      return;
    }
  }
  g_ActiveRenderColor = 0;
  engine_2d_c_clipLineGlobal_FUN_00402c50
            ((int *)(left + 1),(int *)(iVar1 + 1),(int *)(iVar2 + -2),
             (int *)(in_stack_00000008 + -2));
  engine_2d_c_clipLineGlobal_FUN_00402c50
            ((int *)(iVar2 + -2),(int *)(iVar1 + 1),(int *)(left + 1),
             (int *)(in_stack_00000008 + -2));
  return;
}
