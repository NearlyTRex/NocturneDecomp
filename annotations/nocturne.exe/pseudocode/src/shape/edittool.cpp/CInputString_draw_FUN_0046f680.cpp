// Name: shape_edittool.cpp_CInputString_draw_FUN_0046f680
// Address: 0046f680
// Address Range: [[0046f680, 0046f7dc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(CInputString *this_ptr,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(CInputString *this_ptr,int x_pos,int y_pos)

{
  int y2;
  uint uVar1;
  int iVar2;
  int x2;
  int iVar3;
  CBitFont *this_ptr_00;
  CInputString *text;
  
  y2 = _DAT_01bcd9bc + y_pos;
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(this_ptr,this_ptr->selection_start);
    iVar3 = x_pos + iVar3;
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(this_ptr,this_ptr->cursor_position);
    iVar2 = iVar2 + x_pos;
    x2 = iVar2;
    if (iVar2 < iVar3) {
      x2 = iVar3;
      iVar3 = iVar2;
    }
    engine_2d_c_fillRectColor_FUN_00403e60(iVar3,y_pos,x2,y2,_DAT_01bcdddc);
  }
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  this_ptr_00 = _DAT_01bcd070;
  text = this_ptr;
  iVar3 = _DAT_01bcdde0;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 421;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CInputString::draw - string too big for hidden text!");
    }
    memset((void *)0x1bcd9c8,0x2a,this_ptr->current_length);
    iVar3 = _DAT_01bcdde0;
    this_ptr_00 = _DAT_01bcd070;
    *(byte *)(this_ptr->current_length + 0x1bcd9c8) = 0;
    text = (CInputString *)0x1bcd9c8;
  }
  engine_font_cpp_CBitFont_drawText_FUN_00490980(this_ptr_00,text->string_data,x_pos,y_pos,iVar3,-1)
  ;
  uVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  if ((uVar1 & 0x40000) != 0) {
    _DAT_01c00c70 = _DAT_01bcdde4;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004015a0(iVar3 + x_pos,y_pos,iVar3 + x_pos,y2);
    return;
  }
  return;
}
