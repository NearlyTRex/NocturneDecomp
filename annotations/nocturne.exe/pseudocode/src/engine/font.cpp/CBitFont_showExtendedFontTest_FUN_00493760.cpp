// Name: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760
// Address: 00493760
// Address Range: [[00493760, 0049401f]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_00493760(CBitFont *this_ptr,int screen_width,int screen_height)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_00493760(CBitFont *this_ptr,int screen_width,int screen_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar5 = this_ptr->max_char_height + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar7 = 10;
  iVar6 = 10;
  engine_2d_c_fillRectColor_FUN_00403e60(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  local_14 = 0;
  iVar4 = screen_width + -1;
  do {
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,local_14,iVar7,iVar6,6,-1);
    iVar7 = iVar7 + iVar1 + 1;
    iVar1 = iVar4;
    if ((uint)screen_width < this_ptr->char_spacing + iVar7 + this_ptr->max_char_width + 1U) {
      if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar4,iVar6 + -1);
        g_ActiveRenderColor = 4;
        iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
        iVar2 = iVar2 + iVar6;
        iVar7 = iVar4;
        iVar1 = iVar4;
        iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004015a0(3,iVar3 + iVar6,iVar7,iVar2);
        g_ActiveRenderColor = 4;
        iVar7 = this_ptr->max_char_height + iVar6;
        engine_2d_c_drawLine_FUN_004015a0(3,iVar7,iVar4,iVar7);
      }
      iVar7 = 10;
      iVar6 = iVar6 + iVar5;
    }
    local_14 = local_14 + 1;
    iVar4 = iVar1;
  } while (local_14 < 0x7f);
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar2 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar4 = iVar2;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar1 + iVar6,iVar4,iVar7);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar2,iVar4);
  }
  iVar6 = iVar6 + iVar5;
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar2 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar4 = iVar2;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar1 + iVar6,iVar4,iVar7);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar2,iVar4);
  }
  iVar4 = 0x7f;
  local_1c = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,local_1c,iVar6,6,-1);
    iVar4 = iVar4 + 1;
    local_1c = local_1c + iVar7 + 1;
  } while (iVar4 < 0x90);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (this_ptr,&DAT_00581aa2,(uint)screen_width >> 1,iVar6 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar2 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar4 = iVar2;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar1 + iVar6,iVar4,iVar7);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar2,iVar4);
  }
  iVar4 = 0x90;
  local_20 = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,local_20,iVar6,6,-1);
    iVar4 = iVar4 + 1;
    local_20 = local_20 + iVar7 + 1;
  } while (iVar4 < 0xa0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (this_ptr,&DAT_00581ab0,(uint)screen_width >> 1,iVar6 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    iVar2 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar4 = iVar2;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar1 + iVar6,iVar4,iVar7);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar2,iVar4);
  }
  iVar4 = 0xa0;
  local_24 = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,local_24,iVar6,6,-1);
    iVar4 = iVar4 + 1;
    local_24 = local_24 + iVar7 + 1;
  } while (iVar4 < 0xb0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (this_ptr,&DAT_00581ac5,(uint)screen_width >> 1,iVar6 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    iVar2 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar2,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar4 = iVar2;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar1 + iVar6,iVar4,iVar7);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar2,iVar4);
  }
  iVar4 = 0xb0;
  local_28 = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,local_28,iVar6,6,-1);
    iVar4 = iVar4 + 1;
    local_28 = local_28 + iVar7 + 1;
  } while (iVar4 < 0xc0);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawTextF_FUN_00490b20
            (this_ptr,(uint)screen_width >> 1,iVar6 - iVar5,1,6,"maxCharHght: %d");
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    iVar1 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar5 = iVar5 + iVar6;
    iVar4 = iVar1;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar7 + iVar6,iVar4,iVar5);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar1,iVar4);
  }
  iVar4 = 0xc0;
  do {
    iVar5 = iVar4;
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,-1,iVar6,6,-1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xd0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar1 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar5 = iVar5 + iVar6;
    iVar4 = iVar1;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar7 + iVar6,iVar4,iVar5);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar1,iVar4);
  }
  iVar4 = 0xd0;
  do {
    iVar5 = iVar4;
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,6,iVar6,6,-1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xe0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    iVar1 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar5 = iVar5 + iVar6;
    iVar4 = iVar1;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar7 + iVar6,iVar4,iVar5);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar1,iVar4);
  }
  iVar4 = 0xe0;
  do {
    iVar5 = iVar4;
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,iVar6,iVar6,6,-1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xf0);
  iVar6 = iVar6 + iVar5;
  if ((uint)(this_ptr->max_char_height + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar1 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar6 + -1,iVar1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    iVar5 = iVar5 + iVar6;
    iVar4 = iVar1;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004015a0(3,iVar7 + iVar6,iVar4,iVar5);
    iVar4 = this_ptr->max_char_height + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004015a0(3,iVar4,iVar1,iVar4);
  }
  iVar4 = 0xf0;
  local_18 = 10;
  do {
    iVar5 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(this_ptr,iVar4,local_18,iVar6,6,-1);
    iVar4 = iVar4 + 1;
    local_18 = local_18 + iVar5 + 1;
  } while (iVar4 < 0x100);
  engine_font_cpp_CBitFont_getCharYOffset_FUN_00493110(this_ptr,0xff);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,0xff);
  engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextF_FUN_00490b20
            (this_ptr,(uint)screen_width >> 1,iVar6,1,6,&DAT_00581ae0);
  return;
}
