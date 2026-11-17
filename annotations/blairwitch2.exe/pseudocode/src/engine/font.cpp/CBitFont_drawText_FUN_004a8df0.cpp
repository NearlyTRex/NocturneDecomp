// Name: engine_font.cpp_CBitFont_drawText_FUN_004a8df0
// Address: 004a8df0
// Address Range: [[004a8df0, 004a90a3]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004a8df0(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004a8df0(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int y_00;
  double dVar6;
  char *local_14;
  
  if ((this_ptr->use_3d_rendering != 0) && (g_INT_01c37788 != 0)) {
    if (this_ptr->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_CBitFont_drawTextAccelerated_FUN_004ab840
                        (this_ptr,text,x,y,color_mode);
    }
    else {
      iVar1 = engine_palette_cpp_CFont_queueText_FUN_00510cd0
                        (&this_ptr->win_font_helper->base,text,x,y,color_mode,color_value);
    }
    return iVar1;
  }
  if (this_ptr->win_font_enabled != 0) {
    local_14 = text;
    do {
      pcVar5 = text;
      if (*text == '\n') goto LAB_004a8e88;
      if (*text == '\0') goto LAB_004a8e86;
      pcVar5 = text + 1;
      if (*pcVar5 == '\n') goto LAB_004a8e88;
      text = text + 2;
      if (*pcVar5 == '\0') {
LAB_004a8e86:
        pcVar5 = (char *)0x0;
LAB_004a8e88:
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        iVar1 = (*((this_ptr->win_font_helper->base).vtable)->drawText)
                          (this_ptr->win_font_helper,local_14,x,y,color_mode,color_value);
        if (iVar1 == -1) {
          this_ptr->win_font_enabled = 0;
          iVar1 = engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                            (this_ptr,local_14,x,y,color_mode,color_value);
          this_ptr->win_font_enabled = 1;
        }
        if (pcVar5 == (char *)0x0) {
          return iVar1;
        }
        text = pcVar5 + 1;
        *pcVar5 = '\n';
        y = y + this_ptr->current_line_height + this_ptr->line_spacing;
        local_14 = text;
      }
    } while( true );
  }
  iVar1 = x;
  y_00 = y;
  if (this_ptr->use_3d_rendering == 0) goto LAB_004a8f2c;
  if (color_mode == -2) {
    if (g_INT_006141c0 == 0x20) {
      uVar2 = g_INT_01cb024c << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
              g_INT_01cb0248 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      uVar4 = g_INT_01cb0250;
LAB_004a8f94:
      uVar2 = uVar4 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) | uVar2;
    }
    else {
      uVar2 = g_INT_01cb0248 << 0x10 | g_INT_01cb024c << 8 | g_INT_01cb0250;
    }
  }
  else if (color_mode < 0) {
    uVar2 = 0xffffff;
  }
  else {
    iVar3 = color_mode * 3;
    uVar4 = (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2];
    if (g_INT_006141c0 == 0x20) {
      uVar2 = (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)
              | (uint)g_UCHAR_ARRAY_01c35838[iVar3] << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      goto LAB_004a8f94;
    }
    uVar2 = (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10 |
            (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8 | uVar4;
  }
  dVar6 = round((double)(g_FLOAT_01d09860 * (float)255));
  this_ptr->accel_color = uVar2 | (int)ROUND(dVar6) << 0x18;
LAB_004a8f2c:
  while (uVar2 = (uint)(byte)*text, uVar2 != 0) {
    if (uVar2 == 0xd) {
      text = text + 1;
    }
    else if (uVar2 == 10) {
      text = text + 1;
      iVar1 = x;
      y_00 = y_00 + this_ptr->current_line_height + this_ptr->line_spacing;
    }
    else {
      iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004a9870
                        (this_ptr,uVar2,iVar1,y_00,y,color_mode);
      text = text + 1;
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1 - x;
}
