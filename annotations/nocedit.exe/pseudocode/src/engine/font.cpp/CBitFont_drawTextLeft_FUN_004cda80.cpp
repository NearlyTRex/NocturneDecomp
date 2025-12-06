// Name: engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
// Address: 004cda80
// Address Range: [[004cda80, 004cdbe6]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, int color_mode, int color_value)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
          (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint character_code;
  char *unaff_EDI;
  int in_stack_0000001c;
  int in_stack_00000020;
  char *param1;
  
  iVar1 = x_pos;
  if (this_ptr->win_font_enabled == 0) {
    for (; character_code = (uint)(byte)*text_string, character_code != 0;
        text_string = text_string + 1) {
      if (character_code != 0xd) {
        if (character_code == 10) {
          y_pos = y_pos + this_ptr->current_max_width + this_ptr->line_spacing;
          x_pos = iVar1;
        }
        else {
          iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                            (this_ptr,character_code,x_pos,y_pos,color_mode,color_value);
          x_pos = x_pos + iVar2;
        }
      }
    }
    return x_pos - iVar1;
  }
  pcVar3 = (char *)x_pos;
  param1 = (char *)x_pos;
  if (this_ptr->win_font_helper == (CWinFont *)0x0) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0x266;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBitFont::drawText - OSFont not set before DrawText called");
  }
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '\n') goto LAB_004cdad3;
    if (*pcVar3 == '\0') goto LAB_004cdad1;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '\n') goto LAB_004cdad3;
    pcVar3 = pcVar3 + 2;
    if (*pcVar4 == '\0') {
LAB_004cdad1:
      pcVar4 = (char *)0x0;
LAB_004cdad3:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      engine_palette_cpp_CFont_drawText_FUN_00544ed0
                (&this_ptr->win_font_helper->base_font,(int)param1,x_pos,y_pos,color_value,
                 in_stack_0000001c);
      iVar1 = extraout_EAX;
      if (extraout_EAX == -1) {
        this_ptr->win_font_enabled = 0;
        iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                          (this_ptr,unaff_EDI,x_pos,y_pos,in_stack_0000001c,in_stack_00000020);
        this_ptr->win_font_enabled = 1;
      }
      if (pcVar4 == (char *)0x0) {
        return iVar1;
      }
      *pcVar4 = '\n';
      y_pos = y_pos + this_ptr->current_max_width + this_ptr->line_spacing;
      pcVar3 = pcVar4 + 1;
      param1 = pcVar4 + 1;
    }
  } while( true );
}
