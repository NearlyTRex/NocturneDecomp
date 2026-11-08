// Name: FUN_004d8e70
// Address: 004d8e70
// Address Range: [[004d8e70, 004d95bc]]
// Convention: unknown
// Signature: void FUN_004d8e70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8e70(void)

{
  int iVar1;
  byte local_210 [516];
  
  iVar1 = FUN_005a4bd0(".\\system\\bw3.ini",0x180);
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\core\\inivar.cpp";
    _DAT_01d71de4 = 0x57;
    FUN_004e4330("Please copy Blair Witch 3 to your hard drive");
  }
  FUN_004d8a20(local_210,".\\system\\bw3.ini",0);
  FUN_004d8ae0(local_210,"Graphics");
  FUN_004d8c30(local_210,"gamePIXX",0x01D2130C);
  FUN_004d8c30(local_210,"gamePIXY",0x01D2130C + 4);
  FUN_004d8c30(local_210,"gameBPP",0x01D2130C + 8);
  FUN_004d8c30(local_210,"useDirect3D",&DAT_02cf5fcc);
  FUN_004d8c30(local_210,"useAGPFlag",&DAT_02cf5fd8);
  FUN_004d8b20(local_210,"rendererDLLPath",&DAT_00606730,0xfa);
  FUN_004d8c30(local_210,"gamma",0x01D2130C + 0x248);
  FUN_004d8c30(local_210,"heroNumber",0x01D2130C + 0xd8);
  FUN_004d8c30(local_210,"haloMode",0x01D2130C + 0xc);
  FUN_004d8c30(local_210,"firstTimeFlag",&DAT_01d5bc7c);
  FUN_004d8c30(local_210,"subtitleMode",0x01D2130C + 0x10);
  FUN_004d8c30(local_210,"bloodFlag",0x01D2130C + 0x14);
  FUN_004d8c30(local_210,"nudityFlag",0x01D2130C + 0x18);
  FUN_004d8c30(local_210,"foulLanguageFlag",0x01D2130C + 0x1c);
  FUN_004d8c30(local_210,"shadowFlag",0x01D2130C + 0x24);
  _DAT_01d74020 = 0;
  FUN_004d8c30(local_210,"currentBoard",&DAT_01d74020);
  FUN_004d8ae0(local_210,"Sound");
  FUN_00559220(local_210);
  FUN_004d8ae0(local_210,"Control");
  FUN_004d8c30(local_210,"gameControl",0x01D2130C + 0xd4);
  FUN_004b8e60(0x01D2130C);
  FUN_004d8c30(local_210,"keyWalk",0x01D2130C + 0x28);
  FUN_004d8c30(local_210,"keyBackup",0x01D2130C + 0x2c);
  FUN_004d8c30(local_210,"keyRun",0x01D2130C + 0x30);
  FUN_004d8c30(local_210,"keyStrafe",0x01D2130C + 0x34);
  FUN_004d8c30(local_210,"keyStrafeLeft",0x01D2130C + 0x38);
  FUN_004d8c30(local_210,"keyStrafeRight",0x01D2130C + 0x3c);
  FUN_004d8c30(local_210,"keyRight",0x01D2130C + 0x40);
  FUN_004d8c30(local_210,"keyLeft",0x01D2130C + 0x44);
  FUN_004d8c30(local_210,"keyFire",0x01D2130C + 0x48);
  FUN_004d8c30(local_210,"keyAction",0x01D2130C + 0x4c);
  FUN_004d8c30(local_210,"keyUseItem",0x01D2130C + 0x50);
  FUN_004d8c30(local_210,"keyLight",0x01D2130C + 0x54);
  FUN_004d8c30(local_210,"keyFieldNotes",0x01D2130C + 0x5c);
  FUN_004d8c30(local_210,"keyMap",0x01D2130C + 0x60);
  FUN_004d8c30(local_210,"keyVoodooDoll",0x01D2130C + 0x68);
  FUN_004d8c30(local_210,"keyDraw",0x01D2130C + 0x6c);
  FUN_004d8c30(local_210,"keyQuickTurn",0x01D2130C + 0x74);
  FUN_004d8c30(local_210,"keyPointUp",0x01D2130C + 0x78);
  FUN_004d8c30(local_210,"keyPointDown",0x01D2130C + 0x7c);
  FUN_004d8c30(local_210,"keyWeapon1",0x01D2130C + 0x80);
  FUN_004d8c30(local_210,"keyWeapon2",0x01D2130C + 0x84);
  FUN_004d8c30(local_210,"keyWeapon3",0x01D2130C + 0x88);
  FUN_004d8c30(local_210,"keyWeapon4",0x01D2130C + 0x8c);
  FUN_004d8c30(local_210,"keyWeapon5",0x01D2130C + 0x90);
  FUN_004d8c30(local_210,"keyNextWeapon",0x01D2130C + 0x94);
  FUN_004d8c30(local_210,"keyPrevWeapon",0x01D2130C + 0x98);
  FUN_004d8c30(local_210,"keyNextItem",0x01D2130C + 0x9c);
  FUN_004d8c30(local_210,"keyPrevItem",0x01D2130C + 0xa0);
  FUN_004d8c30(local_210,"invertMouseYAxis",0x01D2130C + 0xac);
  FUN_004d8c30(local_210,"alwaysRun",0x01D2130C + 0xb0);
  FUN_004d8c30(local_210,"xMouseSensitivity",0x01D2130C + 0xb4);
  FUN_004d8c30(local_210,"yMouseSensitivity",0x01D2130C + 0xb8);
  FUN_004d8c30(local_210,"xCenter",0x01D2130C + 0xbc);
  FUN_004d8c30(local_210,"yCenter",0x01D2130C + 0xc0);
  FUN_004d8c30(local_210,"xStickMin",0x01D2130C + 0xc4);
  FUN_004d8c30(local_210,"xStickMax",0x01D2130C + 200);
  FUN_004d8c30(local_210,"yStickMin",0x01D2130C + 0xcc);
  FUN_004d8c30(local_210,"yStickMax",0x01D2130C + 0xd0);
  FUN_004d8c30(local_210,"aimMode",0x01D2130C + 0xdc);
  FUN_004d8c30(local_210,"show_hero_numbers",0x01D2130C + 0xe0);
  FUN_004d8c30(local_210,"show_crosshair",0x01D2130C + 0xe4);
  FUN_004d8ae0(local_210,"Debug");
  FUN_004d8c30(local_210,"logConsoleFlag",PTR_DAT_005f1690);
  FUN_004d8ae0(local_210,"Editor");
  FUN_004d8a50(local_210,0);
  return;
}
