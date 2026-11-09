// Name: core_dfont.cpp_FUN_0045e000
// Address: 0045e000
// Address Range: [[0045e000, 0045e795]]
// Convention: __cdecl
// Signature: void __cdecl core_dfont_cpp_FUN_0045e000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfont_cpp_FUN_0045e000(void)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CWinFont *pCVar3;
  CWinFont *pCVar4;
  
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d23c = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x41;
    core_main_c_FUN_005030e0("Medium font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d23c,"nocfont.raw",0x136,0x1ae,0);
  engine_font_cpp_FUN_004c18b0(_DAT_0152d23c);
  pCVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x3668) = 8;
  engine_font_cpp_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_FUN_004c4570(_DAT_0152d23c,1,0xc0,0xdf);
  pCVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d240 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x51;
    core_main_c_FUN_005030e0("Tiny font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d240,"nocsmall.raw",0xf8,0x158,0);
  engine_font_cpp_FUN_004c18b0(_DAT_0152d240);
  pCVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x3668) = 5;
  engine_font_cpp_FUN_004c4570(pCVar2,2,0x20,0x7e);
  pCVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d244 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x60;
    core_main_c_FUN_005030e0("Theme font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d244,"menufont.raw",0xfa,0x23f,0);
  engine_font_cpp_FUN_004c18b0(_DAT_0152d244);
  pCVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x3668) = 8;
  engine_font_cpp_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_FUN_004c4570(_DAT_0152d244,0,0xc0,0xdf);
  engine_font_cpp_FUN_004c4570(_DAT_0152d244,1,0xe0,0xff);
  pCVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d248 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x71;
    core_main_c_FUN_005030e0("Debug font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d248,"fnte_pfd.RAW",0x94,0xec,0);
  engine_font_cpp_FUN_004c18b0(_DAT_0152d248);
  pCVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x3668) = 4;
  engine_font_cpp_FUN_004c4570(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  _DAT_01c3eb50 = _DAT_0152d248;
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d24c = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x84;
    core_main_c_FUN_005030e0("Console font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d24c,"fnte_f.RAW",0x94,0xec,0xff);
  pCVar2 = _DAT_0152d24c;
  *(uint *)(_DAT_0152d24c + 0x3668) = 4;
  engine_font_cpp_FUN_004c4570(pCVar2,3,0x20,0x7e);
  pCVar2 = _DAT_0152d24c;
  *(uint *)(_DAT_0152d24c + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  _DAT_01c3eb50 = _DAT_0152d248;
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d250 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x96;
    core_main_c_FUN_005030e0("Micro font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0(_DAT_0152d250,"micro.raw",0x94,0xec,0)
  ;
  engine_font_cpp_FUN_004c18b0(_DAT_0152d250);
  pCVar2 = _DAT_0152d250;
  *(uint *)(_DAT_0152d250 + 0x3668) = 4;
  engine_font_cpp_FUN_004c4570(pCVar2,1,0x20,0x7e);
  pCVar2 = _DAT_0152d250;
  *(uint *)(_DAT_0152d250 + 0x41fc) = 1;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  pCVar1 = (CBitFont *)FUN_005c0f32(0x4220);
  pCVar2 = (CBitFont *)0x0;
  if (pCVar1 != (CBitFont *)0x0) {
    pCVar2 = engine_font_cpp_FUN_004c0b40(pCVar1);
  }
  _DAT_0152d254 = pCVar2;
  if (pCVar2 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xa5;
    core_main_c_FUN_005030e0("Hand font object not allocated!");
  }
  engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0
            (_DAT_0152d254,"dochand.raw",0x100,0x100,0);
  engine_font_cpp_FUN_004c18b0(_DAT_0152d254);
  pCVar2 = _DAT_0152d254;
  *(uint *)(_DAT_0152d254 + 0x3668) = 8;
  engine_font_cpp_FUN_004c4570(pCVar2,3,0x20,0x7e);
  engine_font_cpp_FUN_004c4570(_DAT_0152d254,0,0xc0,0xdf);
  engine_font_cpp_FUN_004c4570(_DAT_0152d254,1,0xe0,0xff);
  pCVar2 = _DAT_0152d254;
  *(uint *)(_DAT_0152d254 + 0x41fc) = 2;
  *(uint *)(pCVar2 + 0x4200) = 1;
  engine_font_cpp_FUN_004c45d0(pCVar2,1);
  if (_DAT_01d7f1b8 == 0) {
    return;
  }
  pCVar3 = (CWinFont *)FUN_005c0f32(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_FUN_005b1ad0(pCVar3,&DAT_006225f0,0xe,2,2);
  }
  _DAT_0152d258 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xb7;
    core_main_c_FUN_005030e0("initFonts - Can't allocate gMediumOSFont");
  }
  pCVar4 = _DAT_0152d258;
  pCVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)FUN_005c0f32(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_FUN_005b1ad0(pCVar3,&DAT_006225f0,0x12,0,0);
  }
  _DAT_0152d260 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xbd;
    core_main_c_FUN_005030e0("initFonts - Can't allocate gThemeOSFont");
  }
  pCVar4 = _DAT_0152d260;
  pCVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)FUN_005c0f32(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_FUN_005b1ad0(pCVar3,&DAT_006225f0,0xc,0,0);
  }
  _DAT_0152d25c = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xc3;
    core_main_c_FUN_005030e0("initFonts - Can't allocate gTinyOSFont");
  }
  pCVar4 = _DAT_0152d25c;
  pCVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  pCVar3 = (CWinFont *)FUN_005c0f32(0x6b80);
  pCVar4 = (CWinFont *)0x0;
  if (pCVar3 != (CWinFont *)0x0) {
    pCVar4 = engine_winfont_cpp_FUN_005b1ad0(pCVar3,&DAT_006225f0,10,0,0);
  }
  _DAT_0152d264 = pCVar4;
  if (pCVar4 == (CWinFont *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xc9;
    core_main_c_FUN_005030e0("initFonts - Can't allocate gDebugOSFont");
  }
  pCVar4 = _DAT_0152d264;
  pCVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x4210) = 1;
  *(CWinFont **)(pCVar2 + 0x4214) = pCVar4;
  return;
}
