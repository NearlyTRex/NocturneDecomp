// Name: core_inivar.cpp_FUN_004d95c0
// Address: 004d95c0
// Address Range: [[004d95c0, 004d9c81]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_FUN_004d95c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_FUN_004d95c0(void)

{
  CIniFile local_214;
  
  engine_ini_cpp_FUN_004d8a20(&local_214,".\\system\\bw3.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_214,"Graphics");
  engine_ini_cpp_FUN_004d8c90(&local_214,"gamePIXX",*(uint *)g_CGamePtr);
  engine_ini_cpp_FUN_004d8c90(&local_214,"gamePIXY",*(uint *)&g_CGamePtr->field_0x4);
  engine_ini_cpp_FUN_004d8c90(&local_214,"gameBPP",*(uint *)&g_CGamePtr->field_0x8);
  engine_ini_cpp_FUN_004d8c90(&local_214,"useDirect3D",_DAT_02cf5fcc);
  engine_ini_cpp_FUN_004d8c90(&local_214,"useAGPFlag",_DAT_02cf5fd8);
  engine_ini_cpp_FUN_004d8bb0(&local_214,"rendererDLLPath",&DAT_00606730);
  engine_ini_cpp_FUN_004d8c90(&local_214,"gamma",*(uint *)&g_CGamePtr->field_0x248);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"heroNumber",*(uint *)&g_CGamePtr->field_0xd8);
  engine_ini_cpp_FUN_004d8c90(&local_214,"haloMode",*(uint *)&g_CGamePtr->field_0xc);
  engine_ini_cpp_FUN_004d8c90(&local_214,"firstTimeFlag",_DAT_01d5bc7c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"subtitleMode",*(uint *)&g_CGamePtr->field_0x10);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"bloodFlag",*(uint *)&g_CGamePtr->field_0x14);
  engine_ini_cpp_FUN_004d8c90(&local_214,"currentBoard",_DAT_01d74020);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_214,"Sound");
  sound_sndmain_cpp_FUN_00559520(&local_214);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_214,"Control");
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"gameControl",*(uint *)&g_CGamePtr->field_0xd4);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyWalk",*(uint *)&g_CGamePtr->field_0x28);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyBackup",*(uint *)&g_CGamePtr->field_0x2c);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyRun",*(uint *)&g_CGamePtr->field_0x30);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyStrafe",*(uint *)&g_CGamePtr->field_0x34);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyStrafeLeft",*(uint *)&g_CGamePtr->field_0x38);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyStrafeRight",*(uint *)&g_CGamePtr->field_0x3c);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyRight",*(uint *)&g_CGamePtr->field_0x40)
  ;
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyLeft",*(uint *)&g_CGamePtr->field_0x44);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyFire",*(uint *)&g_CGamePtr->field_0x48);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyAction",*(uint *)&g_CGamePtr->field_0x4c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyUseItem",*(uint *)&g_CGamePtr->field_0x50);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyLight",*(uint *)&g_CGamePtr->field_0x54)
  ;
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyFieldNotes",*(uint *)&g_CGamePtr->field_0x5c);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyMap",*(uint *)&g_CGamePtr->field_0x60);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyVoodooDoll",*(uint *)&g_CGamePtr->field_0x68);
  engine_ini_cpp_FUN_004d8c90(&local_214,"keyDraw",*(uint *)&g_CGamePtr->field_0x6c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyQuickTurn",*(uint *)&g_CGamePtr->field_0x74);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyPointUp",*(uint *)&g_CGamePtr->field_0x78);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyPointDown",*(uint *)&g_CGamePtr->field_0x7c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyWeapon1",*(uint *)&g_CGamePtr->field_0x80);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyWeapon2",*(uint *)&g_CGamePtr->field_0x84);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyWeapon3",*(uint *)&g_CGamePtr->field_0x88);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyWeapon4",*(uint *)&g_CGamePtr->field_0x8c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyWeapon5",*(uint *)&g_CGamePtr->field_0x90);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyNextWeapon",*(uint *)&g_CGamePtr->field_0x94);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyPrevWeapon",*(uint *)&g_CGamePtr->field_0x98);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyNextItem",*(uint *)&g_CGamePtr->field_0x9c);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"keyPrevItem",*(uint *)&g_CGamePtr->field_0xa0);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"invertMouseYAxis",*(uint *)&g_CGamePtr->field_0xac);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"alwaysRun",*(uint *)&g_CGamePtr->field_0xb0);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"xMouseSensitivity",*(uint *)&g_CGamePtr->field_0xb4);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"yMouseSensitivity",*(uint *)&g_CGamePtr->field_0xb8);
  engine_ini_cpp_FUN_004d8c90(&local_214,"xCenter",*(uint *)&g_CGamePtr->field_0xbc);
  engine_ini_cpp_FUN_004d8c90(&local_214,"yCenter",*(uint *)&g_CGamePtr->field_0xc0);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"xStickMin",*(uint *)&g_CGamePtr->field_0xc4);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"xStickMax",*(uint *)&g_CGamePtr->field_0xc8);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"yStickMin",*(uint *)&g_CGamePtr->field_0xcc);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"yStickMax",*(uint *)&g_CGamePtr->field_0xd0);
  engine_ini_cpp_FUN_004d8c90(&local_214,"aimMode",*(uint *)&g_CGamePtr->field_0xdc);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"show_hero_numbers",*(uint *)&g_CGamePtr->field_0xe0);
  engine_ini_cpp_FUN_004d8c90
            (&local_214,"show_crosshair",*(uint *)&g_CGamePtr->field_0xe4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_214,"Debug");
  engine_ini_cpp_FUN_004d8c90(&local_214,"logConsoleFlag",*(uint *)g_CConsolePtr);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_214,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8a50(&local_214,0);
  return;
}
