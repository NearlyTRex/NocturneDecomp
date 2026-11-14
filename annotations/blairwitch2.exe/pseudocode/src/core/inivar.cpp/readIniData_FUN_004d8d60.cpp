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
  engine_ini_cpp_FUN_004d8b20(&local_20c,"heroNumber",&g_CGamePtr->hero_number);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"haloMode",&g_CGamePtr->halo_mode);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"firstTimeFlag",&DAT_01cee1a8);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"subtitleMode",&g_CGamePtr->subtitle_mode);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"bloodFlag",&g_CGamePtr->blood_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"nudityFlag",&g_CGamePtr->nudity_flag);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"foulLanguageFlag",&g_CGamePtr->foul_language_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"shadowFlag",&g_CGamePtr->shadow_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"quimbyFlag",&g_CGamePtr->quimby_flag);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"particleDensity",&DAT_0061ec60);
  pCVar1 = g_CGamePtr;
  if (g_CGamePtr->quimby_flag != 0) {
    g_CGamePtr->nudity_flag = 0;
    pCVar1->foul_language_flag = 0;
    pCVar1->blood_flag = 0;
  }
  _DAT_01d06a74 = 0;
  engine_ini_cpp_FUN_004d8b20(&local_20c,"currentBoard",&DAT_01d06a74);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"puzzleDifficultyMode",&g_CGamePtr->puzzle_difficulty_mode);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"combatDifficultyMode",&g_CGamePtr->combat_difficulty_mode);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Sound");
  sound_sndmain_cpp_readIni_FUN_00553680(&local_20c);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Control");
  engine_ini_cpp_FUN_004d8b20(&local_20c,"gameControl",&g_CGamePtr->game_control);
  core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(g_CGamePtr);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWalk",&g_CGamePtr->key_walk);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyBackup",&g_CGamePtr->key_backup);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyRun",&g_CGamePtr->key_run);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafe",&g_CGamePtr->key_strafe);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafeLeft",&g_CGamePtr->key_strafe_left);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyStrafeRight",&g_CGamePtr->key_strafe_right);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyRight",&g_CGamePtr->key_right);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyLeft",&g_CGamePtr->key_left);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyFire",&g_CGamePtr->key_fire);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyUseItem",&g_CGamePtr->key_use_item);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyLight",&g_CGamePtr->key_light);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyDraw",&g_CGamePtr->key_draw);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPointUp",&g_CGamePtr->key_point_up);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPointDown",&g_CGamePtr->key_point_down);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon1",&g_CGamePtr->key_weapon_1);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon2",&g_CGamePtr->key_weapon_2);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyWeapon3",&g_CGamePtr->key_weapon_3);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyDrop",&g_CGamePtr->key_drop);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextWeapon",&g_CGamePtr->key_next_weapon);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPrevWeapon",&g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextItem",&g_CGamePtr->key_next_item);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyPrevItem",&g_CGamePtr->key_prev_item);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyItemDesc",&g_CGamePtr->key_item_desc);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"keyNextAmmo",&g_CGamePtr->key_next_ammo);
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
  engine_ini_cpp_FUN_004d8b20(&local_20c,"aimMode",&g_CGamePtr->aim_mode);
  engine_ini_cpp_FUN_004d8b20(&local_20c,"autoUseHealth",&g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Debug");
  engine_ini_cpp_FUN_004d8b20(&local_20c,"logConsoleFlag",g_CConsolePtr);
  engine_ini_cpp_FUN_004d8b20
            (&local_20c,"headOfHorrorCheat",&g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_20c,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8940(&local_20c,0);
  return;
}
