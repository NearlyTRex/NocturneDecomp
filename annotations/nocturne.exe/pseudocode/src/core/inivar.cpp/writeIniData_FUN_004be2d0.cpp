// Name: core_inivar.cpp_writeIniData_FUN_004be2d0
// Address: 004be2d0
// Address Range: [[004be2d0, 004be9c5]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void)

{
  byte local_210 [512];
  
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860(local_210,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_210,"Graphics");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"gamePIXX",*0x01C775EC);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"gamePIXY",0x01C775EC[1]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"gameBPP",0x01C775EC[2]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"useDirect3D",_DAT_02dc9d60);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"useAGPFlag",_DAT_02dc9d6c);
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(local_210,"rendererDLLPath",&DAT_005c0e80)
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"gamma",0x01C775EC[0x89]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"heroNumber",0x01C775EC[0x30]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"haloMode",0x01C775EC[3]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"firstTimeFlag",_DAT_01cae37c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"subtitleMode",0x01C775EC[4])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"bloodFlag",0x01C775EC[5]);
  if (0x01C775EC[8] == 0) {
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"nudityFlag",0x01C775EC[6])
    ;
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
              (local_210,"foulLanguageFlag",0x01C775EC[7]);
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"shadowFlag",0x01C775EC[9])
    ;
  }
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"quimbyFlag",0x01C775EC[8]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"currentBoard",_DAT_01cc64a4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_210,"Sound");
  sound_sndmain_cpp_writeIni_FUN_00528c80(local_210);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_210,"Control");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"gameControl",0x01C775EC[0x2f]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyWalk",0x01C775EC[10]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyBackup",0x01C775EC[0xb]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyRun",0x01C775EC[0xc]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyStrafe",0x01C775EC[0xd]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyStrafeLeft",0x01C775EC[0xe]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyStrafeRight",0x01C775EC[0xf]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyRight",0x01C775EC[0x10]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyLeft",0x01C775EC[0x11]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyFire",0x01C775EC[0x12]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyUseItem",0x01C775EC[0x13]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyLight",0x01C775EC[0x14]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyInfrared",0x01C775EC[0x15]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyDraw",0x01C775EC[0x16]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"keyJump",0x01C775EC[0x17]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyPointUp",0x01C775EC[0x18]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyPointDown",0x01C775EC[0x19]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyWeapon1",0x01C775EC[0x1a]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyWeapon2",0x01C775EC[0x1b]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyWeapon3",0x01C775EC[0x1c]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyWeapon4",0x01C775EC[0x1d]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyWeapon5",0x01C775EC[0x1e]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyNextWeapon",0x01C775EC[0x1f]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyPrevWeapon",0x01C775EC[0x20]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyNextItem",0x01C775EC[0x21]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyPrevItem",0x01C775EC[0x22]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyItemDesc",0x01C775EC[0x23]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"keyNextAmmo",0x01C775EC[0x24]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"invertMouseYAxis",0x01C775EC[0x25]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"alwaysRun",0x01C775EC[0x26])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"xMouseSensitivity",0x01C775EC[0x27]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"yMouseSensitivity",0x01C775EC[0x28]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"xCenter",0x01C775EC[0x29]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"yCenter",0x01C775EC[0x2a]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"xStickMin",0x01C775EC[0x2b])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"xStickMax",0x01C775EC[0x2c])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"yStickMin",0x01C775EC[0x2d])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"yStickMax",0x01C775EC[0x2e])
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(local_210,"aimMode",0x01C775EC[0x31]);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"autoUseHealth",0x01C775EC[0x32]);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(local_210,"Debug");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"logConsoleFlag",*(uint *)PTR_DAT_005ad350);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (local_210,"headOfHorrorCheat",0x01C775EC[0x85]);
  return;
}
