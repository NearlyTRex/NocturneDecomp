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
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  uint character_code;
  int iStack00000020;
  int in_stack_ffffffcc;
  int in_stack_ffffffd0;
  int in_stack_ffffffd4;
  int y2;
  int iVar8;
  
  iVar5 = this_ptr->max_char_width + this_ptr->line_spacing + (uint)(screen_height * 0xc) / 0x1e0;
  iVar7 = 10;
  iVar6 = 10;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar1 = screen_width + -1;
  iVar8 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar8,iVar7,iVar6,6,-1);
    iVar7 = iVar7 + iVar2 + 1;
    iVar2 = in_stack_ffffffd0;
    if ((uint)screen_width < this_ptr->char_spacing + iVar7 + this_ptr->max_char_height + 1U) {
      if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
        g_ActiveRenderColor = 4;
        engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,iVar1,iVar6 + -1);
        iVar2 = 0xc5;
        g_ActiveRenderColor = 4;
        iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        iVar1 = iVar1 + iVar6;
        iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
        engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + iVar6,iVar1,in_stack_ffffffd0);
        g_ActiveRenderColor = 4;
        in_stack_ffffffcc = this_ptr->max_char_width + iVar6;
        iVar1 = 3;
        iVar5 = 0x4d0977;
        in_stack_ffffffd4 = in_stack_ffffffcc;
        engine_2d_c_drawLine_FUN_004011b0(3,in_stack_ffffffcc,iVar2,in_stack_ffffffcc);
      }
      iVar7 = 10;
      iVar6 = iVar6 + iVar5;
    }
    iVar8 = iVar8 + 1;
    in_stack_ffffffd0 = iVar2;
  } while (iVar8 < 0x7f);
  if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
    iVar1 = iVar6 + -1;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
    g_ActiveRenderColor = 4;
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar8 = iVar8 + iVar6;
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7 + iVar6,iVar8,iVar1);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar6 = iVar6 + iVar5;
  if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,screen_width + -1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar6;
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + iVar6,iVar1,in_stack_ffffffcc);
    iVar1 = this_ptr->max_char_width + iVar6;
    iVar5 = 3;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar8 = 0x7f;
  iVar1 = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar8,iVar1,iVar6,6,-1);
    iVar8 = iVar8 + 1;
    iVar1 = iVar1 + iVar7 + 1;
  } while (iVar8 < 0x90);
  iVar6 = iVar6 + iVar5;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_A_a_0062a86f,(uint)screen_width >> 1,iVar6 - iVar5,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,screen_width + -1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar6;
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + iVar6,iVar1,in_stack_ffffffd4);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,screen_width + -1,iVar1);
  }
  iVar8 = 0x90;
  iVar1 = 10;
  do {
    iVar7 = 0x4d0ab5;
    iVar5 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar8,iVar1,iVar6,6,-1);
    iVar8 = iVar8 + 1;
    iVar1 = iVar1 + iVar5 + 1;
  } while (iVar8 < 0xa0);
  iVar6 = iVar6 + iVar7;
  iVar1 = 0x4d0ae9;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s_____0062a87d,(uint)screen_width >> 1,iVar6 - iVar7,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,screen_width + -1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar8 = iVar8 + iVar6;
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5 + iVar6,iVar8,unaff_EBP);
    iVar8 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8,screen_width + -1,iVar8);
  }
  iVar5 = 0xa0;
  iVar8 = 10;
  do {
    y2 = 0x4d0b1c;
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar5,iVar8,iVar6,6,-1);
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + iVar2 + 1;
  } while (iVar5 < 0xb0);
  iVar6 = iVar6 + iVar7;
  iVar8 = 6;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,s__0062a892,(uint)screen_width >> 1,iVar6 - iVar7,6,-1);
  if ((uint)(this_ptr->max_char_width + iVar6) < (uint)screen_height) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,screen_width + -1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar8 = 0x4d0eef;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar6,iVar5 + iVar6,screen_height);
    iVar5 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar5,screen_width + -1,iVar5);
  }
  iVar2 = 0xb0;
  iVar5 = 10;
  do {
    iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar2,iVar5,iVar6,6,-1);
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + iVar3 + 1;
  } while (iVar2 < 0xc0);
  iVar6 = iVar6 + iVar7;
  iVar5 = 6;
  uVar4 = iVar6 - iVar7;
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,uVar4 >> 1,uVar4,1,6,"maxCharHght: %d");
  if (this_ptr->max_char_width + iVar6 == 0) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,uVar4 - 1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar7 = iVar7 + iVar6;
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar2 + iVar6,iVar7,iVar1);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,uVar4 - 1,iVar1);
  }
  iVar7 = 0xc0;
  iVar1 = 10;
  do {
    iVar3 = iVar1;
    iVar1 = iVar3;
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar3,iVar6,6,-1);
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + iVar2 + 1;
  } while (iVar7 < 0xd0);
  iVar6 = iVar6 + iVar3;
  if (this_ptr->max_char_width + iVar6 == 0) {
    g_ActiveRenderColor = 4;
    iVar3 = 0x4d0fba;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,uVar4 - 1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar6;
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7 + iVar6,iVar1,y2);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,uVar4 - 1,iVar1);
  }
  iVar7 = 0xd0;
  iVar1 = 10;
  do {
    iVar2 = 0x4d0c3b;
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar1,iVar6,6,-1);
    iVar7 = iVar7 + 1;
    iVar1 = iVar2 + iVar1 + 1;
  } while (iVar7 < 0xe0);
  iVar6 = iVar6 + iVar3;
  if (this_ptr->max_char_width + iVar6 == 0) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,uVar4 - 1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar1 = iVar1 + iVar6;
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar7 + iVar6,iVar1,iVar8);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,uVar4 - 1,iVar1);
  }
  iVar8 = 0xe0;
  iVar1 = 10;
  do {
    iVar7 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar8,iVar1,iVar6,6,-1);
    iVar8 = iVar8 + 1;
    iVar1 = iVar1 + iVar7 + 1;
  } while (iVar8 < 0xf0);
  iVar6 = iVar6 + iVar3;
  if (this_ptr->max_char_width + iVar6 == 0) {
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar6 + -1,uVar4 - 1,iVar6 + -1);
    g_ActiveRenderColor = 4;
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xc5);
    engine_2d_c_drawLine_FUN_004011b0(3,iVar8 + iVar6,iVar1 + iVar6,iVar5);
    iVar1 = this_ptr->max_char_width + iVar6;
    g_ActiveRenderColor = 4;
    engine_2d_c_drawLine_FUN_004011b0(3,iVar1,uVar4 - 1,iVar1);
  }
  iVar1 = 10;
  uVar4 = 0xf0;
  do {
    character_code = uVar4;
    iVar8 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                      (this_ptr,character_code,iVar1,iVar6,6,-1);
    iVar1 = iVar1 + iVar8 + 1;
    uVar4 = character_code + 1;
  } while ((int)(character_code + 1) < 0x100);
  iStack00000020 = engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(this_ptr,0xff);
  iStack00000020 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0xff);
  iStack00000020 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,0xff);
  engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
            (this_ptr,character_code >> 1,iVar6,1,6,&s_CharMax_0062a8ad);
  return;
}
