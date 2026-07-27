// Name: core_inivar.cpp_FUN_004bdb80
// Address: 004bdb80
// Address Range: [[004bdb80, 004be2c6]]
// Convention: unknown
// Signature: void core_inivar_cpp_FUN_004bdb80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inivar_cpp_FUN_004bdb80(void)

{
  int iVar1;
  byte local_204 [512];
  
  iVar1 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0(".\\system\\nocturne.ini",0x180);
  if (iVar1 != 0) {
    PTR_01cc4800 = "..\\core\\inivar.cpp";
    INT_01cc4804 = 0x54;
    core_main_c_FUN_004c8440("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860(local_204,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_204,"Graphics");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"gamePIXX",0x01C775EC);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"gamePIXY",0x01C775EC + 4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"gameBPP",0x01C775EC + 8);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"useDirect3D",&INT_02dc9d60);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"useAGPFlag",&DAT_02dc9d6c);
  engine_ini_cpp_CIniFile_getString_FUN_004bd910
            (local_204,"rendererDLLPath",&DAT_005c0e80,0xfa);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"gamma",0x01C775EC + 0x224);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"heroNumber",0x01C775EC + 0xc0);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"haloMode",0x01C775EC + 0xc);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"firstTimeFlag",&DAT_01cae37c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"subtitleMode",0x01C775EC + 0x10);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"bloodFlag",0x01C775EC + 0x14);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"nudityFlag",0x01C775EC + 0x18);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"foulLanguageFlag",0x01C775EC + 0x1c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"shadowFlag",0x01C775EC + 0x24);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"quimbyFlag",0x01C775EC + 0x20);
  iVar1 = 0x01C775EC;
  if (*(int *)(0x01C775EC + 0x20) != 0) {
    *(uint *)(0x01C775EC + 0x18) = 0;
    *(uint *)(iVar1 + 0x1c) = 0;
    *(uint *)(iVar1 + 0x14) = 0;
  }
  _DAT_01cc64a4 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"currentBoard",&DAT_01cc64a4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_204,"Sound");
  sound_sndmain_cpp_FUN_005289f0(local_204);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_204,"Control");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"gameControl",0x01C775EC + 0xbc);
  core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(0x01C775EC);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyWalk",0x01C775EC + 0x28);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyBackup",0x01C775EC + 0x2c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyRun",0x01C775EC + 0x30);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyStrafe",0x01C775EC + 0x34);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyStrafeLeft",0x01C775EC + 0x38);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyStrafeRight",0x01C775EC + 0x3c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyRight",0x01C775EC + 0x40)
  ;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyLeft",0x01C775EC + 0x44);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyFire",0x01C775EC + 0x48);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyUseItem",0x01C775EC + 0x4c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyLight",0x01C775EC + 0x50)
  ;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyInfrared",0x01C775EC + 0x54);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyDraw",0x01C775EC + 0x58);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"keyJump",0x01C775EC + 0x5c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyPointUp",0x01C775EC + 0x60);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyPointDown",0x01C775EC + 100);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyWeapon1",0x01C775EC + 0x68);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyWeapon2",0x01C775EC + 0x6c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyWeapon3",0x01C775EC + 0x70);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyWeapon4",0x01C775EC + 0x74);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyWeapon5",0x01C775EC + 0x78);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyNextWeapon",0x01C775EC + 0x7c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyPrevWeapon",0x01C775EC + 0x80);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyNextItem",0x01C775EC + 0x84);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyPrevItem",0x01C775EC + 0x88);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyItemDesc",0x01C775EC + 0x8c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"keyNextAmmo",0x01C775EC + 0x90);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"invertMouseYAxis",0x01C775EC + 0x94);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"alwaysRun",0x01C775EC + 0x98);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"xMouseSensitivity",0x01C775EC + 0x9c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"yMouseSensitivity",0x01C775EC + 0xa0);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"xCenter",0x01C775EC + 0xa4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"yCenter",0x01C775EC + 0xa8);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"xStickMin",0x01C775EC + 0xac);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"xStickMax",0x01C775EC + 0xb0);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"yStickMin",0x01C775EC + 0xb4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"yStickMax",0x01C775EC + 0xb8);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_204,"aimMode",0x01C775EC + 0xc4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"autoUseHealth",0x01C775EC + 200);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_204,"Debug");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"logConsoleFlag",PTR_DAT_005ad350);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (local_204,"headOfHorrorCheat",0x01C775EC + 0x214);
  return;
}
