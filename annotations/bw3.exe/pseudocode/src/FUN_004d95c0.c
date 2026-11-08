// Name: FUN_004d95c0
// Address: 004d95c0
// Address Range: [[004d95c0, 004d9c81]]
// Convention: unknown
// Signature: void FUN_004d95c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d95c0(void)

{
  byte local_214 [516];
  
  FUN_004d8a20(local_214,".\\system\\bw3.ini",0);
  FUN_004d8ae0(local_214,"Graphics");
  FUN_004d8c90(local_214,"gamePIXX",*0x01D2130C);
  FUN_004d8c90(local_214,"gamePIXY",0x01D2130C[1]);
  FUN_004d8c90(local_214,"gameBPP",0x01D2130C[2]);
  FUN_004d8c90(local_214,"useDirect3D",_DAT_02cf5fcc);
  FUN_004d8c90(local_214,"useAGPFlag",_DAT_02cf5fd8);
  FUN_004d8bb0(local_214,"rendererDLLPath",&DAT_00606730);
  FUN_004d8c90(local_214,"gamma",0x01D2130C[0x92]);
  FUN_004d8c90(local_214,"heroNumber",0x01D2130C[0x36]);
  FUN_004d8c90(local_214,"haloMode",0x01D2130C[3]);
  FUN_004d8c90(local_214,"firstTimeFlag",_DAT_01d5bc7c);
  FUN_004d8c90(local_214,"subtitleMode",0x01D2130C[4]);
  FUN_004d8c90(local_214,"bloodFlag",0x01D2130C[5]);
  FUN_004d8c90(local_214,"currentBoard",_DAT_01d74020);
  FUN_004d8ae0(local_214,"Sound");
  FUN_00559520(local_214);
  FUN_004d8ae0(local_214,"Control");
  FUN_004d8c90(local_214,"gameControl",0x01D2130C[0x35]);
  FUN_004d8c90(local_214,"keyWalk",0x01D2130C[10]);
  FUN_004d8c90(local_214,"keyBackup",0x01D2130C[0xb]);
  FUN_004d8c90(local_214,"keyRun",0x01D2130C[0xc]);
  FUN_004d8c90(local_214,"keyStrafe",0x01D2130C[0xd]);
  FUN_004d8c90(local_214,"keyStrafeLeft",0x01D2130C[0xe]);
  FUN_004d8c90(local_214,"keyStrafeRight",0x01D2130C[0xf]);
  FUN_004d8c90(local_214,"keyRight",0x01D2130C[0x10]);
  FUN_004d8c90(local_214,"keyLeft",0x01D2130C[0x11]);
  FUN_004d8c90(local_214,"keyFire",0x01D2130C[0x12]);
  FUN_004d8c90(local_214,"keyAction",0x01D2130C[0x13]);
  FUN_004d8c90(local_214,"keyUseItem",0x01D2130C[0x14]);
  FUN_004d8c90(local_214,"keyLight",0x01D2130C[0x15]);
  FUN_004d8c90(local_214,"keyFieldNotes",0x01D2130C[0x17]);
  FUN_004d8c90(local_214,"keyMap",0x01D2130C[0x18]);
  FUN_004d8c90(local_214,"keyVoodooDoll",0x01D2130C[0x1a]);
  FUN_004d8c90(local_214,"keyDraw",0x01D2130C[0x1b]);
  FUN_004d8c90(local_214,"keyQuickTurn",0x01D2130C[0x1d]);
  FUN_004d8c90(local_214,"keyPointUp",0x01D2130C[0x1e]);
  FUN_004d8c90(local_214,"keyPointDown",0x01D2130C[0x1f]);
  FUN_004d8c90(local_214,"keyWeapon1",0x01D2130C[0x20]);
  FUN_004d8c90(local_214,"keyWeapon2",0x01D2130C[0x21]);
  FUN_004d8c90(local_214,"keyWeapon3",0x01D2130C[0x22]);
  FUN_004d8c90(local_214,"keyWeapon4",0x01D2130C[0x23]);
  FUN_004d8c90(local_214,"keyWeapon5",0x01D2130C[0x24]);
  FUN_004d8c90(local_214,"keyNextWeapon",0x01D2130C[0x25]);
  FUN_004d8c90(local_214,"keyPrevWeapon",0x01D2130C[0x26]);
  FUN_004d8c90(local_214,"keyNextItem",0x01D2130C[0x27]);
  FUN_004d8c90(local_214,"keyPrevItem",0x01D2130C[0x28]);
  FUN_004d8c90(local_214,"invertMouseYAxis",0x01D2130C[0x2b]);
  FUN_004d8c90(local_214,"alwaysRun",0x01D2130C[0x2c]);
  FUN_004d8c90(local_214,"xMouseSensitivity",0x01D2130C[0x2d]);
  FUN_004d8c90(local_214,"yMouseSensitivity",0x01D2130C[0x2e]);
  FUN_004d8c90(local_214,"xCenter",0x01D2130C[0x2f]);
  FUN_004d8c90(local_214,"yCenter",0x01D2130C[0x30]);
  FUN_004d8c90(local_214,"xStickMin",0x01D2130C[0x31]);
  FUN_004d8c90(local_214,"xStickMax",0x01D2130C[0x32]);
  FUN_004d8c90(local_214,"yStickMin",0x01D2130C[0x33]);
  FUN_004d8c90(local_214,"yStickMax",0x01D2130C[0x34]);
  FUN_004d8c90(local_214,"aimMode",0x01D2130C[0x37]);
  FUN_004d8c90(local_214,"show_hero_numbers",0x01D2130C[0x38]);
  FUN_004d8c90(local_214,"show_crosshair",0x01D2130C[0x39]);
  FUN_004d8ae0(local_214,"Debug");
  FUN_004d8c90(local_214,"logConsoleFlag",*(uint *)PTR_DAT_005f1690);
  FUN_004d8ae0(local_214,"Editor");
  FUN_004d8a50(local_214,0);
  return;
}
