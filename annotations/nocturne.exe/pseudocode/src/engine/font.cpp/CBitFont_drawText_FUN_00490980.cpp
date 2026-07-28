// Name: engine_font.cpp_CBitFont_drawText_FUN_00490980
// Address: 00490980
// Address Range: [[00490980, 00490ae6]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_14;
  
  iVar2 = x;
  if (this_ptr->win_font_enabled == 0) {
    for (; cVar1 = *text, cVar1 != '\0'; text = text + 1) {
      if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          y = y + this_ptr->current_line_height + this_ptr->line_spacing;
          iVar2 = x;
        }
        else {
          iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                            (this_ptr,cVar1,iVar2,y,color_mode,color_value);
          iVar2 = iVar2 + iVar3;
        }
      }
    }
    return iVar2 - x;
  }
  if (this_ptr->win_font_helper == (CWinFont *)0x0) {
    PTR_01cc4800 = "..\\engine\\font.cpp";
    INT_01cc4804 = 0x267;
    core_main_c_FUN_004c8440("CBitFont::drawText - OSFont not set before DrawText called");
  }
  local_14 = text;
  do {
    pcVar4 = text;
    if (*text == '\n') goto LAB_004909d3;
    if (*text == '\0') goto LAB_004909d1;
    pcVar4 = text + 1;
    if (*pcVar4 == '\n') goto LAB_004909d3;
    text = text + 2;
    if (*pcVar4 == '\0') {
LAB_004909d1:
      pcVar4 = (char *)0x0;
LAB_004909d3:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      iVar2 = engine_palette_cpp_CFont_drawText_FUN_004eefd0
                        (&this_ptr->win_font_helper->base,local_14,x,y,color_mode,color_value);
      if (iVar2 == -1) {
        this_ptr->win_font_enabled = 0;
        iVar2 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                          (this_ptr,local_14,x,y,color_mode,color_value);
        this_ptr->win_font_enabled = 1;
      }
      if (pcVar4 == (char *)0x0) {
        return iVar2;
      }
      text = pcVar4 + 1;
      *pcVar4 = '\n';
      y = y + this_ptr->current_line_height + this_ptr->line_spacing;
      local_14 = text;
    }
  } while( true );
}
