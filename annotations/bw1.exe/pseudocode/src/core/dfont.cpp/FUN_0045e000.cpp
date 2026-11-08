// Name: FUN_0045e000
// Address: 0045e000
// Address Range: [[0045e000, 0045e795]]
// Convention: unknown
// Signature: void FUN_0045e000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e000(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d23c = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x41;
    FUN_005030e0("Medium font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d23c,"nocfont.raw",0x136,0x1ae,0);
  FUN_004c18b0(_DAT_0152d23c);
  iVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x3668) = 8;
  FUN_004c4570(iVar2,3,0x20,0x7e);
  FUN_004c4570(_DAT_0152d23c,1,0xc0,0xdf);
  iVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d240 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x51;
    FUN_005030e0("Tiny font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d240,"nocsmall.raw",0xf8,0x158,0);
  FUN_004c18b0(_DAT_0152d240);
  iVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x3668) = 5;
  FUN_004c4570(iVar2,2,0x20,0x7e);
  iVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d244 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x60;
    FUN_005030e0("Theme font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d244,"menufont.raw",0xfa,0x23f,0);
  FUN_004c18b0(_DAT_0152d244);
  iVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x3668) = 8;
  FUN_004c4570(iVar2,3,0x20,0x7e);
  FUN_004c4570(_DAT_0152d244,0,0xc0,0xdf);
  FUN_004c4570(_DAT_0152d244,1,0xe0,0xff);
  iVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d248 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x71;
    FUN_005030e0("Debug font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d248,"fnte_pfd.RAW",0x94,0xec,0);
  FUN_004c18b0(_DAT_0152d248);
  iVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x3668) = 4;
  FUN_004c4570(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  _DAT_01c3eb50 = _DAT_0152d248;
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d24c = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x84;
    FUN_005030e0("Console font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d24c,"fnte_f.RAW",0x94,0xec,0xff);
  iVar2 = _DAT_0152d24c;
  *(uint *)(_DAT_0152d24c + 0x3668) = 4;
  FUN_004c4570(iVar2,3,0x20,0x7e);
  iVar2 = _DAT_0152d24c;
  *(uint *)(_DAT_0152d24c + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  _DAT_01c3eb50 = _DAT_0152d248;
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d250 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0x96;
    FUN_005030e0("Micro font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d250,"micro.raw",0x94,0xec,0);
  FUN_004c18b0(_DAT_0152d250);
  iVar2 = _DAT_0152d250;
  *(uint *)(_DAT_0152d250 + 0x3668) = 4;
  FUN_004c4570(iVar2,1,0x20,0x7e);
  iVar2 = _DAT_0152d250;
  *(uint *)(_DAT_0152d250 + 0x41fc) = 1;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  iVar1 = FUN_005c0f32(0x4220);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_004c0b40(iVar1);
  }
  _DAT_0152d254 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xa5;
    FUN_005030e0("Hand font object not allocated!");
  }
  FUN_004c0ca0(_DAT_0152d254,"dochand.raw",0x100,0x100,0);
  FUN_004c18b0(_DAT_0152d254);
  iVar2 = _DAT_0152d254;
  *(uint *)(_DAT_0152d254 + 0x3668) = 8;
  FUN_004c4570(iVar2,3,0x20,0x7e);
  FUN_004c4570(_DAT_0152d254,0,0xc0,0xdf);
  FUN_004c4570(_DAT_0152d254,1,0xe0,0xff);
  iVar2 = _DAT_0152d254;
  *(uint *)(_DAT_0152d254 + 0x41fc) = 2;
  *(uint *)(iVar2 + 0x4200) = 1;
  FUN_004c45d0(iVar2,1);
  if (_DAT_01d7f1b8 == 0) {
    return;
  }
  iVar1 = FUN_005c0f32(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005b1ad0(iVar1,&DAT_006225f0,0xe,2,2);
  }
  _DAT_0152d258 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xb7;
    FUN_005030e0("initFonts - Can't allocate gMediumOSFont");
  }
  iVar1 = _DAT_0152d258;
  iVar2 = _DAT_0152d23c;
  *(uint *)(_DAT_0152d23c + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005c0f32(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005b1ad0(iVar1,&DAT_006225f0,0x12,0,0);
  }
  _DAT_0152d260 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xbd;
    FUN_005030e0("initFonts - Can't allocate gThemeOSFont");
  }
  iVar1 = _DAT_0152d260;
  iVar2 = _DAT_0152d244;
  *(uint *)(_DAT_0152d244 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005c0f32(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005b1ad0(iVar1,&DAT_006225f0,0xc,0,0);
  }
  _DAT_0152d25c = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xc3;
    FUN_005030e0("initFonts - Can't allocate gTinyOSFont");
  }
  iVar1 = _DAT_0152d25c;
  iVar2 = _DAT_0152d240;
  *(uint *)(_DAT_0152d240 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  iVar1 = FUN_005c0f32(0x6b80);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_005b1ad0(iVar1,&DAT_006225f0,10,0,0);
  }
  _DAT_0152d264 = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfont.cpp";
    _DAT_01d1d404 = 0xc9;
    FUN_005030e0("initFonts - Can't allocate gDebugOSFont");
  }
  iVar1 = _DAT_0152d264;
  iVar2 = _DAT_0152d248;
  *(uint *)(_DAT_0152d248 + 0x4210) = 1;
  *(int *)(iVar2 + 0x4214) = iVar1;
  return;
}
