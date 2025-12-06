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
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  CBitFont *pCVar10;
  
  bVar9 = 0;
  iVar7 = 0x20;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar5 = 10;
  iVar1 = this_ptr->max_char_width + this_ptr->line_spacing;
  iVar3 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar5,iVar3,1,-1);
    iVar5 = iVar5 + this_ptr->max_char_height;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + iVar5 + this_ptr->max_char_height)) {
      iVar5 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x7f);
  iVar5 = 10;
  iVar3 = iVar3 + iVar1;
  iVar7 = 0;
  do {
    iVar2 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar7,iVar5,iVar3,1,-1);
    iVar5 = iVar5 + iVar2;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + this_ptr->max_char_height + iVar5)) {
      iVar5 = 10;
      iVar3 = iVar3 + iVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x7f);
  iVar3 = iVar3 + iVar1 + 10;
  engine_2d_c_fillRectColor_FUN_00403170
            (0,iVar3,screen_height + -1,this_ptr->max_char_width * 3 + iVar3 + 8,1);
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(this_ptr,"one",10,iVar3,6,-1);
  iVar5 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_BackspaceChar_0062a766,iVar1 + 10,iVar3,6,-1);
  iVar5 = iVar1 + 10 + iVar5;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"two",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,&s_FormFeedChar_0062a76c,iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"three",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"\t",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"four",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"  ",iVar5,iVar3,6,-1);
  iVar5 = iVar5 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar5,iVar3,6,-1);
  iVar3 = iVar3 + iVar5;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar3,6,-1);
  pCVar10 = this_ptr;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"{0A,1B} ~1 O<<I I|O &x;",iVar1 + 10,iVar3,6,-1);
  pcVar4 = pCVar10->bitmap_files[0] + iVar3 + -4;
  iVar3 = 0x4d06d9;
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,(int)pcVar4,6,-1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"2:00pm  21,000  isn't  Uh,..",iVar1 + 10,(int)pcVar4,6,-1);
  pcVar4 = pcVar4 + iVar3 * 2;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (this_ptr,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,(int)pcVar4,6,-1);
  pCVar10 = (CBitFont *)0x82;
  pcVar6 = "CART Precision Racing v1.00";
  puVar8 = (uint *)&stack0xffffffd0;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar8 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (pCVar10,&stack0xffffffd0,0x82,(int)pcVar4,0xf8,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,(char *)&stack0xffffffd0,0x82,(int)pcVar4,0xf9,0);
  pcVar4 = pcVar4 + iVar3;
  iVar1 = iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfa,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfb,0);
  pcVar4 = pcVar4 + iVar3;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfc,0);
  pcVar4 = pcVar4 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfd,0);
  pcVar4 = pcVar4 + iVar1;
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)&stack0xffffffd0,&stack0xffffffd0,0x82,(int)pcVar4,0xfe,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)0x4d079b,&stack0xffffffd0,0x82,(int)(pcVar4 + iVar1),0xff,0);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            ((CBitFont *)0x4d079b,"Here is a newline:\nNext line!!\nAnd again!!",0x82,
             (int)(pcVar4 + iVar1 + iVar1),0xff,0);
  return;
}
