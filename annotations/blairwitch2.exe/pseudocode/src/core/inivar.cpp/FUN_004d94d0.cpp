// Name: core_inivar.cpp_FUN_004d94d0
// Address: 004d94d0
// Address Range: [[004d94d0, 004d9bf6]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_FUN_004d94d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_FUN_004d94d0(void)

{
  CIniFile local_214;
  
  engine_ini_cpp_FUN_004d8910(&local_214,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Graphics");
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamePIXX",*(uint *)g_CGamePtr);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamePIXY",*(uint *)&g_CGamePtr->field_0x4);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gameBPP",*(uint *)&g_CGamePtr->field_0x8);
  engine_ini_cpp_FUN_004d8b80(&local_214,"useDirect3D",_DAT_0264bba0);
  engine_ini_cpp_FUN_004d8b80(&local_214,"useAGPFlag",_DAT_0264bbac);
  engine_ini_cpp_FUN_004d8aa0(&local_214,"rendererDLLPath",&DAT_0061e180);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamma",*(uint *)&g_CGamePtr->field_0x240);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"heroNumber",*(uint *)&g_CGamePtr->field_0xd4);
  engine_ini_cpp_FUN_004d8b80(&local_214,"haloMode",*(uint *)&g_CGamePtr->field_0xc);
  engine_ini_cpp_FUN_004d8b80(&local_214,"firstTimeFlag",_DAT_01cee1a8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"subtitleMode",*(uint *)&g_CGamePtr->field_0x10);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"bloodFlag",*(uint *)&g_CGamePtr->field_0x14);
  if (*(int *)&g_CGamePtr->field_0x20 == 0) {
    engine_ini_cpp_FUN_004d8b80
              (&local_214,"nudityFlag",*(uint *)&g_CGamePtr->field_0x18);
    engine_ini_cpp_FUN_004d8b80
              (&local_214,"foulLanguageFlag",*(uint *)&g_CGamePtr->field_0x1c);
    engine_ini_cpp_FUN_004d8b80
              (&local_214,"shadowFlag",*(uint *)&g_CGamePtr->field_0x24);
  }
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"quimbyFlag",*(uint *)&g_CGamePtr->field_0x20);
  engine_ini_cpp_FUN_004d8b80(&local_214,"particleDensity",DAT_0061ec60);
  engine_ini_cpp_FUN_004d8b80(&local_214,"currentBoard",_DAT_01d06a74);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"puzzleDifficultyMode",*(uint *)&g_CGamePtr->field_0xe4);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"combatDifficultyMode",*(uint *)&g_CGamePtr->field_0xe8);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Sound");
  sound_sndmain_cpp_FUN_00553980(&local_214);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Control");
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"gameControl",*(uint *)&g_CGamePtr->field_0xd0);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyWalk",*(uint *)&g_CGamePtr->field_0x28);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyBackup",*(uint *)&g_CGamePtr->field_0x2c);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyRun",*(uint *)&g_CGamePtr->field_0x30);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafe",*(uint *)&g_CGamePtr->field_0x34);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafeLeft",*(uint *)&g_CGamePtr->field_0x38);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafeRight",*(uint *)&g_CGamePtr->field_0x3c);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyRight",*(uint *)&g_CGamePtr->field_0x40)
  ;
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyLeft",*(uint *)&g_CGamePtr->field_0x44);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyFire",*(uint *)&g_CGamePtr->field_0x48);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyUseItem",*(uint *)&g_CGamePtr->field_0x4c);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyLight",*(uint *)&g_CGamePtr->field_0x50)
  ;
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyDraw",*(uint *)&g_CGamePtr->field_0x68);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPointUp",*(uint *)&g_CGamePtr->field_0x74);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPointDown",*(uint *)&g_CGamePtr->field_0x78);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon1",*(uint *)&g_CGamePtr->field_0x7c);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon2",*(uint *)&g_CGamePtr->field_0x80);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon3",*(uint *)&g_CGamePtr->field_0x84);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyDrop",*(uint *)&g_CGamePtr->field_0xaf0)
  ;
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextWeapon",*(uint *)&g_CGamePtr->field_0x90);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPrevWeapon",*(uint *)&g_CGamePtr->field_0x94);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextItem",*(uint *)&g_CGamePtr->field_0x98);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPrevItem",*(uint *)&g_CGamePtr->field_0x9c);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyItemDesc",*(uint *)&g_CGamePtr->field_0xa0);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextAmmo",*(uint *)&g_CGamePtr->field_0xa4);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"invertMouseYAxis",*(uint *)&g_CGamePtr->field_0xa8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"alwaysRun",*(uint *)&g_CGamePtr->field_0xac);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"xMouseSensitivity",*(uint *)&g_CGamePtr->field_0xb0);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"yMouseSensitivity",*(uint *)&g_CGamePtr->field_0xb4);
  engine_ini_cpp_FUN_004d8b80(&local_214,"xCenter",*(uint *)&g_CGamePtr->field_0xb8);
  engine_ini_cpp_FUN_004d8b80(&local_214,"yCenter",*(uint *)&g_CGamePtr->field_0xbc);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"xStickMin",*(uint *)&g_CGamePtr->field_0xc0);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"xStickMax",*(uint *)&g_CGamePtr->field_0xc4);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"yStickMin",*(uint *)&g_CGamePtr->field_0xc8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"yStickMax",*(uint *)&g_CGamePtr->field_0xcc);
  engine_ini_cpp_FUN_004d8b80(&local_214,"aimMode",*(uint *)&g_CGamePtr->field_0xd8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"autoUseHealth",*(uint *)&g_CGamePtr->field_0xdc);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Debug");
  engine_ini_cpp_FUN_004d8b80(&local_214,"logConsoleFlag",*(uint *)g_CConsolePtr);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"headOfHorrorCheat",*(uint *)&g_CGamePtr->field_0x230);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8940(&local_214,0);
  return;
}
