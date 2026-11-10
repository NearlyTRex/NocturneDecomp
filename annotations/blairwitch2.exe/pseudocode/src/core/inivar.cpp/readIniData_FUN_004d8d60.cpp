// Name: core_inivar.cpp_readIniData_FUN_004d8d60
// Address: 004d8d60
// Address Range: [[004d8d60, 004d94ce]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_readIniData_FUN_004d8d60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_readIniData_FUN_004d8d60(void)

{
  CGame *pCVar1;
  int iVar2;
  CIniFile local_20c;
  
  iVar2 = _chmod(".\\system\\nocturne.ini",0x180);
  if (iVar2 != 0) {
    _DAT_01d046a0 = "..\\core\\inivar.cpp";
    _DAT_01d046a4 = 0x58;
    core_main_c_FUN_004e4500("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_FUN_004d8910(&local_20c,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Graphics");
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gamePIXX",g_CGamePtr);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gamePIXY",&g_CGamePtr->game_pixy);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gameBPP",&g_CGamePtr->game_bpp);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"useDirect3D",&DAT_0264bba0);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"useAGPFlag",&DAT_0264bbac);
  engine_ini_cpp_CIniFile_getString_FUN_004d8a10
            (&local_20c,"rendererDLLPath",&DAT_0061e180,0xfa);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gamma",&g_CGamePtr->gamma);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"heroNumber",&g_CGamePtr->field_0xd4);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"haloMode",&g_CGamePtr->field_0xc);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"firstTimeFlag",&DAT_01cee1a8);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"subtitleMode",&g_CGamePtr->field_0x10);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"bloodFlag",&g_CGamePtr->field_0x14);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"nudityFlag",&g_CGamePtr->field_0x18);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"foulLanguageFlag",&g_CGamePtr->field_0x1c);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"shadowFlag",&g_CGamePtr->quimby_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"quimbyFlag",&g_CGamePtr->field_0x20);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"particleDensity",&DAT_0061ec60);
  pCVar1 = g_CGamePtr;
  if (*(int *)&g_CGamePtr->field_0x20 != 0) {
    *(uint *)&g_CGamePtr->field_0x18 = 0;
    *(uint *)&pCVar1->field_0x1c = 0;
    *(uint *)&pCVar1->field_0x14 = 0;
  }
  _DAT_01d06a74 = 0;
  engine_ini_cpp_FUN_004d8b20(&local_20c,"currentBoard",&DAT_01d06a74);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"puzzleDifficultyMode",&g_CGamePtr->field_0xe4);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"combatDifficultyMode",&g_CGamePtr->field_0xe8);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Sound");
  sound_sndmain_cpp_readIni_FUN_00553680(&local_20c);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Control");
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gameControl",&g_CGamePtr->field_0xd0);
  core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(g_CGamePtr);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWalk",&g_CGamePtr->shadow_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyBackup",&g_CGamePtr->key_walk);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyRun",&g_CGamePtr->field_0x30);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafe",&g_CGamePtr->field_0x34);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafeLeft",&g_CGamePtr->field_0x38);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafeRight",&g_CGamePtr->field_0x3c);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyRight",&g_CGamePtr->field_0x40);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyLeft",&g_CGamePtr->field_0x44);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyFire",&g_CGamePtr->field_0x48);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyUseItem",&g_CGamePtr->field_0x4c);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyLight",&g_CGamePtr->field_0x50);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyDraw",&g_CGamePtr->field_0x68);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPointUp",&g_CGamePtr->field_0x74);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPointDown",&g_CGamePtr->field_0x78);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon1",&g_CGamePtr->field_0x7c);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon2",&g_CGamePtr->field_0x80);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon3",&g_CGamePtr->field_0x84);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyDrop",&g_CGamePtr->field_0xaf0);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextWeapon",&g_CGamePtr->field_0x90);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPrevWeapon",&g_CGamePtr->field_0x94);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextItem",&g_CGamePtr->field_0x98);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPrevItem",&g_CGamePtr->field_0x9c);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyItemDesc",&g_CGamePtr->field_0xa0);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextAmmo",&g_CGamePtr->field_0xa4);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"invertMouseYAxis",&g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"alwaysRun",&g_CGamePtr->always_run);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"xMouseSensitivity",&g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"yMouseSensitivity",&g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"xCenter",&g_CGamePtr->x_center);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"yCenter",&g_CGamePtr->y_center);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"xStickMin",&g_CGamePtr->x_stick_min);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"xStickMax",&g_CGamePtr->x_stick_max);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"yStickMin",&g_CGamePtr->y_stick_min);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"yStickMax",&g_CGamePtr->y_stick_max);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"aimMode",&g_CGamePtr->field_0xd8);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"autoUseHealth",&g_CGamePtr->field_0xdc);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Debug");
  engine_ini_cpp_FUN_004d8b20(&local_20c,"logConsoleFlag",g_CConsolePtr);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"headOfHorrorCheat",&g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8940(&local_20c,0);
  return;
}
