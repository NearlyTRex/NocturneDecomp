// Name: engine_font.cpp_FUN_004a85a0
// Address: 004a85a0
// Address Range: [[004a85a0, 004a884b]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a85a0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_font_cpp_FUN_004a85a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CBitFont *in_stack_00000004;
  char *in_stack_00000008;
  char acStack_258 [256];
  char acStack_158 [256];
  CInStreamFile CStack_58;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&CStack_58);
  pcVar3 = in_stack_00000008;
  pcVar4 = in_stack_00000004->font_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  strupr(in_stack_00000004->font_filename);
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&CStack_58,(char *)0x5d691b,in_stack_00000008);
  if (iVar2 != 0) {
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20(&CStack_58.base,(char *)0x5d691f,acStack_258);
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20
              (&CStack_58.base,(char *)0x5d6923,&iStack_30,&iStack_2c);
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20
              (&CStack_58.base,(char *)0x5d692a,&iStack_28,&iStack_24);
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20(&CStack_58.base,(char *)0x5d6931,&iStack_20);
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20(&CStack_58.base,(char *)0x5d6935,&iStack_1c);
    support_trstream_cpp_CInStream_readLine_FUN_0057cc20(&CStack_58.base,acStack_158,0xff);
    support_trstream_cpp_CInStream_scanf_FUN_0057ba20
              (&CStack_58.base,(char *)0x5d6939,&iStack_18,&iStack_14);
    support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&CStack_58);
    if ((iStack_28 == 0x20) && (iStack_24 == 0xff)) {
      engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
                (in_stack_00000004,acStack_258,iStack_30,iStack_2c,iStack_20);
    }
    else {
      engine_font_cpp_CBitFont_loadNewBitmap_FUN_004a8560
                (in_stack_00000004,acStack_258,iStack_30,iStack_2c,iStack_28,iStack_24,iStack_20);
    }
    in_stack_00000004->char_widths[0x20] = iStack_1c;
    in_stack_00000004->shadow_offset_x = iStack_18;
    in_stack_00000004->shadow_offset_y = iStack_14;
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_58,0);
  return;
}
