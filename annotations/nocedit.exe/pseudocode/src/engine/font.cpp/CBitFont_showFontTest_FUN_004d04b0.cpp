// Name: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
// Address: 004d04b0
// Address Range: [[004d04b0, 004d0841] [03fc377d, 03fc37be]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)

{
  int iVar4;
  int iVar1;
  int iVar2;
  int iVar6;
  int iVar3;
  int iVar7;
  char *pcVar4;
  int iVar5;
  int iVar8;
  char *pcVar6;
  byte bVar7;
  char local_30 [28];
  int local_14;
  
  iVar5 = 0x20;
  engine_2d_c_fillRectColor_FUN_00403170(g_ClipLeft,g_ClipTop,g_ClipRight,g_ClipBottom,0);
  iVar3 = 10;
  iVar4 = this_ptr->max_char_height + this_ptr->line_spacing;
  iVar2 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar5,iVar3,iVar2,1,-1);
    iVar3 = iVar3 + this_ptr->max_char_width;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + iVar3 + this_ptr->max_char_width)) {
      iVar3 = 10;
      iVar2 = iVar2 + iVar4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x7f);
  iVar7 = 10;
  iVar6 = iVar2 + iVar4;
  iVar8 = 0;
  do {
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(this_ptr,iVar8,iVar7,iVar6,1,-1);
    iVar7 = iVar7 + iVar1;
    if ((uint)screen_height < (uint)(this_ptr->char_spacing + this_ptr->max_char_width + iVar7)) {
      iVar7 = 10;
      iVar6 = iVar6 + iVar4;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x7f);
  iVar6 = iVar6 + iVar4 + 10;
  engine_2d_c_fillRectColor_FUN_00403170
            (0,iVar6,screen_height + -1,this_ptr->max_char_height * 3 + iVar6 + 8,1);
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"one",10,iVar6,6,-1);
  iVar8 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,&s_BackspaceChar_0062a766,iVar7 + 10,iVar6,6,-1);
  iVar8 = iVar7 + 10 + iVar8;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"two",iVar8,iVar6,6,-1);
  iVar8 = iVar8 + iVar7;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,&s_FormFeedChar_0062a76c,iVar8,iVar6,6,-1);
  iVar8 = iVar8 + iVar7;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"three",iVar8,iVar6,6,-1)
  ;
  iVar8 = iVar8 + iVar7;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"\t",iVar8,iVar6,6,-1);
  iVar8 = iVar8 + iVar7;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"four",iVar8,iVar6,6,-1);
  iVar8 = iVar8 + iVar7;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,"  ",iVar8,iVar6,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar8 + iVar7,iVar6,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar6,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"{0A,1B} ~1 O<<I I|O &x;",iVar7 + 10,iVar6,6,-1);
  iVar6 = iVar6 + iVar4;
  iVar7 = engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    (this_ptr,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,iVar6,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"2:00pm  21,000  isn't  Uh,..",iVar7 + 10,iVar6,6,-1);
  iVar6 = iVar6 + iVar4 * 2;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,iVar6,6,-1);
  local_30[0] = "CART Precision Racing v1.00"[0];
  local_30[1] = "CART Precision Racing v1.00"[1];
  local_30[2] = "CART Precision Racing v1.00"[2];
  local_30[3] = "CART Precision Racing v1.00"[3];
  local_30[4] = "CART Precision Racing v1.00"[4];
  local_30[5] = "CART Precision Racing v1.00"[5];
  local_30[6] = "CART Precision Racing v1.00"[6];
  local_30[7] = "CART Precision Racing v1.00"[7];
  local_30[8] = "CART Precision Racing v1.00"[8];
  local_30[9] = "CART Precision Racing v1.00"[9];
  local_30[10] = "CART Precision Racing v1.00"[10];
  local_30[0xb] = "CART Precision Racing v1.00"[0xb];
  local_30[0xc] = "CART Precision Racing v1.00"[0xc];
  local_30[0xd] = "CART Precision Racing v1.00"[0xd];
  local_30[0xe] = "CART Precision Racing v1.00"[0xe];
  local_30[0xf] = "CART Precision Racing v1.00"[0xf];
  local_30[0x10] = "CART Precision Racing v1.00"[0x10];
  local_30[0x11] = "CART Precision Racing v1.00"[0x11];
  local_30[0x12] = "CART Precision Racing v1.00"[0x12];
  local_30[0x13] = "CART Precision Racing v1.00"[0x13];
  local_30[0x14] = "CART Precision Racing v1.00"[0x14];
  local_30[0x15] = "CART Precision Racing v1.00"[0x15];
  local_30[0x16] = "CART Precision Racing v1.00"[0x16];
  local_30[0x17] = "CART Precision Racing v1.00"[0x17];
  local_30[0x18] = "CART Precision Racing v1.00"[0x18];
  local_30[0x19] = "CART Precision Racing v1.00"[0x19];
  local_30[0x1a] = "CART Precision Racing v1.00"[0x1a];
  local_30[0x1b] = "CART Precision Racing v1.00"[0x1b];
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xf8,0);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6 + iVar4,0xf9,0);
  iVar6 = iVar6 + iVar4 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xfa,0);
  iVar6 = iVar6 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xfb,0);
  iVar6 = iVar6 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xfc,0);
  iVar6 = iVar6 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xfd,0);
  iVar6 = iVar6 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xfe,0);
  iVar6 = iVar6 + iVar4;
  engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,local_30,0x82,iVar6,0xff,0);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (this_ptr,"Here is a newline:\nNext line!!\nAnd again!!",0x82,iVar6 + iVar4,0xff,0);
  return;
}
