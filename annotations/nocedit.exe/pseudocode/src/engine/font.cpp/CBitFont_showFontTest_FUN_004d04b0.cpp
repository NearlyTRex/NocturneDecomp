// Name: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// Address: 004d04b0
// Address Range: [[004d04b0, 004d0841]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont * this_ptr, int screen_height)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar6 = 0x20;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar4 = 10;
  iVar1 = this_ptr->max_char_width + this_ptr->line_spacing;
  iVar3 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar4,iVar3,1,-1);
    iVar4 = iVar4 + this_ptr->max_char_height;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + iVar4 + this_ptr->max_char_height)) {
      iVar4 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x7f);
  iVar4 = 10;
  iVar3 = iVar3 + iVar1;
  iVar6 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar6,iVar4,iVar3,1,-1);
    iVar4 = iVar4 + iVar2;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + this_ptr->max_char_height + iVar4)) {
      iVar4 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x7f);
  iVar3 = iVar3 + iVar1 + 10;
  engine_2d_c_fillRectColor_FUN_00403170
            (0,iVar3,screen_height + -1,this_ptr->max_char_width * 3 + iVar3 + 8,1);
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,"one",10,iVar3,6,-1);
  iVar6 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_BackspaceChar_0062a766,iVar4 + 10,iVar3,6,-1);
  iVar6 = iVar4 + 10 + iVar6;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"two",iVar6,iVar3,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_FormFeedChar_0062a76c,iVar6,iVar3,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"three",iVar6,iVar3,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"\t",iVar6,iVar3,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"four",iVar6,iVar3,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"  ",iVar6,iVar3,6,-1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar6 + iVar4,iVar3,6,-1);
  iVar3 = iVar3 + iVar1;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar3,6,-1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"{0A,1B} ~1 O<<I I|O &x;",iVar4 + 10,iVar3,6,-1);
  iVar3 = iVar3 + iVar1;
  iVar4 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,iVar3,6,-1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"2:00pm  21,000  isn't  Uh,..",iVar4 + 10,iVar3,6,-1);
  iVar3 = iVar3 + iVar1 * 2;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,iVar3,6,-1);
  pcVar5 = "CART Precision Racing v1.00";
  puVar7 = (uint *)&stack0xffffffd0;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xf8,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,&stack0xffffffd0,0x82,iVar3 + iVar1,0xf9,0);
  iVar3 = iVar3 + iVar1 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xfa,0);
  iVar3 = iVar3 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xfb,0);
  iVar3 = iVar3 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xfc,0);
  iVar3 = iVar3 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xfd,0);
  iVar3 = iVar3 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xfe,0);
  iVar3 = iVar3 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,&stack0xffffffd0,0x82,iVar3,0xff,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"Here is a newline:\nNext line!!\nAnd again!!",0x82,iVar3 + iVar1,0xff,0);
  return;
}
