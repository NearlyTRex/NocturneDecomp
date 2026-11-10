// Name: core_dfont.cpp_FUN_00459f50
// Address: 00459f50
// Address Range: [[00459f50, 0045a8cf]]
// Convention: unknown
// Signature: void core_dfont_cpp_FUN_00459f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dfont_cpp_FUN_00459f50(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549aa0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x43;
    core_main_c_FUN_004e4330("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549aa0,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549aa0);
  pCVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549aa0,1,0xc0,0xdf);
  pCVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549aa4 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x53;
    core_main_c_FUN_004e4330("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549aa4,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549aa4);
  pCVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x3668) = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,2,0x20,0x7e);
  pCVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549aa8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x62;
    core_main_c_FUN_004e4330("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549aa8,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549aa8);
  pCVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549aa8,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549aa8,1,0xe0,0xff);
  pCVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549aac = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x73;
    core_main_c_FUN_004e4330("Menu font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549aac,"BW3_font.raw",0xfa,0x23f,2);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549aac);
  pCVar2 = _DAT_01549aac;
  *(uint *)(_DAT_01549aac + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549aac,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549aac,1,0xe0,0xff);
  pCVar2 = _DAT_01549aac;
  *(uint *)(_DAT_01549aac + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549ab0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x84;
    core_main_c_FUN_004e4330("Small menu font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549ab0,"BW3_font2.raw",0xfa,0x23f,2);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549ab0);
  pCVar2 = _DAT_01549ab0;
  *(uint *)(_DAT_01549ab0 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549ab0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549ab0,1,0xe0,0xff);
  pCVar2 = _DAT_01549ab0;
  *(uint *)(_DAT_01549ab0 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549ab4 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x95;
    core_main_c_FUN_004e4330("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549ab4,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549ab4);
  pCVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  _DAT_01c5b0e0 = _DAT_01549ab4;
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549ab8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xa8;
    core_main_c_FUN_004e4330("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549ab8,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = _DAT_01549ab8;
  *(uint *)(_DAT_01549ab8 + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_01549ab8;
  *(uint *)(_DAT_01549ab8 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  _DAT_01c5b0e0 = _DAT_01549ab4;
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549abc = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xba;
    core_main_c_FUN_004e4330("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0(_DAT_01549abc,"micro.raw",0x94,0xec,0)
  ;
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549abc);
  pCVar2 = _DAT_01549abc;
  *(uint *)(_DAT_01549abc + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,1,0x20,0x7e);
  pCVar2 = _DAT_01549abc;
  *(uint *)(_DAT_01549abc + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004af790(pCVar1);
  }
  _DAT_01549ac0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xc9;
    core_main_c_FUN_004e4330("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
            (_DAT_01549ac0,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004b0500(_DAT_01549ac0);
  pCVar2 = _DAT_01549ac0;
  *(uint *)(_DAT_01549ac0 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549ac0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(_DAT_01549ac0,1,0xe0,0xff);
  pCVar2 = _DAT_01549ac0;
  *(uint *)(_DAT_01549ac0 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(pCVar2,1);
  if (_DAT_01dd4890 == 0) {
    return;
  }
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,&DAT_006034c0,0xe,2,2);
  }
  _DAT_01549ac4 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xdb;
    core_main_c_FUN_004e4330("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = _DAT_01549ac4;
  pCVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,&DAT_006034c0,0x12,0,0);
  }
  _DAT_01549acc = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xe1;
    core_main_c_FUN_004e4330("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = _DAT_01549acc;
  pCVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,&DAT_006034c0,0xc,0,0);
  }
  _DAT_01549ac8 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xe7;
    core_main_c_FUN_004e4330("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = _DAT_01549ac8;
  pCVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0057fd50(pCVar3,&DAT_006034c0,10,0,0);
  }
  _DAT_01549ad0 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xed;
    core_main_c_FUN_004e4330("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = _DAT_01549ad0;
  pCVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  return;
}
