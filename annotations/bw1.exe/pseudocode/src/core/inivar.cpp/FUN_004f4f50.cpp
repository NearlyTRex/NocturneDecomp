// Name: FUN_004f4f50
// Address: 004f4f50
// Address Range: [[004f4f50, 004f575f]]
// Convention: unknown
// Signature: void FUN_004f4f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f4f50(void)

{
  int iVar1;
  byte local_210 [516];
  
  iVar1 = FUN_005c1dc0(".\\system\\nocturne.ini",0x180);
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\core\\inivar.cpp";
    _DAT_01d1d404 = 0x57;
    FUN_005030e0("Please copy Nocturne to your hard drive");
  }
  FUN_004f4b00(local_210,".\\system\\nocturne.ini",0);
  FUN_004f4bc0(local_210,"Graphics");
  FUN_004f4d10(local_210,"gamePIXX",0x01CCF390);
  FUN_004f4d10(local_210,"gamePIXY",0x01CCF390 + 4);
  FUN_004f4d10(local_210,"gameBPP",0x01CCF390 + 8);
  FUN_004f4d10(local_210,"useDirect3D",&DAT_02c83370);
  FUN_004f4d10(local_210,"useAGPFlag",&DAT_02c8337c);
  FUN_004f4c00(local_210,"rendererDLLPath",&DAT_006257d0,0xfa);
  FUN_004f4d10(local_210,"gamma",0x01CCF390 + 0x240);
  FUN_004f4d10(local_210,"heroNumber",0x01CCF390 + 0xd4);
  FUN_004f4d10(local_210,"haloMode",0x01CCF390 + 0xc);
  FUN_004f4d10(local_210,"firstTimeFlag",&DAT_01d06d68);
  FUN_004f4d10(local_210,"subtitleMode",0x01CCF390 + 0x10);
  FUN_004f4d10(local_210,"bloodFlag",0x01CCF390 + 0x14);
  FUN_004f4d10(local_210,"nudityFlag",0x01CCF390 + 0x18);
  FUN_004f4d10(local_210,"foulLanguageFlag",0x01CCF390 + 0x1c);
  FUN_004f4d10(local_210,"shadowFlag",0x01CCF390 + 0x24);
  FUN_004f4d10(local_210,"quimbyFlag",0x01CCF390 + 0x20);
  _DAT_01d1f5d4 = 0;
  FUN_004f4d10(local_210,"currentBoard",&DAT_01d1f5d4);
  FUN_004f4d10(local_210,"puzzleDifficultyMode",0x01CCF390 + 0xe4);
  FUN_004f4d10(local_210,"combatDifficultyMode",0x01CCF390 + 0xe8);
  FUN_004f4bc0(local_210,"Sound");
  FUN_005760b0(local_210);
  FUN_004f4bc0(local_210,"Control");
  FUN_004f4d10(local_210,"gameControl",0x01CCF390 + 0xd0);
  FUN_004d0400(0x01CCF390);
  FUN_004f4d10(local_210,"keyWalk",0x01CCF390 + 0x28);
  FUN_004f4d10(local_210,"keyBackup",0x01CCF390 + 0x2c);
  FUN_004f4d10(local_210,"keyRun",0x01CCF390 + 0x30);
  FUN_004f4d10(local_210,"keyStrafe",0x01CCF390 + 0x34);
  FUN_004f4d10(local_210,"keyStrafeLeft",0x01CCF390 + 0x38);
  FUN_004f4d10(local_210,"keyStrafeRight",0x01CCF390 + 0x3c);
  FUN_004f4d10(local_210,"keyRight",0x01CCF390 + 0x40);
  FUN_004f4d10(local_210,"keyLeft",0x01CCF390 + 0x44);
  FUN_004f4d10(local_210,"keyFire",0x01CCF390 + 0x48);
  FUN_004f4d10(local_210,"keyUseItem",0x01CCF390 + 0x4c);
  FUN_004f4d10(local_210,"keyLight",0x01CCF390 + 0x50);
  FUN_004f4d10(local_210,"keyInfrared",0x01CCF390 + 0x54);
  FUN_004f4d10(local_210,"keyFieldNotes",0x01CCF390 + 0x58);
  FUN_004f4d10(local_210,"keyMap",0x01CCF390 + 0x5c);
  FUN_004f4d10(local_210,"keyCompass",0x01CCF390 + 0x60);
  FUN_004f4d10(local_210,"keySPS",0x01CCF390 + 100);
  FUN_004f4d10(local_210,"keyDraw",0x01CCF390 + 0x68);
  FUN_004f4d10(local_210,"keyJump",0x01CCF390 + 0x6c);
  FUN_004f4d10(local_210,"keyQuickTurn",0x01CCF390 + 0x70);
  FUN_004f4d10(local_210,"keyPointUp",0x01CCF390 + 0x74);
  FUN_004f4d10(local_210,"keyPointDown",0x01CCF390 + 0x78);
  FUN_004f4d10(local_210,"keyWeapon1",0x01CCF390 + 0x7c);
  FUN_004f4d10(local_210,"keyWeapon2",0x01CCF390 + 0x80);
  FUN_004f4d10(local_210,"keyWeapon3",0x01CCF390 + 0x84);
  FUN_004f4d10(local_210,"keyWeapon4",0x01CCF390 + 0x88);
  FUN_004f4d10(local_210,"keyWeapon5",0x01CCF390 + 0x8c);
  FUN_004f4d10(local_210,"keyNextWeapon",0x01CCF390 + 0x90);
  FUN_004f4d10(local_210,"keyPrevWeapon",0x01CCF390 + 0x94);
  FUN_004f4d10(local_210,"keyNextItem",0x01CCF390 + 0x98);
  FUN_004f4d10(local_210,"keyPrevItem",0x01CCF390 + 0x9c);
  FUN_004f4d10(local_210,"keyItemDesc",0x01CCF390 + 0xa0);
  FUN_004f4d10(local_210,"keyNextAmmo",0x01CCF390 + 0xa4);
  FUN_004f4d10(local_210,"invertMouseYAxis",0x01CCF390 + 0xa8);
  FUN_004f4d10(local_210,"alwaysRun",0x01CCF390 + 0xac);
  FUN_004f4d10(local_210,"xMouseSensitivity",0x01CCF390 + 0xb0);
  FUN_004f4d10(local_210,"yMouseSensitivity",0x01CCF390 + 0xb4);
  FUN_004f4d10(local_210,"xCenter",0x01CCF390 + 0xb8);
  FUN_004f4d10(local_210,"yCenter",0x01CCF390 + 0xbc);
  FUN_004f4d10(local_210,"xStickMin",0x01CCF390 + 0xc0);
  FUN_004f4d10(local_210,"xStickMax",0x01CCF390 + 0xc4);
  FUN_004f4d10(local_210,"yStickMin",0x01CCF390 + 200);
  FUN_004f4d10(local_210,"yStickMax",0x01CCF390 + 0xcc);
  FUN_004f4d10(local_210,"aimMode",0x01CCF390 + 0xd8);
  FUN_004f4d10(local_210,"autoUseHealth",0x01CCF390 + 0xdc);
  FUN_004f4bc0(local_210,"Debug");
  FUN_004f4d10(local_210,"logConsoleFlag",PTR_DAT_00611100);
  FUN_004f4d10(local_210,"headOfHorrorCheat",0x01CCF390 + 0x230);
  FUN_004f4bc0(local_210,"Editor");
  FUN_004f4b30(local_210,0);
  return;
}
