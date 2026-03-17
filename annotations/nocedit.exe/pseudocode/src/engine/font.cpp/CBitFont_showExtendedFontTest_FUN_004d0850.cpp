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
  int iVar7;
  int iVar3;
  int iVar8;
  int iVar9;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar10;
  int iVar11;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = this_ptr->max_char_height + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar6 = 10;
  iVar5 = 10;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar1 = screen_width + -1;
  local_14 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,local_14,iVar6,iVar5,6,-1);
    iVar6 = iVar6 + iVar2 + 1;
    if ((uint)screen_width < this_ptr->char_spacing + iVar6 + this_ptr->max_char_width + 1U) {
      if ((uint)(this_ptr->max_char_height + iVar5) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar1,iVar5 + -1);
        g_ActiveRenderColor = 4;
        iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
        iVar7 = iVar7 + iVar5;
        iVar8 = iVar1;
        iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004011b0(3,iVar3 + iVar5,iVar8,iVar7);
        g_ActiveRenderColor = 4;
        iVar8 = this_ptr->max_char_height + iVar5;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar8,iVar1,iVar8);
      }
      iVar6 = 10;
      iVar5 = iVar5 + iVar4;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 0x7f);
  if ((uint)(this_ptr->max_char_height + iVar5) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar10 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + -1,iVar10,iVar5 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar5;
    iVar8 = iVar10;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar9 + iVar5,iVar8,iVar7);
    iVar8 = this_ptr->max_char_height + iVar5;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8,iVar10,iVar8);
  }
  iVar8 = iVar5 + iVar4;
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar11 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0x7f;
  local_1c = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_1c,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_1c = local_1c + iVar9 + 1;
  } while (iVar7 < 0x90);
  iVar8 = iVar8 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s_A_a_0062a86f,(uint)screen_width >> 1,iVar8 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar11 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0x90;
  local_20 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_20,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_20 = local_20 + iVar9 + 1;
  } while (iVar7 < 0xa0);
  iVar8 = iVar8 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s_anon_0062a87d,(uint)screen_width >> 1,iVar8 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    iVar11 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xa0;
  local_24 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_24,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_24 = local_24 + iVar9 + 1;
  } while (iVar7 < 0xb0);
  iVar8 = iVar8 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,s_anon_0062a892,(uint)screen_width >> 1,iVar8 - iVar4,6,-1);
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    iVar11 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xb0;
  local_28 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_28,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_28 = local_28 + iVar9 + 1;
  } while (iVar7 < 0xc0);
  iVar8 = iVar8 + iVar4;
  engine_font_cpp_CBitFont_drawTextF_FUN_004cdc20
            (this_ptr,(uint)screen_width >> 1,iVar8 - iVar4,1,6,"maxCharHght: %d",
             this_ptr->max_char_height);
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    iVar11 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xc0;
  local_2c = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_2c,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_2c = local_2c + iVar9 + 1;
  } while (iVar7 < 0xd0);
  iVar8 = iVar8 + iVar4;
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar11 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xd0;
  local_30 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_30,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_30 = local_30 + iVar9 + 1;
  } while (iVar7 < 0xe0);
  iVar8 = iVar8 + iVar4;
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    iVar11 = screen_width + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xe0;
  local_34 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_34,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_34 = local_34 + iVar9 + 1;
  } while (iVar7 < 0xf0);
  iVar8 = iVar8 + iVar4;
  if ((uint)(this_ptr->max_char_height + iVar8) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    iVar11 = screen_width + -1;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + -1,iVar11,iVar8 + -1);
    g_ActiveRenderColor = 4;
    iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    iVar9 = iVar9 + iVar8;
    iVar7 = iVar11;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar10 + iVar8,iVar7,iVar9);
    iVar7 = this_ptr->max_char_height + iVar8;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7,iVar11,iVar7);
  }
  iVar7 = 0xf0;
  local_18 = 10;
  do {
    iVar9 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,local_18,iVar8,6,-1);
    iVar7 = iVar7 + 1;
    local_18 = local_18 + iVar9 + 1;
  } while (iVar7 < 0x100);
  iVar7 = engine_font_cpp_CBitFont_getCharYOffset_FUN_004d0200(this_ptr,0xff);
  iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,0xff);
  iVar10 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextF_FUN_004cdc20
            (this_ptr,(uint)screen_width >> 1,iVar8,1,6,&s_MaxChar_0062a8ad,iVar10,iVar9,iVar7);
  return;
}
