// Name: shape_edittool.cpp_CInputString_draw_FUN_004934b0
// Address: 004934b0
// Address Range: [[004934b0, 0049371d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_004934b0(CInputString *this_ptr,int x_pos,int y_pos)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00493638) */

void __cdecl shape_edittool_cpp_CInputString_draw_FUN_004934b0(CInputString *this_ptr,int x_pos,int y_pos)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int y2;
  CInputString *text;
  CInputString local_420 [3];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  y2 = g_INT_01c3f53c + y_pos;
  if (this_ptr->selection_start != this_ptr->cursor_position) {
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(this_ptr,this_ptr->selection_start);
    iVar2 = x_pos + iVar2;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(this_ptr,this_ptr->cursor_position);
    iVar3 = iVar3 + x_pos;
    local_18 = iVar3;
    local_1c = iVar2;
    if (iVar3 < iVar2) {
      local_18 = iVar2;
      local_1c = iVar3;
    }
    local_14 = y_pos;
    local_20 = y2;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_1c,y_pos,local_18,y2,g_SelectionColor);
    }
    else {
      iVar2 = (g_SelectionColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 2]);
      engine_mini3d_cpp_fillRect_FUN_00518010(local_1c,local_14,local_18,local_20);
    }
  }
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
  text = this_ptr;
  if (this_ptr->mask_mode != 0) {
    if (0x3ff < (uint)this_ptr->current_length) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 558;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CInputString::draw - string too big for hidden text!");
    }
    memset(local_420,0x2a,this_ptr->current_length);
    local_420[0].string_data[this_ptr->current_length] = '\0';
    text = local_420;
  }
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_01c3eb50,text->string_data,x_pos,y_pos,g_TextColor,-1);
  uVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  if ((uVar1 & 0x40000) != 0) {
    if (g_INT_01c3f544 == 0) {
      g_INT_01c4f020 = g_CursorColor;
    }
    else {
      iVar2 = (g_CursorColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 1] << 8);
    }
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(this_ptr,this_ptr->cursor_position);
    engine_2d_c_drawLine_FUN_004011a0(iVar2 + x_pos,y_pos,iVar2 + x_pos,y2);
  }
  return;
}
