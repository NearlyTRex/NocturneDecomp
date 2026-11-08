// Name: FUN_00459f50
// Address: 00459f50
// Address Range: [[00459f50, 0045a8cf]]
// Convention: unknown
// Signature: void FUN_00459f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459f50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549aa0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x43;
    FUN_004e4330("Medium font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549aa0,"nocfont.raw",0x136,0x1ae,0);
  FUN_004b0500(_DAT_01549aa0);
  iVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x3668) = 8;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  FUN_004b3150(_DAT_01549aa0,1,0xc0,0xdf);
  iVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549aa4 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x53;
    FUN_004e4330("Tiny font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549aa4,"nocsmall.raw",0xf8,0x158,0);
  FUN_004b0500(_DAT_01549aa4);
  iVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x3668) = 5;
  FUN_004b3150(iVar2,2,0x20,0x7e);
  iVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549aa8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x62;
    FUN_004e4330("Theme font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549aa8,"menufont.raw",0xfa,0x23f,0);
  FUN_004b0500(_DAT_01549aa8);
  iVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x3668) = 8;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  FUN_004b3150(_DAT_01549aa8,0,0xc0,0xdf);
  FUN_004b3150(_DAT_01549aa8,1,0xe0,0xff);
  iVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549aac = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x73;
    FUN_004e4330("Menu font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549aac,"BW3_font.raw",0xfa,0x23f,2);
  FUN_004b0500(_DAT_01549aac);
  iVar2 = _DAT_01549aac;
  *(uint *)(_DAT_01549aac + 0x3668) = 8;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  FUN_004b3150(_DAT_01549aac,0,0xc0,0xdf);
  FUN_004b3150(_DAT_01549aac,1,0xe0,0xff);
  iVar2 = _DAT_01549aac;
  *(uint *)(_DAT_01549aac + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549ab0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x84;
    FUN_004e4330("Small menu font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549ab0,"BW3_font2.raw",0xfa,0x23f,2);
  FUN_004b0500(_DAT_01549ab0);
  iVar2 = _DAT_01549ab0;
  *(uint *)(_DAT_01549ab0 + 0x3668) = 8;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  FUN_004b3150(_DAT_01549ab0,0,0xc0,0xdf);
  FUN_004b3150(_DAT_01549ab0,1,0xe0,0xff);
  iVar2 = _DAT_01549ab0;
  *(uint *)(_DAT_01549ab0 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549ab4 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0x95;
    FUN_004e4330("Debug font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549ab4,"fnte_pfd.RAW",0x94,0xec,0);
  FUN_004b0500(_DAT_01549ab4);
  iVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x3668) = 4;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  _DAT_01c5b0e0 = _DAT_01549ab4;
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549ab8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xa8;
    FUN_004e4330("Console font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549ab8,"fnte_f.RAW",0x94,0xec,0xff);
  iVar2 = _DAT_01549ab8;
  *(uint *)(_DAT_01549ab8 + 0x3668) = 4;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_01549ab8;
  *(uint *)(_DAT_01549ab8 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  _DAT_01c5b0e0 = _DAT_01549ab4;
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549abc = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xba;
    FUN_004e4330("Micro font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549abc,"micro.raw",0x94,0xec,0);
  FUN_004b0500(_DAT_01549abc);
  iVar2 = _DAT_01549abc;
  *(uint *)(_DAT_01549abc + 0x3668) = 4;
  FUN_004b3150(iVar2,1,0x20,0x7e);
  iVar2 = _DAT_01549abc;
  *(uint *)(_DAT_01549abc + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  iVar1 = FUN_005a3cb2(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004af790(iVar1);
  }
  _DAT_01549ac0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xc9;
    FUN_004e4330("Hand font object not allocated!");
  }
  FUN_004af8f0(_DAT_01549ac0,"dochand.raw",0x100,0x100,0);
  FUN_004b0500(_DAT_01549ac0);
  iVar2 = _DAT_01549ac0;
  *(uint *)(_DAT_01549ac0 + 0x3668) = 8;
  FUN_004b3150(iVar2,3,0x20,0x7e);
  FUN_004b3150(_DAT_01549ac0,0,0xc0,0xdf);
  FUN_004b3150(_DAT_01549ac0,1,0xe0,0xff);
  iVar2 = _DAT_01549ac0;
  *(uint *)(_DAT_01549ac0 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004b31b0(iVar2,1);
  if (_DAT_01dd4890 == 0) {
    return;
  }
  iVar1 = FUN_005a3cb2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0057fd50(iVar1,&DAT_006034c0,0xe,2,2);
  }
  _DAT_01549ac4 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xdb;
    FUN_004e4330("initFonts - Can't allocate gMediumOSFont");
  }
  iVar1 = _DAT_01549ac4;
  iVar2 = _DAT_01549aa0;
  *(uint *)(_DAT_01549aa0 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005a3cb2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0057fd50(iVar1,&DAT_006034c0,0x12,0,0);
  }
  _DAT_01549acc = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xe1;
    FUN_004e4330("initFonts - Can't allocate gThemeOSFont");
  }
  iVar1 = _DAT_01549acc;
  iVar2 = _DAT_01549aa8;
  *(uint *)(_DAT_01549aa8 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005a3cb2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0057fd50(iVar1,&DAT_006034c0,0xc,0,0);
  }
  _DAT_01549ac8 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xe7;
    FUN_004e4330("initFonts - Can't allocate gTinyOSFont");
  }
  iVar1 = _DAT_01549ac8;
  iVar2 = _DAT_01549aa4;
  *(uint *)(_DAT_01549aa4 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005a3cb2(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0057fd50(iVar1,&DAT_006034c0,10,0,0);
  }
  _DAT_01549ad0 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\dfont.cpp";
    _DAT_01d71de4 = 0xed;
    FUN_004e4330("initFonts - Can't allocate gDebugOSFont");
  }
  iVar1 = _DAT_01549ad0;
  iVar2 = _DAT_01549ab4;
  *(uint *)(_DAT_01549ab4 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  return;
}
