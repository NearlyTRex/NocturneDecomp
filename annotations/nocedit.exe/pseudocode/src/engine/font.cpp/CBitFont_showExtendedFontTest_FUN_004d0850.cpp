// Name: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
// Address: 004d0850
// Address Range: [[004d0850, 004d110f]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850(CBitFont * this_ptr, int screen_width, int screen_height)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_showExtendedFontTest_FUN_004d0850
          (CBitFont *this_ptr,int screen_width,int screen_height)

{
  int iVar1;
  int iVar2;
  uint y_pos;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int in_stack_00000028;
  int in_stack_00000040;
  int in_stack_00000058;
  int in_stack_00000070;
  int iStack00000080;
  int in_stack_ffffffcc;
  int in_stack_ffffffd0;
  int in_stack_ffffffd4;
  int iVar6;
  
  iVar3 = this_ptr->max_char_width + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar5 = 10;
  iVar4 = 10;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar1 = screen_width + -1;
  iVar6 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar5,iVar4,6,-1);
    iVar5 = iVar5 + iVar2 + 1;
    iVar2 = in_stack_ffffffd0;
    if ((uint)screen_width < this_ptr->char_spacing + iVar5 + this_ptr->max_char_height + 1U) {
      if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,iVar1,iVar4 + -1);
        iVar2 = 0xc5;
        g_ActiveRenderColor = 4;
        iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        iVar1 = iVar1 + iVar4;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004011b0(3,iVar3 + iVar4,iVar1,in_stack_ffffffd0);
        g_ActiveRenderColor = 4;
        in_stack_ffffffcc = this_ptr->max_char_width + iVar4;
        iVar1 = 3;
        iVar3 = 0x4d0977;
        in_stack_ffffffd4 = in_stack_ffffffcc;
        engine_2d_c_drawLine_FUN_004011b0(3,in_stack_ffffffcc,iVar2,in_stack_ffffffcc);
      }
      iVar5 = 10;
      iVar4 = iVar4 + iVar3;
    }
    iVar6 = iVar6 + 1;
    in_stack_ffffffd0 = iVar2;
  } while (iVar6 < 0x7f);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    iVar1 = iVar4 + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar4;
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + iVar4,iVar6,iVar1);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar4 = iVar4 + iVar3;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_ffffffcc);
    iVar1 = this_ptr->max_char_width + iVar4;
    iVar3 = 3;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0x7f;
  iVar1 = 10;
  do {
    iVar5 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar5 + 1;
  } while (iVar6 < 0x90);
  iVar4 = iVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_A_a_0062a86f,(uint)screen_width >> 1,iVar4 - iVar3,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_ffffffd4);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0x90;
  iVar1 = 10;
  do {
    iVar5 = 0x4d0ab5;
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xa0);
  iVar4 = iVar4 + iVar5;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_____0062a87d,(uint)screen_width >> 1,iVar4 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,unaff_EBP);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0xa0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xb0);
  iVar4 = iVar4 + iVar5;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s__0062a892,(uint)screen_width >> 1,iVar4 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,screen_width + -1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1 + iVar4,screen_height);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = 0xb0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xc0);
  iVar4 = iVar4 + iVar5;
  screen_height = 1;
  y_pos = iVar4 - iVar5;
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,y_pos >> 1,y_pos,1,6,"maxCharHght: %d");
  if (this_ptr->max_char_width + iVar4 == 0) {
    g_ActiveRenderColor = 4;
    screen_height = 0x4d0f40;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000028);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xc0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xd0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000040);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xd0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xe0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000058);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xe0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0xf0);
  iVar4 = iVar4 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar4) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar4 + -1,y_pos - 1,iVar4 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar4,iVar1,in_stack_00000070);
    iVar1 = this_ptr->max_char_width + iVar4;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,y_pos - 1,iVar1);
  }
  iVar6 = 0xf0;
  iVar1 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar1,iVar4,6,-1);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + iVar3 + 1;
  } while (iVar6 < 0x100);
  iStack00000080 = engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(this_ptr,0xff);
  iStack00000080 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xff);
  iStack00000080 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,y_pos >> 1,iVar4,1,6,&s_CharMax_0062a8ad);
  return;
}
