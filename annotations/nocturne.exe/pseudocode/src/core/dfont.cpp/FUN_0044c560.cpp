// Name: FUN_0044c560
// Address: 0044c560
// Address Range: [[0044c560, 0044cbff]]
// Convention: unknown
// Signature: void FUN_0044c560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c560(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b98f8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x41;
    FUN_004c8440("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (_DAT_014b98f8,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(_DAT_014b98f8);
  iVar2 = _DAT_014b98f8;
  *(uint *)(_DAT_014b98f8 + 0x25e8) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(_DAT_014b98f8,1,0xc0,0xdf);
  iVar2 = _DAT_014b98f8;
  *(uint *)(_DAT_014b98f8 + 0x317c) = 2;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b98fc = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x51;
    FUN_004c8440("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (_DAT_014b98fc,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(_DAT_014b98fc);
  iVar2 = _DAT_014b98fc;
  *(uint *)(_DAT_014b98fc + 0x25e8) = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,2,0x20,0x7e);
  iVar2 = _DAT_014b98fc;
  *(uint *)(_DAT_014b98fc + 0x317c) = 2;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b9900 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x60;
    FUN_004c8440("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (_DAT_014b9900,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(_DAT_014b9900);
  iVar2 = _DAT_014b9900;
  *(uint *)(_DAT_014b9900 + 0x25e8) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(_DAT_014b9900,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(_DAT_014b9900,1,0xe0,0xff);
  iVar2 = _DAT_014b9900;
  *(uint *)(_DAT_014b9900 + 0x317c) = 2;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b9904 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x71;
    FUN_004c8440("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (_DAT_014b9904,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(_DAT_014b9904);
  iVar2 = _DAT_014b9904;
  *(uint *)(_DAT_014b9904 + 0x25e8) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_014b9904;
  *(uint *)(_DAT_014b9904 + 0x317c) = 1;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  _DAT_01bcd070 = _DAT_014b9904;
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b9908 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x84;
    FUN_004c8440("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40
            (_DAT_014b9908,"fnte_f.RAW",0x94,0xec,0xff);
  iVar2 = _DAT_014b9908;
  *(uint *)(_DAT_014b9908 + 0x25e8) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_014b9908;
  *(uint *)(_DAT_014b9908 + 0x317c) = 1;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  _DAT_01bcd070 = _DAT_014b9904;
  iVar1 = FUN_0056497c(0x3198);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_font_cpp_CBitFont_ctor_FUN_0048fe10(iVar1);
  }
  _DAT_014b990c = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0x96;
    FUN_004c8440("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(_DAT_014b990c,"micro.raw",0x94,0xec,0)
  ;
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(_DAT_014b990c);
  iVar2 = _DAT_014b990c;
  *(uint *)(_DAT_014b990c + 0x25e8) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(iVar2,1,0x20,0x7e);
  iVar2 = _DAT_014b990c;
  *(uint *)(_DAT_014b990c + 0x317c) = 1;
  *(uint *)(iVar2 + 0x3180) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(iVar2,1);
  if (_DAT_01d16810 == 0) {
    return;
  }
  iVar1 = FUN_0056497c(0x13c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(iVar1,&DAT_005bdf50,0xe,2,2);
  }
  _DAT_014b9910 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0xa6;
    FUN_004c8440("initFonts - Can't allocate gMediumOSFont");
  }
  iVar1 = _DAT_014b9910;
  iVar2 = _DAT_014b98f8;
  *(uint *)(_DAT_014b98f8 + 0x3190) = 1;
  *(int *)(iVar2 + 0x3194) = iVar1;
  iVar1 = FUN_0056497c(0x13c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(iVar1,&DAT_005bdf50,0x12,0,0);
  }
  _DAT_014b9918 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0xac;
    FUN_004c8440("initFonts - Can't allocate gThemeOSFont");
  }
  iVar1 = _DAT_014b9918;
  iVar2 = _DAT_014b9900;
  *(uint *)(_DAT_014b9900 + 0x3190) = 1;
  *(int *)(iVar2 + 0x3194) = iVar1;
  iVar1 = FUN_0056497c(0x13c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(iVar1,&DAT_005bdf50,0xc,0,0);
  }
  _DAT_014b9914 = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0xb2;
    FUN_004c8440("initFonts - Can't allocate gTinyOSFont");
  }
  iVar1 = _DAT_014b9914;
  iVar2 = _DAT_014b98fc;
  *(uint *)(_DAT_014b98fc + 0x3190) = 1;
  *(int *)(iVar2 + 0x3194) = iVar1;
  iVar1 = FUN_0056497c(0x13c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(iVar1,&DAT_005bdf50,10,0,0);
  }
  _DAT_014b991c = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfont.cpp";
    _DAT_01cc4804 = 0xb8;
    FUN_004c8440("initFonts - Can't allocate gDebugOSFont");
  }
  iVar1 = _DAT_014b991c;
  iVar2 = _DAT_014b9904;
  *(uint *)(_DAT_014b9904 + 0x3190) = 1;
  *(int *)(iVar2 + 0x3194) = iVar1;
  return;
}
