// Name: engine_font.cpp_CBitFont_drawText_FUN_004b0a20
// Address: 004b0a20
// Address Range: [[004b0a20, 004b0ca2]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004b0a20(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004b0a20(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint extraout_ECX;
  char *pcVar4;
  uint character_code;
  float10 fVar5;
  
  if ((this_ptr->use_3d_rendering != 0) && (_DAT_01c6cee8 != 0)) {
    if (this_ptr->win_font_enabled == 0) {
      iVar1 = engine_font_cpp_FUN_004b33d0(this_ptr,text,x,y,color_mode);
    }
    else {
      iVar1 = engine_palette_cpp_FUN_00509bc0
                        (this_ptr->win_font_helper,text,x,y,color_mode,color_value);
    }
    return iVar1;
  }
  pcVar3 = text;
  if (this_ptr->win_font_enabled == 0) {
    iVar1 = x;
    if (this_ptr->use_3d_rendering != 0) {
      fVar5 = (float10)_DAT_01d76c40 * (float10)_DAT_005c2074;
      round();
      this_ptr->accel_color = extraout_ECX | (int)ROUND(fVar5) << 0x18;
    }
    while (character_code = (uint)(byte)*text, character_code != 0) {
      if (character_code == 0xd) {
        text = text + 1;
      }
      else if (character_code == 10) {
        y = y + this_ptr->current_line_height + this_ptr->line_spacing;
        text = text + 1;
        iVar1 = x;
      }
      else {
        iVar2 = engine_font_cpp_FUN_004b1460(this_ptr,character_code,iVar1,y,color_mode,color_value)
        ;
        text = text + 1;
        iVar1 = iVar1 + iVar2;
      }
    }
    return iVar1 - x;
  }
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
      engine_palette_cpp_FUN_00509bc0(this_ptr->win_font_helper,pcVar3,x,y,color_mode,color_value);
      engine_palette_cpp_FUN_00509d90(this_ptr->win_font_helper);
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      *pcVar4 = '\n';
      text = pcVar4 + 1;
      y = y + this_ptr->current_line_height + this_ptr->line_spacing;
      pcVar3 = text;
    }
  } while( true );
}
