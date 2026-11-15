// Name: engine_font.cpp_CBitFont_drawText_FUN_004c1dd0
// Address: 004c1dd0
// Address Range: [[004c1dd0, 004c2052]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004c1dd0(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004c1dd0(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  CBitFont *this_ptr_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int y_00;
  double dVar7;
  
  this_ptr_00 = this_ptr;
  if ((this_ptr->use_3d_rendering != 0) && (_DAT_01c50948 != 0)) {
    if (this_ptr->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_FUN_004c47f0(this_ptr,text,x,y,color_mode);
    }
    else {
      iVar1 = engine_palette_cpp_FUN_00531ee0
                        (this_ptr->win_font_helper,text,x,y,color_mode,color_value);
    }
    return iVar1;
  }
  pcVar4 = text;
  if (this_ptr->win_font_enabled != 0) {
    do {
      pcVar5 = text;
      if (*text == '\n') goto LAB_004c1e74;
      if (*text == '\0') goto LAB_004c1e72;
      pcVar5 = text + 1;
      if (*pcVar5 == '\n') goto LAB_004c1e74;
      text = text + 2;
      if (*pcVar5 == '\0') {
LAB_004c1e72:
        pcVar5 = (char *)0x0;
LAB_004c1e74:
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        engine_palette_cpp_FUN_00531ee0(this_ptr->win_font_helper,pcVar4,x,y,color_mode,color_value)
        ;
        engine_palette_cpp_FUN_005320b0(this_ptr->win_font_helper);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        *pcVar5 = '\n';
        text = pcVar5 + 1;
        y = y + this_ptr->current_line_height + this_ptr->line_spacing;
        pcVar4 = text;
      }
    } while( true );
  }
  iVar1 = x;
  y_00 = y;
  if (this_ptr->use_3d_rendering == 0) goto LAB_004c1ee1;
  if (color_mode == -2) {
    if (DAT_0061b4a0 == 0x20) {
      uVar6 = _DAT_01cc8cd8 << (DAT_01c4e9d4 & 0x1f) | _DAT_01cc8cdc << (DAT_01c4e9e0 & 0x1f);
      uVar2 = _DAT_01cc8ce0 << (DAT_01c4e9ec & 0x1f);
    }
    else {
      uVar6 = _DAT_01cc8cdc << 8 | _DAT_01cc8cd8 << 0x10;
      uVar2 = _DAT_01cc8ce0;
    }
LAB_004c1f4b:
    uVar6 = uVar6 | uVar2;
  }
  else {
    if (-1 < color_mode) {
      iVar3 = color_mode * 3;
      uVar6 = (uint)(byte)(&DAT_01c4e9fa)[iVar3];
      if (DAT_0061b4a0 == 0x20) {
        uVar2 = (uint)(byte)(&DAT_01c4e9f9)[iVar3] << (DAT_01c4e9e0 & 0x1f) |
                (uint)(byte)(&DAT_01c4e9f8)[iVar3] << (DAT_01c4e9d4 & 0x1f);
        uVar6 = uVar6 << (DAT_01c4e9ec & 0x1f);
      }
      else {
        uVar2 = (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8
        ;
      }
      goto LAB_004c1f4b;
    }
    uVar6 = 0xffffff;
  }
  dVar7 = round((double)(_DAT_01d224c0 * (float)_DAT_005e0a56));
  this_ptr->accel_color = uVar6 | (int)ROUND(dVar7) << 0x18;
LAB_004c1ee1:
  while (uVar6 = (uint)(byte)this_ptr->bitmap_count, uVar6 != 0) {
    if (uVar6 == 0xd) {
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
    }
    else if (uVar6 == 10) {
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
      iVar1 = x;
      y_00 = y_00 + this_ptr_00->current_line_height + this_ptr_00->line_spacing;
    }
    else {
      iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004c2810
                        (this_ptr_00,uVar6,iVar1,y_00,y,color_mode);
      this_ptr = (CBitFont *)((int)&this_ptr->bitmap_count + 1);
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1 - x;
}
