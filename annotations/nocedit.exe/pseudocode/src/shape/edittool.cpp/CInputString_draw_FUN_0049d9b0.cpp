// Name: shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
// Address: 0049d9b0
// Address Range: [[0049d9b0, 0049db0c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0049d9b0(CInputString *this_ptr,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_draw_FUN_0049d9b0(CInputString *this_ptr,int x_pos,int y_pos)

{
  int y2;
  uint uVar1;
  int iVar2;
  int x2;
  int iVar3;
  CBitFont *this_ptr_00;
  char *text;
  
  y2 = g_FontCharacterWidth + y_pos;
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->selection_start);
    iVar3 = x_pos + iVar3;
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->cursor_position);
    iVar2 = iVar2 + x_pos;
    x2 = iVar2;
    if (iVar2 < iVar3) {
      x2 = iVar3;
      iVar3 = iVar2;
    }
    engine_2d_c_fillRectColor_FUN_00403170(iVar3,y_pos,x2,y2,g_SelectionColor);
  }
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  this_ptr_00 = g_EditorFont;
  text = this_ptr->string_data;
  iVar3 = g_TextColor;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x1dc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInputString::draw - string too big for hidden text!");
    }
    memset(g_TempStringBuffer,0x2a,this_ptr->current_length);
    iVar3 = g_TextColor;
    this_ptr_00 = g_EditorFont;
    text = g_TempStringBuffer;
    g_TempStringBuffer[this_ptr->current_length] = '\0';
  }
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr_00,text,x_pos,y_pos,iVar3,-1);
  uVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((uVar1 & 0x40000) != 0) {
    g_ActiveRenderColor = g_CursorColor;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004011b0(iVar3 + x_pos,y_pos,iVar3 + x_pos,y2);
    return;
  }
  return;
}
