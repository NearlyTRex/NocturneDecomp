// Name: engine_font.cpp_CBitFont_showFontTest_FUN_004933c0
// Address: 004933c0
// Address Range: [[004933c0, 00493751]]
// Convention: unknown
// Signature: void engine_font_cpp_CBitFont_showFontTest_FUN_004933c0(CBitFont *param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_CBitFont_showFontTest_FUN_004933c0(CBitFont *param_1,uint param_2)

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
  engine_2d_c_fillRectColor_FUN_00403e60(_DAT_01c00c58,_DAT_01c00c5c,_DAT_01c00c60,_DAT_01c00c64,0);
  iVar3 = 10;
  local_14 = param_1->max_char_height + param_1->line_spacing;
  iVar2 = 10;
  do {
    engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(param_1,iVar5,iVar3,iVar2,1,0xffffffff);
    iVar3 = iVar3 + param_1->max_char_width;
    if (param_2 < (uint)(param_1->char_spacing + iVar3 + param_1->max_char_width)) {
      iVar3 = 10;
      iVar2 = iVar2 + local_14;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x7f);
  iVar3 = 10;
  iVar2 = iVar2 + local_14;
  iVar5 = 0;
  do {
    iVar1 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                      (param_1,iVar5,iVar3,iVar2,1,0xffffffff);
    iVar3 = iVar3 + iVar1;
    if (param_2 < (uint)(param_1->char_spacing + param_1->max_char_width + iVar3)) {
      iVar3 = 10;
      iVar2 = iVar2 + local_14;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x7f);
  iVar2 = iVar2 + local_14 + 10;
  engine_2d_c_fillRectColor_FUN_00403e60
            (0,iVar2,param_2 - 1,param_1->max_char_height * 3 + iVar2 + 8,1);
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,"one",10,iVar2,6,-1);
  iVar5 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                    (param_1,&DAT_00581999,iVar3 + 10,iVar2,6,-1);
  iVar5 = iVar3 + 10 + iVar5;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,"two",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,&DAT_0058199f,iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,"three",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,&DAT_005819a7,iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,"four",iVar5,iVar2,6,-1);
  iVar5 = iVar5 + iVar3;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,&DAT_005819ae,iVar5,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,"(01234)+5-6/7*8=9.0  8<>+-=*8",iVar5 + iVar3,iVar2,6,-1);
  iVar2 = iVar2 + local_14;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                    (param_1,"#023  $0.23  a@t  5.0%  2^1  ",10,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,"{0A,1B} ~1 O<<I I|O &x;",iVar3 + 10,iVar2,6,-1);
  iVar2 = iVar2 + local_14;
  iVar3 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                    (param_1,"No?!  \"Hi\"  'A'  ({[0A]})  G_V  ",10,iVar2,6,-1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,"2:00pm  21,000  isn't  Uh,..",iVar3 + 10,iVar2,6,-1);
  iVar2 = iVar2 + local_14 * 2;
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,"One newline:\nTwo newlines:\n\nThree newlines:\n\n\nStop.",0x1c2,iVar2,6,-1);
  pcVar4 = "CART Precision Racing v1.00";
  pcVar6 = local_30;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xf8,0);
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xf9,0);
  iVar3 = local_14;
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xfa,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xfb,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xfc,0);
  iVar3 = local_14;
  iVar2 = iVar2 + local_14;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xfd,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xfe,0);
  iVar2 = iVar2 + iVar3;
  engine_font_cpp_CBitFont_drawText_FUN_00490980(param_1,local_30,0x82,iVar2,0xff,0);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (param_1,"Here is a newline:\nNext line!!\nAnd again!!",0x82,iVar2 + iVar3,0xff,0);
  return;
}
