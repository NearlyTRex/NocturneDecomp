// Name: engine_font.cpp_CBitFont_drawText_FUN_004b0a20
// Address: 004b0a20
// Address Range: [[004b0a20, 004b0ca2]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004b0a20(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004b0a20(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  CBitFont *this_ptr_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  char *text_00;
  char *pcVar4;
  uint uVar5;
  int y_00;
  double dVar6;
  
  this_ptr_00 = this_ptr;
  if ((this_ptr->use_3d_rendering != 0) && (g_INT_01c6cee8 != 0)) {
    if (this_ptr->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_CBitFont_drawTextAccelerated_FUN_004b33d0
                        (this_ptr,text,x,y,color_mode);
    }
    else {
      iVar1 = engine_palette_cpp_CFont_queueText_FUN_00509bc0
                        (&this_ptr->win_font_helper->base,text,x,y,color_mode,color_value);
    }
    return iVar1;
  }
  text_00 = text;
  if (this_ptr->win_font_enabled != 0) {
    do {
      pcVar4 = text;
      if (*text == '\n') goto LAB_004b0ac4;
      if (*text == '\0') goto LAB_004b0ac2;
      pcVar4 = text + 1;
      if (*pcVar4 == '\n') goto LAB_004b0ac4;
      text = text + 2;
      if (*pcVar4 == '\0') {
LAB_004b0ac2:
        pcVar4 = (char *)0x0;
LAB_004b0ac4:
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        engine_palette_cpp_CFont_queueText_FUN_00509bc0
                  (&this_ptr->win_font_helper->base,text_00,x,y,color_mode,color_value);
        engine_palette_cpp_CFont_flushTextQueue_FUN_00509d90(&this_ptr->win_font_helper->base);
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
        *pcVar4 = '\n';
        text = pcVar4 + 1;
        y = y + this_ptr->current_line_height + this_ptr->line_spacing;
        text_00 = text;
      }
    } while( true );
  }
  iVar1 = x;
  y_00 = y;
  if (this_ptr->use_3d_rendering == 0) goto LAB_004b0b31;
  if (color_mode == -2) {
    if (g_INT_005fba20 == 0x20) {
      uVar5 = g_INT_01d1ad68 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
              g_INT_01d1ad6c << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
      uVar2 = g_INT_01d1ad70 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
    }
    else {
      uVar5 = g_INT_01d1ad6c << 8 | g_INT_01d1ad68 << 0x10;
      uVar2 = g_INT_01d1ad70;
    }
LAB_004b0b9b:
    uVar5 = uVar5 | uVar2;
  }
  else {
    if (-1 < color_mode) {
      iVar3 = color_mode * 3;
      uVar5 = (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2];
      if (g_INT_005fba20 == 0x20) {
        uVar2 = (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] <<
                (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
                (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f);
        uVar5 = uVar5 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
      }
      else {
        uVar2 = (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
                (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8;
      }
      goto LAB_004b0b9b;
    }
    uVar5 = 0xffffff;
  }
  dVar6 = round((double)(g_FLOAT_01d76c40 * (float)255));
  this_ptr->accel_color = uVar5 | (int)ROUND(dVar6) << 0x18;
LAB_004b0b31:
  while (uVar5 = (uint)(byte)this_ptr->bitmap_count, uVar5 != 0) {
    if (uVar5 == 0xd) {
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
    }
    else if (uVar5 == 10) {
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
      iVar1 = x;
      y_00 = y_00 + this_ptr_00->current_line_height + this_ptr_00->line_spacing;
    }
    else {
      iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004b1460
                        (this_ptr_00,uVar5,iVar1,y_00,y,color_mode);
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1 - x;
}
