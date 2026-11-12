// Name: engine_font.cpp_FUN_004b01ce
// Address: 004b01ce
// Address Range: [[004b01ce, 004b047d]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b01ce(CBitFont *param_1,char *param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_004b01ce(CBitFont *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_25c [256];
  byte auStack_15c [256];
  CInStreamFile CStack_5c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&CStack_5c);
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
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&CStack_5c,0x5c1fb2,param_2,1);
  if (iVar2 != 0) {
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fb6,acStack_25c);
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fba,&iStack_30,&iStack_2c);
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fc1,&iStack_28,&iStack_24);
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fc8,&iStack_20);
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fcc,&iStack_1c);
    support_trstream_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    support_trstream_cpp_FUN_00572590(&CStack_5c,0x5c1fd0,&iStack_18,&iStack_14);
    support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&CStack_5c);
    if ((iStack_28 == 0x20) && (iStack_24 == 0xff)) {
      engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
                (param_1,acStack_25c,iStack_30,iStack_2c,iStack_20);
    }
    else {
      engine_font_cpp_CBitFont_loadNewBitmap_FUN_004b0190
                (param_1,acStack_25c,iStack_30,iStack_2c,iStack_28,iStack_24,iStack_20);
    }
    param_1->char_widths[0x20] = iStack_1c;
    param_1->shadow_offset_x = iStack_18;
    param_1->shadow_offset_y = iStack_14;
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&CStack_5c,0);
  return;
}
