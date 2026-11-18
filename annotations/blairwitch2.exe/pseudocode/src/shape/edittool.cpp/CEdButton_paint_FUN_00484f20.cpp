// Name: shape_edittool.cpp_CEdButton_paint_FUN_00484f20
// Address: 00484f20
// Address Range: [[00484f20, 00485230]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_00484f20(CEdButton *this_ptr,int draw_border_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_00484f20(CEdButton *this_ptr,int draw_border_flag)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte local_dc [200];
  int local_14;
  
  iVar2 = g_INT_01c35e4c;
  bVar12 = 0;
  g_INT_01c35e4c = this_ptr->top;
  shape_edittool_cpp_draw3DBorder_FUN_00483ea0
            (this_ptr->left,g_INT_01c35e4c,this_ptr->right,this_ptr->bottom,this_ptr->button_state);
  pcVar7 = this_ptr->button_text;
  g_INT_01c35e4c = iVar2;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_EditorFont,pcVar7);
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(g_EditorFont,pcVar7);
  iVar4 = engine_font_cpp_CBitFont_getCharYOffset_FUN_004ab590(g_EditorFont,0x41);
  iVar2 = this_ptr->button_state + ((this_ptr->right + this_ptr->left) - iVar2) / 2;
  local_14 = this_ptr->button_state + ((this_ptr->top + this_ptr->bottom) - (iVar3 + iVar4)) / 2;
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_EditorFont,pcVar7,iVar2,local_14,g_UITextColor,-1);
  if (g_INT_01c25f84 == 0) {
    g_INT_01c35e60 = g_UITextColor;
  }
  else {
    iVar3 = (g_UITextColor & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10);
  }
  pbVar10 = local_dc;
  pbVar8 = local_dc;
  pbVar11 = local_dc;
  if (draw_border_flag != 0) {
    shape_edittool_cpp_drawDashedLine_FUN_0047a590
              (this_ptr->left + 3,this_ptr->top + 3,this_ptr->right + -5,this_ptr->bottom + -4,1);
  }
  pcVar7 = this_ptr->button_text;
  do {
    cVar1 = *pcVar7;
    *pbVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pbVar10[1] = cVar1;
    pbVar10 = pbVar10 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  do {
    uVar6 = 0xffffffff;
    pbVar10 = local_dc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pbVar10;
      pbVar10 = pbVar10 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 <= uVar5) break;
    iVar3 = toupper((uint)local_dc[uVar5]);
    local_dc[uVar5] = (byte)iVar3;
    uVar5 = uVar5 + 1;
  } while( true );
  iVar3 = toupper((uint)(byte)this_ptr->shortcut_key);
  do {
    pcVar7 = (char *)pbVar8;
    if (*pbVar8 == (char)iVar3) goto LAB_004850e7;
    if (*pbVar8 == '\0') break;
    pcVar7 = (char *)(pbVar8 + 1);
    if (*pcVar7 == (char)iVar3) goto LAB_004850e7;
    pbVar8 = pbVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004850e7:
  if (pcVar7 == (char *)0x0) {
    return;
  }
  pcVar9 = this_ptr->button_text;
  do {
    cVar1 = *pcVar9;
    *pbVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pbVar11[1] = cVar1;
    pbVar11 = pbVar11 + 2;
  } while (cVar1 != '\0');
  *pcVar7 = '\0';
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_EditorFont,(char *)local_dc);
  uVar5 = iVar3 + g_EditorFont->char_spacing;
  bVar12 = this_ptr->button_text[0];
  uVar6 = toupper((uint)(byte)this_ptr->shortcut_key);
  if (uVar6 == bVar12) {
    uVar5 = uVar6 ^ bVar12;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x41);
  local_14 = local_14 + iVar3 + 1;
  iVar3 = g_UITextColor;
  if (g_INT_01c25f84 != 0) {
    iVar3 = (g_UITextColor & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10);
    iVar3 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = iVar3;
  iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530
                    (g_EditorFont,(uint)(byte)this_ptr->shortcut_key);
  iVar3 = iVar3 + iVar2 + -1;
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar2,local_14,iVar3);
    return;
  }
  engine_mini3d_cpp_drawHLine_FUN_004f9390(iVar2,local_14,iVar3);
  return;
}
