// Name: engine_font.cpp_CBitFont_drawText_FUN_00490980
// Address: 00490980
// Address Range: [[00490980, 00490ae6]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint character_code;
  char *local_14;
  
  iVar1 = x;
  if (this_ptr->win_font_enabled == 0) {
    for (; character_code = (uint)(byte)*text, character_code != 0; text = text + 1) {
      if (character_code != 0xd) {
        if (character_code == 10) {
          y = y + this_ptr->current_line_height + this_ptr->line_spacing;
          iVar1 = x;
        }
        else {
          iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                            (this_ptr,character_code,iVar1,y,color_mode,color_value);
          iVar1 = iVar1 + iVar2;
        }
      }
    }
    return iVar1 - x;
  }
  if (this_ptr->win_font_helper == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 615;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CBitFont::drawText - OSFont not set before DrawText called");
  }
  local_14 = text;
  do {
    pcVar3 = text;
    if (*text == '\n') goto LAB_004909d3;
    if (*text == '\0') goto LAB_004909d1;
    pcVar3 = text + 1;
    if (*pcVar3 == '\n') goto LAB_004909d3;
    text = text + 2;
    if (*pcVar3 == '\0') {
LAB_004909d1:
      pcVar3 = (char *)0x0;
LAB_004909d3:
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
      iVar1 = engine_palette_cpp_CFont_drawText_FUN_004eefd0
                        (&this_ptr->win_font_helper->base,local_14,x,y,color_mode,color_value);
      if (iVar1 == -1) {
        this_ptr->win_font_enabled = 0;
        iVar1 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                          (this_ptr,local_14,x,y,color_mode,color_value);
        this_ptr->win_font_enabled = 1;
      }
      if (pcVar3 == (char *)0x0) {
        return iVar1;
      }
      text = pcVar3 + 1;
      *pcVar3 = '\n';
      y = y + this_ptr->current_line_height + this_ptr->line_spacing;
      local_14 = text;
    }
  } while( true );
}
