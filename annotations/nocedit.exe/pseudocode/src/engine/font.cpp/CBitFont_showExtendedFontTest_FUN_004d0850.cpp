// Name: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
// Address: 004d0850
// Address Range: [[004d0850, 004d110f]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_004d0850(CBitFont *this_ptr,int screen_width,int screen_height)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_004d0850(CBitFont *this_ptr,int screen_width,int screen_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = this_ptr->max_char_width + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar6 = 10;
  iVar5 = 10;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar1 = screen_width + -1;
  local_14 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,local_14,iVar6,iVar5,6,-1);
    iVar6 = iVar6 + iVar2 + 1;
    if ((uint)screen_width < this_ptr->char_spacing + iVar6 + this_ptr->max_char_height + 1U) {
      if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar1,iVar5 + -1);
        g_ActiveRenderColor = 4;
        iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        iVar2 = iVar2 + iVar5;
        iVar6 = iVar1;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004011b0(3,iVar3 + iVar5,iVar6,iVar2);
        g_ActiveRenderColor = 4;
        iVar6 = this_ptr->max_char_width + iVar5;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar6,iVar1,iVar6);
      }
      iVar6 = 10;
      iVar5 = iVar5 + iVar4;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 0x7f);
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar3 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar5 = iVar5 + iVar4;
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar3 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0x7f;
  local_1c = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_1c,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_1c = local_1c + iVar6 + 1;
  } while (iVar1 < 0x90);
  iVar5 = iVar5 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s_A_a_0062a86f,(uint)screen_width >> 1,iVar5 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar3 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0x90;
  local_20 = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_20,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_20 = local_20 + iVar6 + 1;
  } while (iVar1 < 0xa0);
  iVar5 = iVar5 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s__0062a87d,(uint)screen_width >> 1,iVar5 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    iVar3 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0xa0;
  local_24 = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_24,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_24 = local_24 + iVar6 + 1;
  } while (iVar1 < 0xb0);
  iVar5 = iVar5 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s__0062a892,(uint)screen_width >> 1,iVar5 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    iVar3 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0xb0;
  local_28 = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_28,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_28 = local_28 + iVar6 + 1;
  } while (iVar1 < 0xc0);
  iVar5 = iVar5 + iVar4;
  engine_font_cpp_CBitFont_drawTextF_FUN_004cdc20
            (this_ptr,(uint)screen_width >> 1,iVar5 - iVar4,1,6,"maxCharHght: %d",
             this_ptr->max_char_width);
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    iVar3 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0xc0;
  local_2c = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_2c,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_2c = local_2c + iVar6 + 1;
  } while (iVar1 < 0xd0);
  iVar5 = iVar5 + iVar4;
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar3 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0xd0;
  local_30 = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_30,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_30 = local_30 + iVar6 + 1;
  } while (iVar1 < 0xe0);
  iVar5 = iVar5 + iVar4;
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    iVar3 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar3,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar6 = iVar6 + iVar5;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar5,iVar1,iVar6);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar3,iVar1);
  }
  iVar1 = 0xe0;
  local_34 = 10;
  do {
    iVar6 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_34,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_34 = local_34 + iVar6 + 1;
  } while (iVar1 < 0xf0);
  iVar5 = iVar5 + iVar4;
  if ((uint)(this_ptr->max_char_width + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar2 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar2,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar4 = iVar4 + iVar5;
    iVar1 = iVar2;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + iVar5,iVar1,iVar4);
    iVar1 = this_ptr->max_char_width + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,iVar2,iVar1);
  }
  iVar1 = 0xf0;
  local_18 = 10;
  do {
    iVar4 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar1,local_18,iVar5,6,-1);
    iVar1 = iVar1 + 1;
    local_18 = local_18 + iVar4 + 1;
  } while (iVar1 < 0x100);
  iVar1 = engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(this_ptr,0xff);
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xff);
  iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextF_FUN_004cdc20
            (this_ptr,(uint)screen_width >> 1,iVar5,1,6,&s_CharMax_0062a8ad,iVar6,iVar4,iVar1);
  return;
}
