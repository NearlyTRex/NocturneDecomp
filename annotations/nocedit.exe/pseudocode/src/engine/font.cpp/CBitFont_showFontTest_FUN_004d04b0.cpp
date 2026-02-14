// Name: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// Address: 004d04b0
// Address Range: [[004d04b0, 004d0841]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  char local_30 [28];
  int local_14;
  
  bVar7 = 0;
  iVar5 = 0x20;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar3 = 10;
  local_14 = this_ptr->max_char_width + this_ptr->line_spacing;
  iVar2 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar5,iVar3,iVar2,1,-1);
    iVar3 = iVar3 + this_ptr->max_char_height;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + iVar3 + this_ptr->max_char_height)) {
      iVar3 = 10;
      iVar2 = iVar2 + local_14;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x7f);
  iVar3 = 10;
  iVar2 = iVar2 + local_14;
  iVar5 = 0;
  do {
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar5,iVar3,iVar2,1,-1);
    iVar3 = iVar3 + iVar1;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + this_ptr->max_char_height + iVar3)) {
      iVar3 = 10;
      iVar2 = iVar2 + local_14;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x7f);
  iVar2 = iVar2 + local_14 + 10;
  engine_2d_c_fillRectColor_FUN_00403170
            (0,iVar2,screen_height + -1,this_ptr->max_char_width * 3 + iVar2 + 8,1);
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"one",10,iVar2,6,-1);
  iVar5 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,&s_BackspaceChar_0062a766,iVar3 + 10,iVar2,6,-1);
  iVar5 = iVar3 + 10 + iVar5;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"two",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,&s_FormFeedChar_0062a76c,iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"three",iVar5,iVar2,6,-1)
  ;
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"\t",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"four",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"  ",iVar5,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar5 + iVar3,iVar2,6,-1);
  iVar2 = iVar2 + local_14;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"{0A,1B} ~1 O<<I I|O &x;",iVar3 + 10,iVar2,6,-1);
  iVar2 = iVar2 + local_14;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"2:00pm  21,000  isn't  Uh,..",iVar3 + 10,iVar2,6,-1);
  iVar2 = iVar2 + local_14 * 2;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,iVar2,6,-1);
  pcVar4 = "CART Precision Racing v1.00";
  pcVar6 = local_30;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xf8,0);
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xf9,0);
  iVar3 = local_14;
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xfa,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xfb,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xfc,0);
  iVar3 = local_14;
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xfd,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xfe,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar2,0xff,0);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"Here is a newline:\nNext line!!\nAnd again!!",0x82,iVar2 + iVar3,0xff,0);
  return;
}
