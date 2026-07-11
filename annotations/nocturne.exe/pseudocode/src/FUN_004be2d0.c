// Name: FUN_004be2d0
// Address: 004be2d0
// Address Range: [[004be2d0, 004be9c5]]
// Convention: unknown
// Signature: void FUN_004be2d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004be2d0(void)

{
  byte local_210 [512];
  
  FUN_004bd860(local_210,".\\system\\nocturne.ini",0);
  FUN_004bd8d0(local_210,"Graphics");
  FUN_004bda80(local_210,"gamePIXX",*0x01C775EC);
  FUN_004bda80(local_210,"gamePIXY",0x01C775EC[1]);
  FUN_004bda80(local_210,"gameBPP",0x01C775EC[2]);
  FUN_004bda80(local_210,"useDirect3D",_DAT_02dc9d60);
  FUN_004bda80(local_210,"useAGPFlag",_DAT_02dc9d6c);
  FUN_004bd9a0(local_210,"rendererDLLPath",&DAT_005c0e80);
  FUN_004bda80(local_210,"gamma",0x01C775EC[0x89]);
  FUN_004bda80(local_210,"heroNumber",0x01C775EC[0x30]);
  FUN_004bda80(local_210,"haloMode",0x01C775EC[3]);
  FUN_004bda80(local_210,"firstTimeFlag",_DAT_01cae37c);
  FUN_004bda80(local_210,"subtitleMode",0x01C775EC[4]);
  FUN_004bda80(local_210,"bloodFlag",0x01C775EC[5]);
  if (0x01C775EC[8] == 0) {
    FUN_004bda80(local_210,"nudityFlag",0x01C775EC[6]);
    FUN_004bda80(local_210,"foulLanguageFlag",0x01C775EC[7]);
    FUN_004bda80(local_210,"shadowFlag",0x01C775EC[9]);
  }
  FUN_004bda80(local_210,"quimbyFlag",0x01C775EC[8]);
  FUN_004bda80(local_210,"currentBoard",_DAT_01cc64a4);
  FUN_004bd8d0(local_210,"Sound");
  FUN_00528c80(local_210);
  FUN_004bd8d0(local_210,"Control");
  FUN_004bda80(local_210,"gameControl",0x01C775EC[0x2f]);
  FUN_004bda80(local_210,"keyWalk",0x01C775EC[10]);
  FUN_004bda80(local_210,"keyBackup",0x01C775EC[0xb]);
  FUN_004bda80(local_210,"keyRun",0x01C775EC[0xc]);
  FUN_004bda80(local_210,"keyStrafe",0x01C775EC[0xd]);
  FUN_004bda80(local_210,"keyStrafeLeft",0x01C775EC[0xe]);
  FUN_004bda80(local_210,"keyStrafeRight",0x01C775EC[0xf]);
  FUN_004bda80(local_210,"keyRight",0x01C775EC[0x10]);
  FUN_004bda80(local_210,"keyLeft",0x01C775EC[0x11]);
  FUN_004bda80(local_210,"keyFire",0x01C775EC[0x12]);
  FUN_004bda80(local_210,"keyUseItem",0x01C775EC[0x13]);
  FUN_004bda80(local_210,"keyLight",0x01C775EC[0x14]);
  FUN_004bda80(local_210,"keyInfrared",0x01C775EC[0x15]);
  FUN_004bda80(local_210,"keyDraw",0x01C775EC[0x16]);
  FUN_004bda80(local_210,"keyJump",0x01C775EC[0x17]);
  FUN_004bda80(local_210,"keyPointUp",0x01C775EC[0x18]);
  FUN_004bda80(local_210,"keyPointDown",0x01C775EC[0x19]);
  FUN_004bda80(local_210,"keyWeapon1",0x01C775EC[0x1a]);
  FUN_004bda80(local_210,"keyWeapon2",0x01C775EC[0x1b]);
  FUN_004bda80(local_210,"keyWeapon3",0x01C775EC[0x1c]);
  FUN_004bda80(local_210,"keyWeapon4",0x01C775EC[0x1d]);
  FUN_004bda80(local_210,"keyWeapon5",0x01C775EC[0x1e]);
  FUN_004bda80(local_210,"keyNextWeapon",0x01C775EC[0x1f]);
  FUN_004bda80(local_210,"keyPrevWeapon",0x01C775EC[0x20]);
  FUN_004bda80(local_210,"keyNextItem",0x01C775EC[0x21]);
  FUN_004bda80(local_210,"keyPrevItem",0x01C775EC[0x22]);
  FUN_004bda80(local_210,"keyItemDesc",0x01C775EC[0x23]);
  FUN_004bda80(local_210,"keyNextAmmo",0x01C775EC[0x24]);
  FUN_004bda80(local_210,"invertMouseYAxis",0x01C775EC[0x25]);
  FUN_004bda80(local_210,"alwaysRun",0x01C775EC[0x26]);
  FUN_004bda80(local_210,"xMouseSensitivity",0x01C775EC[0x27]);
  FUN_004bda80(local_210,"yMouseSensitivity",0x01C775EC[0x28]);
  FUN_004bda80(local_210,"xCenter",0x01C775EC[0x29]);
  FUN_004bda80(local_210,"yCenter",0x01C775EC[0x2a]);
  FUN_004bda80(local_210,"xStickMin",0x01C775EC[0x2b]);
  FUN_004bda80(local_210,"xStickMax",0x01C775EC[0x2c]);
  FUN_004bda80(local_210,"yStickMin",0x01C775EC[0x2d]);
  FUN_004bda80(local_210,"yStickMax",0x01C775EC[0x2e]);
  FUN_004bda80(local_210,"aimMode",0x01C775EC[0x31]);
  FUN_004bda80(local_210,"autoUseHealth",0x01C775EC[0x32]);
  FUN_004bd8d0(local_210,"Debug");
  FUN_004bda80(local_210,"logConsoleFlag",*(uint *)PTR_DAT_005ad350);
  FUN_004bda80(local_210,"headOfHorrorCheat",0x01C775EC[0x85]);
  return;
}
