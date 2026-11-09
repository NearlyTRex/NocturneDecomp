// Name: engine_font.cpp_FUN_004a859e
// Address: 004a859e
// Address Range: [[004a859e, 004a884b]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a859e(CBitFont *param_1,CBitFont *param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_004a859e(CBitFont *param_1,CBitFont *param_2)

{
  CBitFont CVar1;
  int iVar2;
  CBitFont *pCVar3;
  CBitFont *pCVar4;
  char acStack_258 [256];
  byte auStack_158 [256];
  CInStreamFile CStack_58;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&CStack_58);
  pCVar3 = param_2;
  pCVar4 = param_1 + 0x144;
  do {
    CVar1 = *pCVar3;
    *pCVar4 = CVar1;
    if (CVar1 == (CBitFont)0x0) break;
    CVar1 = pCVar3[1];
    pCVar3 = pCVar3 + 2;
    pCVar4[1] = CVar1;
    pCVar4 = pCVar4 + 2;
  } while (CVar1 != (CBitFont)0x0);
  strupr((char *)(param_1 + 0x144));
  iVar2 = support_trstream_cpp_FUN_0057d390(&CStack_58,0x5d691b,param_2);
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
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6935,&uStack_1c);
    unkaddr_0057b9a0_cpp_FUN_0057cc20(&CStack_58,auStack_158,0xff);
    unkaddr_0057b9a0_cpp_FUN_0057ba20(&CStack_58,0x5d6939,&uStack_18,&uStack_14);
    unkaddr_0057b9a0_cpp_FUN_0057d180(&CStack_58);
    if ((iStack_28 == 0x20) && (iStack_24 == 0xff)) {
      engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
                (param_1,acStack_258,iStack_30,iStack_2c,iStack_20);
    }
    else {
      engine_font_cpp_FUN_004a8560
                (param_1,acStack_258,iStack_30,iStack_2c,iStack_28,iStack_24,iStack_20);
    }
    *(uint *)(param_1 + 0x3668) = uStack_1c;
    *(uint *)(param_1 + 0x41fc) = uStack_18;
    *(uint *)(param_1 + 0x4200) = uStack_14;
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_58,0);
  return;
}
