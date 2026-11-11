// Name: engine_font.cpp_FUN_004a859e
// Address: 004a859e
// Address Range: [[004a859e, 004a884b]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a859e(CBitFont *param_1,char *param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_004a859e(CBitFont *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_258 [256];
  byte auStack_158 [256];
  CInStreamFile CStack_58;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&CStack_58);
  pcVar3 = param_2;
  pcVar4 = param_1->font_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  strupr(param_1->font_filename);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&CStack_58,0x5d691b,param_2);
  if (iVar2 != 0) {
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d691f,acStack_258);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6923,&iStack_30,&iStack_2c);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d692a,&iStack_28,&iStack_24);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6931,&iStack_20);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6935,&iStack_1c);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6939,&iStack_18,&iStack_14);
    unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180(&CStack_58);
    if ((iStack_28 == 0x20) && (iStack_24 == 0xff)) {
      engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
                (param_1,acStack_258,iStack_30,iStack_2c,iStack_20);
    }
    else {
      engine_font_cpp_CBitFont_loadNewBitmap_FUN_004a8560
                (param_1,acStack_258,iStack_30,iStack_2c,iStack_28,iStack_24,iStack_20);
    }
    param_1->char_widths[0x20] = iStack_1c;
    param_1->shadow_offset_x = iStack_18;
    param_1->shadow_offset_y = iStack_14;
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_58,0);
  return;
}
