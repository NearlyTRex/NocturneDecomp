// Name: FUN_004d8d60
// Address: 004d8d60
// Address Range: [[004d8d60, 004d94ce]]
// Convention: unknown
// Signature: void FUN_004d8d60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8d60(void)

{
  int iVar1;
  byte local_20c [516];
  
  iVar1 = FUN_005b99e0(".\\system\\nocturne.ini",0x180);
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\core\\inivar.cpp";
    _DAT_01d046a4 = 0x58;
    FUN_004e4500("Please copy Nocturne to your hard drive");
  }
  FUN_004d8910(local_20c,".\\system\\nocturne.ini",0);
  FUN_004d89d0(local_20c,"Graphics");
  FUN_004d8b20(local_20c,"gamePIXX",0x01CB6900);
  FUN_004d8b20(local_20c,"gamePIXY",0x01CB6900 + 4);
  FUN_004d8b20(local_20c,"gameBPP",0x01CB6900 + 8);
  FUN_004d8b20(local_20c,"useDirect3D",&DAT_0264bba0);
  FUN_004d8b20(local_20c,"useAGPFlag",&DAT_0264bbac);
  FUN_004d8a10(local_20c,"rendererDLLPath",&DAT_0061e180,0xfa);
  FUN_004d8b20(local_20c,"gamma",0x01CB6900 + 0x240);
  FUN_004d8b20(local_20c,"heroNumber",0x01CB6900 + 0xd4);
  FUN_004d8b20(local_20c,"haloMode",0x01CB6900 + 0xc);
  FUN_004d8b20(local_20c,"firstTimeFlag",&DAT_01cee1a8);
  FUN_004d8b20(local_20c,"subtitleMode",0x01CB6900 + 0x10);
  FUN_004d8b20(local_20c,"bloodFlag",0x01CB6900 + 0x14);
  FUN_004d8b20(local_20c,"nudityFlag",0x01CB6900 + 0x18);
  FUN_004d8b20(local_20c,"foulLanguageFlag",0x01CB6900 + 0x1c);
  FUN_004d8b20(local_20c,"shadowFlag",0x01CB6900 + 0x24);
  FUN_004d8b20(local_20c,"quimbyFlag",0x01CB6900 + 0x20);
  FUN_004d8b20(local_20c,"particleDensity",&DAT_0061ec60);
  iVar1 = 0x01CB6900;
  if (*(int *)(0x01CB6900 + 0x20) != 0) {
    *(uint *)(0x01CB6900 + 0x18) = 0;
    *(uint *)(iVar1 + 0x1c) = 0;
    *(uint *)(iVar1 + 0x14) = 0;
  }
  _DAT_01d06a74 = 0;
  FUN_004d8b20(local_20c,"currentBoard",&DAT_01d06a74);
  FUN_004d8b20(local_20c,"puzzleDifficultyMode",0x01CB6900 + 0xe4);
  FUN_004d8b20(local_20c,"combatDifficultyMode",0x01CB6900 + 0xe8);
  FUN_004d89d0(local_20c,"Sound");
  FUN_00553680(local_20c);
  FUN_004d89d0(local_20c,"Control");
  FUN_004d8b20(local_20c,"gameControl",0x01CB6900 + 0xd0);
  FUN_004b6e10(0x01CB6900);
  FUN_004d8b20(local_20c,"keyWalk",0x01CB6900 + 0x28);
  FUN_004d8b20(local_20c,"keyBackup",0x01CB6900 + 0x2c);
  FUN_004d8b20(local_20c,"keyRun",0x01CB6900 + 0x30);
  FUN_004d8b20(local_20c,"keyStrafe",0x01CB6900 + 0x34);
  FUN_004d8b20(local_20c,"keyStrafeLeft",0x01CB6900 + 0x38);
  FUN_004d8b20(local_20c,"keyStrafeRight",0x01CB6900 + 0x3c);
  FUN_004d8b20(local_20c,"keyRight",0x01CB6900 + 0x40);
  FUN_004d8b20(local_20c,"keyLeft",0x01CB6900 + 0x44);
  FUN_004d8b20(local_20c,"keyFire",0x01CB6900 + 0x48);
  FUN_004d8b20(local_20c,"keyUseItem",0x01CB6900 + 0x4c);
  FUN_004d8b20(local_20c,"keyLight",0x01CB6900 + 0x50);
  FUN_004d8b20(local_20c,"keyDraw",0x01CB6900 + 0x68);
  FUN_004d8b20(local_20c,"keyPointUp",0x01CB6900 + 0x74);
  FUN_004d8b20(local_20c,"keyPointDown",0x01CB6900 + 0x78);
  FUN_004d8b20(local_20c,"keyWeapon1",0x01CB6900 + 0x7c);
  FUN_004d8b20(local_20c,"keyWeapon2",0x01CB6900 + 0x80);
  FUN_004d8b20(local_20c,"keyWeapon3",0x01CB6900 + 0x84);
  FUN_004d8b20(local_20c,"keyDrop",0x01CB6900 + 0xaf0);
  FUN_004d8b20(local_20c,"keyNextWeapon",0x01CB6900 + 0x90);
  FUN_004d8b20(local_20c,"keyPrevWeapon",0x01CB6900 + 0x94);
  FUN_004d8b20(local_20c,"keyNextItem",0x01CB6900 + 0x98);
  FUN_004d8b20(local_20c,"keyPrevItem",0x01CB6900 + 0x9c);
  FUN_004d8b20(local_20c,"keyItemDesc",0x01CB6900 + 0xa0);
  FUN_004d8b20(local_20c,"keyNextAmmo",0x01CB6900 + 0xa4);
  FUN_004d8b20(local_20c,"invertMouseYAxis",0x01CB6900 + 0xa8);
  FUN_004d8b20(local_20c,"alwaysRun",0x01CB6900 + 0xac);
  FUN_004d8b20(local_20c,"xMouseSensitivity",0x01CB6900 + 0xb0);
  FUN_004d8b20(local_20c,"yMouseSensitivity",0x01CB6900 + 0xb4);
  FUN_004d8b20(local_20c,"xCenter",0x01CB6900 + 0xb8);
  FUN_004d8b20(local_20c,"yCenter",0x01CB6900 + 0xbc);
  FUN_004d8b20(local_20c,"xStickMin",0x01CB6900 + 0xc0);
  FUN_004d8b20(local_20c,"xStickMax",0x01CB6900 + 0xc4);
  FUN_004d8b20(local_20c,"yStickMin",0x01CB6900 + 200);
  FUN_004d8b20(local_20c,"yStickMax",0x01CB6900 + 0xcc);
  FUN_004d8b20(local_20c,"aimMode",0x01CB6900 + 0xd8);
  FUN_004d8b20(local_20c,"autoUseHealth",0x01CB6900 + 0xdc);
  FUN_004d89d0(local_20c,"Debug");
  FUN_004d8b20(local_20c,"logConsoleFlag",PTR_DAT_00609ed0);
  FUN_004d8b20(local_20c,"headOfHorrorCheat",0x01CB6900 + 0x230);
  FUN_004d89d0(local_20c,"Editor");
  FUN_004d8940(local_20c,0);
  return;
}
