// Name: FUN_004d94d0
// Address: 004d94d0
// Address Range: [[004d94d0, 004d9bf6]]
// Convention: unknown
// Signature: void FUN_004d94d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d94d0(void)

{
  byte local_214 [516];
  
  FUN_004d8910(local_214,".\\system\\nocturne.ini",0);
  FUN_004d89d0(local_214,"Graphics");
  FUN_004d8b80(local_214,"gamePIXX",*0x01CB6900);
  FUN_004d8b80(local_214,"gamePIXY",0x01CB6900[1]);
  FUN_004d8b80(local_214,"gameBPP",0x01CB6900[2]);
  FUN_004d8b80(local_214,"useDirect3D",_DAT_0264bba0);
  FUN_004d8b80(local_214,"useAGPFlag",_DAT_0264bbac);
  FUN_004d8aa0(local_214,"rendererDLLPath",&DAT_0061e180);
  FUN_004d8b80(local_214,"gamma",0x01CB6900[0x90]);
  FUN_004d8b80(local_214,"heroNumber",0x01CB6900[0x35]);
  FUN_004d8b80(local_214,"haloMode",0x01CB6900[3]);
  FUN_004d8b80(local_214,"firstTimeFlag",_DAT_01cee1a8);
  FUN_004d8b80(local_214,"subtitleMode",0x01CB6900[4]);
  FUN_004d8b80(local_214,"bloodFlag",0x01CB6900[5]);
  if (0x01CB6900[8] == 0) {
    FUN_004d8b80(local_214,"nudityFlag",0x01CB6900[6]);
    FUN_004d8b80(local_214,"foulLanguageFlag",0x01CB6900[7]);
    FUN_004d8b80(local_214,"shadowFlag",0x01CB6900[9]);
  }
  FUN_004d8b80(local_214,"quimbyFlag",0x01CB6900[8]);
  FUN_004d8b80(local_214,"particleDensity",DAT_0061ec60);
  FUN_004d8b80(local_214,"currentBoard",_DAT_01d06a74);
  FUN_004d8b80(local_214,"puzzleDifficultyMode",0x01CB6900[0x39]);
  FUN_004d8b80(local_214,"combatDifficultyMode",0x01CB6900[0x3a]);
  FUN_004d89d0(local_214,"Sound");
  FUN_00553980(local_214);
  FUN_004d89d0(local_214,"Control");
  FUN_004d8b80(local_214,"gameControl",0x01CB6900[0x34]);
  FUN_004d8b80(local_214,"keyWalk",0x01CB6900[10]);
  FUN_004d8b80(local_214,"keyBackup",0x01CB6900[0xb]);
  FUN_004d8b80(local_214,"keyRun",0x01CB6900[0xc]);
  FUN_004d8b80(local_214,"keyStrafe",0x01CB6900[0xd]);
  FUN_004d8b80(local_214,"keyStrafeLeft",0x01CB6900[0xe]);
  FUN_004d8b80(local_214,"keyStrafeRight",0x01CB6900[0xf]);
  FUN_004d8b80(local_214,"keyRight",0x01CB6900[0x10]);
  FUN_004d8b80(local_214,"keyLeft",0x01CB6900[0x11]);
  FUN_004d8b80(local_214,"keyFire",0x01CB6900[0x12]);
  FUN_004d8b80(local_214,"keyUseItem",0x01CB6900[0x13]);
  FUN_004d8b80(local_214,"keyLight",0x01CB6900[0x14]);
  FUN_004d8b80(local_214,"keyDraw",0x01CB6900[0x1a]);
  FUN_004d8b80(local_214,"keyPointUp",0x01CB6900[0x1d]);
  FUN_004d8b80(local_214,"keyPointDown",0x01CB6900[0x1e]);
  FUN_004d8b80(local_214,"keyWeapon1",0x01CB6900[0x1f]);
  FUN_004d8b80(local_214,"keyWeapon2",0x01CB6900[0x20]);
  FUN_004d8b80(local_214,"keyWeapon3",0x01CB6900[0x21]);
  FUN_004d8b80(local_214,"keyDrop",0x01CB6900[700]);
  FUN_004d8b80(local_214,"keyNextWeapon",0x01CB6900[0x24]);
  FUN_004d8b80(local_214,"keyPrevWeapon",0x01CB6900[0x25]);
  FUN_004d8b80(local_214,"keyNextItem",0x01CB6900[0x26]);
  FUN_004d8b80(local_214,"keyPrevItem",0x01CB6900[0x27]);
  FUN_004d8b80(local_214,"keyItemDesc",0x01CB6900[0x28]);
  FUN_004d8b80(local_214,"keyNextAmmo",0x01CB6900[0x29]);
  FUN_004d8b80(local_214,"invertMouseYAxis",0x01CB6900[0x2a]);
  FUN_004d8b80(local_214,"alwaysRun",0x01CB6900[0x2b]);
  FUN_004d8b80(local_214,"xMouseSensitivity",0x01CB6900[0x2c]);
  FUN_004d8b80(local_214,"yMouseSensitivity",0x01CB6900[0x2d]);
  FUN_004d8b80(local_214,"xCenter",0x01CB6900[0x2e]);
  FUN_004d8b80(local_214,"yCenter",0x01CB6900[0x2f]);
  FUN_004d8b80(local_214,"xStickMin",0x01CB6900[0x30]);
  FUN_004d8b80(local_214,"xStickMax",0x01CB6900[0x31]);
  FUN_004d8b80(local_214,"yStickMin",0x01CB6900[0x32]);
  FUN_004d8b80(local_214,"yStickMax",0x01CB6900[0x33]);
  FUN_004d8b80(local_214,"aimMode",0x01CB6900[0x36]);
  FUN_004d8b80(local_214,"autoUseHealth",0x01CB6900[0x37]);
  FUN_004d89d0(local_214,"Debug");
  FUN_004d8b80(local_214,"logConsoleFlag",*(uint *)PTR_DAT_00609ed0);
  FUN_004d8b80(local_214,"headOfHorrorCheat",0x01CB6900[0x8c]);
  FUN_004d89d0(local_214,"Editor");
  FUN_004d8940(local_214,0);
  return;
}
