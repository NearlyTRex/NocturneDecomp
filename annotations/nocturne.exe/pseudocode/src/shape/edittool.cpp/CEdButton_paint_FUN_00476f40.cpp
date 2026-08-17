// Name: shape_edittool.cpp_CEdButton_paint_FUN_00476f40
// Address: 00476f40
// Address Range: [[00476f40, 00476fc5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_00476f40(CEdButton *this_ptr,int draw_border_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_00476f40(CEdButton *this_ptr,int draw_border_flag)

{
  int *text;
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_draw3DBorder_FUN_00476260
            (this_ptr->shortcut_key,this_ptr->left,this_ptr->top,this_ptr->right,this_ptr->bottom);
  text = &this_ptr->button_state;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,(char *)text);
  iVar2 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,(char *)text);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,(char *)text,((this_ptr->shortcut_key + this_ptr->top) - iVar1) / 2,
             ((this_ptr->left + this_ptr->right) - iVar2) / 2,0,-1);
  return;
}
