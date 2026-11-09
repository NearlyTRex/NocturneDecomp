// Name: core_inivar.cpp_FUN_004d8e70
// Address: 004d8e70
// Address Range: [[004d8e70, 004d95bc]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_FUN_004d8e70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_FUN_004d8e70(void)

{
  int iVar1;
  CIniFile local_210;
  
  iVar1 = _chmod(".\\system\\bw3.ini",0x180);
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\core\\inivar.cpp";
    _DAT_01d71de4 = 0x57;
    core_main_c_FUN_004e4330("Please copy Blair Witch 3 to your hard drive");
  }
  engine_ini_cpp_FUN_004d8a20(&local_210,".\\system\\bw3.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_210,"Graphics");
  engine_ini_cpp_FUN_004d8c30(&local_210,"gamePIXX",g_CGamePtr);
  engine_ini_cpp_FUN_004d8c30(&local_210,"gamePIXY",&g_CGamePtr->field_0x4);
  engine_ini_cpp_FUN_004d8c30(&local_210,"gameBPP",&g_CGamePtr->field_0x8);
  engine_ini_cpp_FUN_004d8c30(&local_210,"useDirect3D",&DAT_02cf5fcc);
  engine_ini_cpp_FUN_004d8c30(&local_210,"useAGPFlag",&DAT_02cf5fd8);
  engine_ini_cpp_FUN_004d8b20(&local_210,"rendererDLLPath",&DAT_00606730,0xfa);
  engine_ini_cpp_FUN_004d8c30(&local_210,"gamma",&g_CGamePtr->field_0x248);
  engine_ini_cpp_FUN_004d8c30(&local_210,"heroNumber",&g_CGamePtr->field_0xd8);
  engine_ini_cpp_FUN_004d8c30(&local_210,"haloMode",&g_CGamePtr->field_0xc);
  engine_ini_cpp_FUN_004d8c30(&local_210,"firstTimeFlag",&DAT_01d5bc7c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"subtitleMode",&g_CGamePtr->field_0x10);
  engine_ini_cpp_FUN_004d8c30(&local_210,"bloodFlag",&g_CGamePtr->field_0x14);
  engine_ini_cpp_FUN_004d8c30(&local_210,"nudityFlag",&g_CGamePtr->field_0x18);
  engine_ini_cpp_FUN_004d8c30(&local_210,"foulLanguageFlag",&g_CGamePtr->field_0x1c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"shadowFlag",&g_CGamePtr->field_0x24);
  _DAT_01d74020 = 0;
  engine_ini_cpp_FUN_004d8c30(&local_210,"currentBoard",&DAT_01d74020);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_210,"Sound");
  sound_sndmain_cpp_FUN_00559220(&local_210);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_210,"Control");
  engine_ini_cpp_FUN_004d8c30(&local_210,"gameControl",&g_CGamePtr->field_0xd4);
  core_game_cpp_FUN_004b8e60(g_CGamePtr);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWalk",&g_CGamePtr->field_0x28);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyBackup",&g_CGamePtr->field_0x2c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyRun",&g_CGamePtr->field_0x30);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyStrafe",&g_CGamePtr->field_0x34);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyStrafeLeft",&g_CGamePtr->field_0x38);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyStrafeRight",&g_CGamePtr->field_0x3c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyRight",&g_CGamePtr->field_0x40);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyLeft",&g_CGamePtr->field_0x44);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyFire",&g_CGamePtr->field_0x48);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyAction",&g_CGamePtr->field_0x4c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyUseItem",&g_CGamePtr->field_0x50);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyLight",&g_CGamePtr->field_0x54);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyFieldNotes",&g_CGamePtr->field_0x5c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyMap",&g_CGamePtr->field_0x60);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyVoodooDoll",&g_CGamePtr->field_0x68);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyDraw",&g_CGamePtr->field_0x6c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyQuickTurn",&g_CGamePtr->field_0x74);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyPointUp",&g_CGamePtr->field_0x78);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyPointDown",&g_CGamePtr->field_0x7c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWeapon1",&g_CGamePtr->field_0x80);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWeapon2",&g_CGamePtr->field_0x84);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWeapon3",&g_CGamePtr->field_0x88);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWeapon4",&g_CGamePtr->field_0x8c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyWeapon5",&g_CGamePtr->field_0x90);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyNextWeapon",&g_CGamePtr->field_0x94);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyPrevWeapon",&g_CGamePtr->field_0x98);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyNextItem",&g_CGamePtr->field_0x9c);
  engine_ini_cpp_FUN_004d8c30(&local_210,"keyPrevItem",&g_CGamePtr->field_0xa0);
  engine_ini_cpp_FUN_004d8c30(&local_210,"invertMouseYAxis",&g_CGamePtr->field_0xac);
  engine_ini_cpp_FUN_004d8c30(&local_210,"alwaysRun",&g_CGamePtr->field_0xb0);
  engine_ini_cpp_FUN_004d8c30(&local_210,"xMouseSensitivity",&g_CGamePtr->field_0xb4);
  engine_ini_cpp_FUN_004d8c30(&local_210,"yMouseSensitivity",&g_CGamePtr->field_0xb8);
  engine_ini_cpp_FUN_004d8c30(&local_210,"xCenter",&g_CGamePtr->field_0xbc);
  engine_ini_cpp_FUN_004d8c30(&local_210,"yCenter",&g_CGamePtr->field_0xc0);
  engine_ini_cpp_FUN_004d8c30(&local_210,"xStickMin",&g_CGamePtr->field_0xc4);
  engine_ini_cpp_FUN_004d8c30(&local_210,"xStickMax",&g_CGamePtr->field_0xc8);
  engine_ini_cpp_FUN_004d8c30(&local_210,"yStickMin",&g_CGamePtr->field_0xcc);
  engine_ini_cpp_FUN_004d8c30(&local_210,"yStickMax",&g_CGamePtr->field_0xd0);
  engine_ini_cpp_FUN_004d8c30(&local_210,"aimMode",&g_CGamePtr->field_0xdc);
  engine_ini_cpp_FUN_004d8c30(&local_210,"show_hero_numbers",&g_CGamePtr->field_0xe0);
  engine_ini_cpp_FUN_004d8c30(&local_210,"show_crosshair",&g_CGamePtr->field_0xe4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_210,"Debug");
  engine_ini_cpp_FUN_004d8c30(&local_210,"logConsoleFlag",g_CConsolePtr);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(&local_210,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8a50(&local_210,0);
  return;
}
