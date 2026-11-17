// Name: shape_edittool.cpp_CInputString_draw_FUN_0047afb0
// Address: 0047afb0
// Address Range: [[0047afb0, 0047b1eb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0047afb0(CInputString *this_ptr,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b117) */

void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0047afb0(CInputString *this_ptr,int x_pos,int y_pos)

{
  int y2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int x2;
  CBitFont *this_ptr_00;
  char *text;
  
  y2 = g_INT_01c25f7c + y_pos;
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->selection_start);
    iVar2 = iVar2 + x_pos;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->cursor_position);
    iVar3 = iVar3 + x_pos;
    x2 = iVar3;
    if (iVar3 < iVar2) {
      x2 = iVar2;
      iVar2 = iVar3;
    }
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(iVar2,y_pos,x2,y2,g_INT_01c263a8);
    }
    else {
      iVar3 = (g_INT_01c263a8 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8);
      engine_mini3d_cpp_fillRect_FUN_004f90d0(iVar2,y_pos,x2,y2);
    }
  }
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  this_ptr_00 = g_CBitFont_PTR_01c25590;
  text = this_ptr->string_data;
  iVar2 = g_INT_01c263ac;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
      g_INT_01d046a4 = 0x223;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CInputString::draw - string too big for hidden text!");
    }
    memset(g_CHAR_ARRAY_01c25f88,0x2a,this_ptr->current_length);
    iVar2 = g_INT_01c263ac;
    this_ptr_00 = g_CBitFont_PTR_01c25590;
    text = g_CHAR_ARRAY_01c25f88;
    g_CHAR_ARRAY_01c25f88[this_ptr->current_length] = '\0';
  }
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0(this_ptr_00,text,x_pos,y_pos,iVar2,-1);
  uVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  if ((uVar1 & 0x40000) != 0) {
    if (g_INT_01c25f84 == 0) {
      g_INT_01c35e60 = g_INT_01c263b0;
    }
    else {
      iVar2 = (g_INT_01c263b0 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar2 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar2] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar2 + 1] << 8);
    }
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004011a0(x_pos + iVar2,y_pos,x_pos + iVar2,y2);
  }
  return;
}
