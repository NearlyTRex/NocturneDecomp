// Name: FUN_004f5760
// Address: 004f5760
// Address Range: [[004f5760, 004f5ee6]]
// Convention: unknown
// Signature: void FUN_004f5760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5760(void)

{
  byte local_214 [516];
  
  FUN_004f4b00(local_214,".\\system\\nocturne.ini",0);
  FUN_004f4bc0(local_214,"Graphics");
  FUN_004f4d70(local_214,"gamePIXX",*0x01CCF390);
  FUN_004f4d70(local_214,"gamePIXY",0x01CCF390[1]);
  FUN_004f4d70(local_214,"gameBPP",0x01CCF390[2]);
  FUN_004f4d70(local_214,"useDirect3D",_DAT_02c83370);
  FUN_004f4d70(local_214,"useAGPFlag",_DAT_02c8337c);
  FUN_004f4c90(local_214,"rendererDLLPath",&DAT_006257d0);
  FUN_004f4d70(local_214,"gamma",0x01CCF390[0x90]);
  FUN_004f4d70(local_214,"heroNumber",0x01CCF390[0x35]);
  FUN_004f4d70(local_214,"haloMode",0x01CCF390[3]);
  FUN_004f4d70(local_214,"firstTimeFlag",_DAT_01d06d68);
  FUN_004f4d70(local_214,"subtitleMode",0x01CCF390[4]);
  FUN_004f4d70(local_214,"bloodFlag",0x01CCF390[5]);
  FUN_004f4d70(local_214,"quimbyFlag",0x01CCF390[8]);
  FUN_004f4d70(local_214,"currentBoard",_DAT_01d1f5d4);
  FUN_004f4d70(local_214,"puzzleDifficultyMode",0x01CCF390[0x39]);
  FUN_004f4d70(local_214,"combatDifficultyMode",0x01CCF390[0x3a]);
  FUN_004f4bc0(local_214,"Sound");
  FUN_005763b0(local_214);
  FUN_004f4bc0(local_214,"Control");
  FUN_004f4d70(local_214,"gameControl",0x01CCF390[0x34]);
  FUN_004f4d70(local_214,"keyWalk",0x01CCF390[10]);
  FUN_004f4d70(local_214,"keyBackup",0x01CCF390[0xb]);
  FUN_004f4d70(local_214,"keyRun",0x01CCF390[0xc]);
  FUN_004f4d70(local_214,"keyStrafe",0x01CCF390[0xd]);
  FUN_004f4d70(local_214,"keyStrafeLeft",0x01CCF390[0xe]);
  FUN_004f4d70(local_214,"keyStrafeRight",0x01CCF390[0xf]);
  FUN_004f4d70(local_214,"keyRight",0x01CCF390[0x10]);
  FUN_004f4d70(local_214,"keyLeft",0x01CCF390[0x11]);
  FUN_004f4d70(local_214,"keyFire",0x01CCF390[0x12]);
  FUN_004f4d70(local_214,"keyUseItem",0x01CCF390[0x13]);
  FUN_004f4d70(local_214,"keyLight",0x01CCF390[0x14]);
  FUN_004f4d70(local_214,"keyInfrared",0x01CCF390[0x15]);
  FUN_004f4d70(local_214,"keyFieldNotes",0x01CCF390[0x16]);
  FUN_004f4d70(local_214,"keyMap",0x01CCF390[0x17]);
  FUN_004f4d70(local_214,"keyCompass",0x01CCF390[0x18]);
  FUN_004f4d70(local_214,"keySPS",0x01CCF390[0x19]);
  FUN_004f4d70(local_214,"keyDraw",0x01CCF390[0x1a]);
  FUN_004f4d70(local_214,"keyJump",0x01CCF390[0x1b]);
  FUN_004f4d70(local_214,"keyQuickTurn",0x01CCF390[0x1c]);
  FUN_004f4d70(local_214,"keyPointUp",0x01CCF390[0x1d]);
  FUN_004f4d70(local_214,"keyPointDown",0x01CCF390[0x1e]);
  FUN_004f4d70(local_214,"keyWeapon1",0x01CCF390[0x1f]);
  FUN_004f4d70(local_214,"keyWeapon2",0x01CCF390[0x20]);
  FUN_004f4d70(local_214,"keyWeapon3",0x01CCF390[0x21]);
  FUN_004f4d70(local_214,"keyWeapon4",0x01CCF390[0x22]);
  FUN_004f4d70(local_214,"keyWeapon5",0x01CCF390[0x23]);
  FUN_004f4d70(local_214,"keyNextWeapon",0x01CCF390[0x24]);
  FUN_004f4d70(local_214,"keyPrevWeapon",0x01CCF390[0x25]);
  FUN_004f4d70(local_214,"keyNextItem",0x01CCF390[0x26]);
  FUN_004f4d70(local_214,"keyPrevItem",0x01CCF390[0x27]);
  FUN_004f4d70(local_214,"keyItemDesc",0x01CCF390[0x28]);
  FUN_004f4d70(local_214,"keyNextAmmo",0x01CCF390[0x29]);
  FUN_004f4d70(local_214,"invertMouseYAxis",0x01CCF390[0x2a]);
  FUN_004f4d70(local_214,"alwaysRun",0x01CCF390[0x2b]);
  FUN_004f4d70(local_214,"xMouseSensitivity",0x01CCF390[0x2c]);
  FUN_004f4d70(local_214,"yMouseSensitivity",0x01CCF390[0x2d]);
  FUN_004f4d70(local_214,"xCenter",0x01CCF390[0x2e]);
  FUN_004f4d70(local_214,"yCenter",0x01CCF390[0x2f]);
  FUN_004f4d70(local_214,"xStickMin",0x01CCF390[0x30]);
  FUN_004f4d70(local_214,"xStickMax",0x01CCF390[0x31]);
  FUN_004f4d70(local_214,"yStickMin",0x01CCF390[0x32]);
  FUN_004f4d70(local_214,"yStickMax",0x01CCF390[0x33]);
  FUN_004f4d70(local_214,"aimMode",0x01CCF390[0x36]);
  FUN_004f4d70(local_214,"autoUseHealth",0x01CCF390[0x37]);
  FUN_004f4bc0(local_214,"Debug");
  FUN_004f4d70(local_214,"logConsoleFlag",*(uint *)PTR_DAT_00611100);
  FUN_004f4d70(local_214,"headOfHorrorCheat",0x01CCF390[0x8c]);
  FUN_004f4bc0(local_214,"Editor");
  FUN_004f4b30(local_214,0);
  return;
}
