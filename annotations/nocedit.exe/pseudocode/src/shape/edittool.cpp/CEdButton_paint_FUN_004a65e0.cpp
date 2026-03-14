// Name: shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
// Address: 004a65e0
// Address Range: [[004a65e0, 004a6826]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(CEdButton *this_ptr,int draw_border_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(CEdButton *this_ptr,int draw_border_flag)

{
  char *text;
  char cVar2;
  byte bVar3;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  uint uVar5;
  int iVar8;
  uint uVar6;
  int iVar9;
  int iVar10;
  char *pcVar7;
  byte *pbVar12;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte local_dc [200];
  int local_14;
  char cVar1;
  
  iVar9 = g_ClipTop;
  bVar12 = 0;
  g_ClipTop = this_ptr->top;
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0
            (this_ptr->left,g_ClipTop,this_ptr->right,this_ptr->bottom,this_ptr->button_state);
  text = this_ptr->button_text;
  g_ClipTop = iVar9;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,text);
  iVar4 = engine_font_cpp_CBitFont_getCharYOffset_FUN_004d0200(g_EditorFont,0x41);
  iVar10 = this_ptr->button_state + ((this_ptr->right + this_ptr->left) - iVar2) / 2;
  iVar9 = this_ptr->button_state + ((this_ptr->top + this_ptr->bottom) - (iVar3 + iVar4)) / 2;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_EditorFont,text,iVar10,iVar9,g_UITextColor,-1);
  g_ActiveRenderColor = g_UITextColor;
  if (draw_border_flag != 0) {
    shape_edittool_cpp_drawDashedLine_FUN_0049d290
              (this_ptr->left + 3,this_ptr->top + 3,this_ptr->right + -5,this_ptr->bottom + -4,1);
  }
  pbVar10 = local_dc;
  pbVar8 = local_dc;
  pbVar11 = local_dc;
  pcVar7 = this_ptr->button_text;
  do {
    cVar1 = *pcVar7;
    *pbVar10 = cVar1;
    if (cVar1 == '\0') break;
    bVar3 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pbVar10[1] = bVar3;
    pbVar10 = pbVar10 + 2;
  } while (bVar3 != 0);
  uVar7 = 0;
  do {
    uVar6 = 0xffffffff;
    pbVar12 = local_dc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pbVar12;
      pbVar12 = pbVar12 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 <= uVar7) break;
    iVar5 = toupper((uint)local_dc[uVar7]);
    local_dc[uVar7] = (byte)iVar5;
    uVar7 = uVar7 + 1;
  } while( true );
  iVar5 = toupper((uint)(byte)this_ptr->shortcut_key);
  do {
    pbVar12 = pbVar8;
    if (*pbVar8 == (byte)iVar5) goto LAB_004a6754;
    if (*pbVar8 == 0) break;
    pbVar12 = pbVar8 + 1;
    if (*pbVar12 == (byte)iVar5) goto LAB_004a6754;
    pbVar8 = pbVar8 + 2;
  } while (*pbVar12 != 0);
  pbVar12 = (byte *)0x0;
LAB_004a6754:
  if (pbVar12 == (byte *)0x0) {
    return;
  }
  pcVar9 = this_ptr->button_text;
  do {
    bVar3 = *pcVar9;
    *pbVar11 = bVar3;
    if (bVar3 == 0) break;
    bVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pbVar11[1] = bVar3;
    pbVar11 = pbVar11 + 2;
  } while (bVar3 != 0);
  *pbVar12 = 0;
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,(char *)local_dc);
  uVar5 = iVar5 + g_EditorFont->char_spacing;
  bVar3 = this_ptr->button_text[0];
  uVar7 = toupper((uint)(byte)this_ptr->shortcut_key);
  if (uVar7 == bVar3) {
    uVar5 = uVar7 ^ bVar3;
  }
  iVar10 = iVar10 + uVar5;
  iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x41);
  g_ActiveRenderColor = g_UITextColor;
  iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0
                    (g_EditorFont,(uint)(byte)this_ptr->shortcut_key);
  engine_2d_c_drawHLine_FUN_00402ee0(iVar10,iVar9 + iVar5 + 1,iVar8 + iVar10 + -1);
  return;
}
