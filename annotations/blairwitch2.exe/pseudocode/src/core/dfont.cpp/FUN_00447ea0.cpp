// Name: FUN_00447ea0
// Address: 00447ea0
// Address Range: [[00447ea0, 00448635]]
// Convention: unknown
// Signature: void FUN_00447ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447ea0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cb8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x41;
    FUN_004e4500("Medium font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cb8,"nocfont.raw",0x136,0x1ae,0);
  FUN_004a88d0(_DAT_01511cb8);
  iVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x3668) = 8;
  FUN_004ab5c0(iVar2,3,0x20,0x7e);
  FUN_004ab5c0(_DAT_01511cb8,1,0xc0,0xdf);
  iVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cbc = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x51;
    FUN_004e4500("Tiny font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cbc,"nocsmall.raw",0xf8,0x158,0);
  FUN_004a88d0(_DAT_01511cbc);
  iVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x3668) = 5;
  FUN_004ab5c0(iVar2,2,0x20,0x7e);
  iVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cc0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x60;
    FUN_004e4500("Theme font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cc0,"menufont.raw",0xfa,0x23f,0);
  FUN_004a88d0(_DAT_01511cc0);
  iVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x3668) = 8;
  FUN_004ab5c0(iVar2,3,0x20,0x7e);
  FUN_004ab5c0(_DAT_01511cc0,0,0xc0,0xdf);
  FUN_004ab5c0(_DAT_01511cc0,1,0xe0,0xff);
  iVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cc4 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x71;
    FUN_004e4500("Debug font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cc4,"fnte_pfd.RAW",0x94,0xec,0);
  FUN_004a88d0(_DAT_01511cc4);
  iVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x3668) = 4;
  FUN_004ab5c0(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  _DAT_01c25590 = _DAT_01511cc4;
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cc8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x84;
    FUN_004e4500("Console font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cc8,"fnte_f.RAW",0x94,0xec,0xff);
  iVar2 = _DAT_01511cc8;
  *(uint *)(_DAT_01511cc8 + 0x3668) = 4;
  FUN_004ab5c0(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_01511cc8;
  *(uint *)(_DAT_01511cc8 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  _DAT_01c25590 = _DAT_01511cc4;
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511ccc = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0x96;
    FUN_004e4500("Micro font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511ccc,"micro.raw",0x94,0xec,0);
  FUN_004a88d0(_DAT_01511ccc);
  iVar2 = _DAT_01511ccc;
  *(uint *)(_DAT_01511ccc + 0x3668) = 4;
  FUN_004ab5c0(iVar2,1,0x20,0x7e);
  iVar2 = _DAT_01511ccc;
  *(uint *)(_DAT_01511ccc + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  iVar1 = FUN_005b8be2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004a7b70(iVar1);
  }
  _DAT_01511cd0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xa5;
    FUN_004e4500("Hand font object not allocated!");
  }
  FUN_004a7cd0(_DAT_01511cd0,"dochand.raw",0x100,0x100,0);
  FUN_004a88d0(_DAT_01511cd0);
  iVar2 = _DAT_01511cd0;
  *(uint *)(_DAT_01511cd0 + 0x3668) = 8;
  FUN_004ab5c0(iVar2,3,0x20,0x7e);
  FUN_004ab5c0(_DAT_01511cd0,0,0xc0,0xdf);
  FUN_004ab5c0(_DAT_01511cd0,1,0xe0,0xff);
  iVar2 = _DAT_01511cd0;
  *(uint *)(_DAT_01511cd0 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004ab620(iVar2,1);
  if (_DAT_01d63250 == 0) {
    return;
  }
  iVar1 = FUN_005b8be2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0058df90(iVar1,&DAT_0061b190,0xe,2,2);
  }
  _DAT_01511cd4 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xb7;
    FUN_004e4500("initFonts - Can't allocate gMediumOSFont");
  }
  iVar1 = _DAT_01511cd4;
  iVar2 = _DAT_01511cb8;
  *(uint *)(_DAT_01511cb8 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005b8be2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0058df90(iVar1,&DAT_0061b190,0x12,0,0);
  }
  _DAT_01511cdc = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xbd;
    FUN_004e4500("initFonts - Can't allocate gThemeOSFont");
  }
  iVar1 = _DAT_01511cdc;
  iVar2 = _DAT_01511cc0;
  *(uint *)(_DAT_01511cc0 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005b8be2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0058df90(iVar1,&DAT_0061b190,0xc,0,0);
  }
  _DAT_01511cd8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xc3;
    FUN_004e4500("initFonts - Can't allocate gTinyOSFont");
  }
  iVar1 = _DAT_01511cd8;
  iVar2 = _DAT_01511cbc;
  *(uint *)(_DAT_01511cbc + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005b8be2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0058df90(iVar1,&DAT_0061b190,10,0,0);
  }
  _DAT_01511ce0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfont.cpp";
    _DAT_01d046a4 = 0xc9;
    FUN_004e4500("initFonts - Can't allocate gDebugOSFont");
  }
  iVar1 = _DAT_01511ce0;
  iVar2 = _DAT_01511cc4;
  *(uint *)(_DAT_01511cc4 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  return;
}
