// Name: core_dfont.cpp_FUN_00447ea0
// Address: 00447ea0
// Address Range: [[00447ea0, 00448635]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_00447ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_00447ea0(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cb8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x41;
    core_main_c_FUN_004e4500("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cb8,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511cb8);
  pCVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(_DAT_01511cb8,1,0xc0,0xdf);
  pCVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cbc = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x51;
    core_main_c_FUN_004e4500("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cbc,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511cbc);
  pCVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x3668) = 5;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,2,0x20,0x7e);
  pCVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cc0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x60;
    core_main_c_FUN_004e4500("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cc0,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511cc0);
  pCVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(_DAT_01511cc0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(_DAT_01511cc0,1,0xe0,0xff);
  pCVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cc4 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x71;
    core_main_c_FUN_004e4500("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cc4,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511cc4);
  pCVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  _DAT_01c25590 = _DAT_01511cc4;
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cc8 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x84;
    core_main_c_FUN_004e4500("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cc8,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = _DAT_01511cc8;
  *(uint *)(_DAT_01511cc8 + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_01511cc8;
  *(uint *)(_DAT_01511cc8 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  _DAT_01c25590 = _DAT_01511cc4;
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511ccc = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x96;
    core_main_c_FUN_004e4500("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0(_DAT_01511ccc,"micro.raw",0x94,0xec,0)
  ;
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511ccc);
  pCVar2 = _DAT_01511ccc;
  *(uint *)(_DAT_01511ccc + 0x3668) = 4;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,1,0x20,0x7e);
  pCVar2 = _DAT_01511ccc;
  *(uint *)(_DAT_01511ccc + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  pCVar1 = (CBitFont *)debugAllocTracked1(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_CBitFont_ctor_FUN_004a7b70(pCVar1);
  }
  _DAT_01511cd0 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xa5;
    core_main_c_FUN_004e4500("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0
            (_DAT_01511cd0,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(_DAT_01511cd0);
  pCVar2 = _DAT_01511cd0;
  *(uint *)(_DAT_01511cd0 + 0x3668) = 8;
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(pCVar2,3,0x20,0x7e);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(_DAT_01511cd0,0,0xc0,0xdf);
  engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004ab5c0(_DAT_01511cd0,1,0xe0,0xff);
  pCVar2 = _DAT_01511cd0;
  *(uint *)(_DAT_01511cd0 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(pCVar2,1);
  if (_DAT_01d63250 == 0) {
    return;
  }
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,&DAT_0061b190,0xe,2,2);
  }
  _DAT_01511cd4 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xb7;
    core_main_c_FUN_004e4500("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = _DAT_01511cd4;
  pCVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,&DAT_0061b190,0x12,0,0);
  }
  _DAT_01511cdc = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xbd;
    core_main_c_FUN_004e4500("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = _DAT_01511cdc;
  pCVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,&DAT_0061b190,0xc,0,0);
  }
  _DAT_01511cd8 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xc3;
    core_main_c_FUN_004e4500("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = _DAT_01511cd8;
  pCVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)debugAllocTracked1(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_CWinFont_ctor_FUN_0058df90(pCVar3,&DAT_0061b190,10,0,0);
  }
  _DAT_01511ce0 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xc9;
    core_main_c_FUN_004e4500("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = _DAT_01511ce0;
  pCVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  return;
}
