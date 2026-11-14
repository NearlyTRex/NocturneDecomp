// Name: core_inivar.cpp_readIniData_FUN_004f4f50
// Address: 004f4f50
// Address Range: [[004f4f50, 004f575f]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_readIniData_FUN_004f4f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_readIniData_FUN_004f4f50(void)

{
  int iVar1;
  CIniFile local_210;
  
  iVar1 = _chmod(".\\system\\nocturne.ini",0x180);
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\core\\inivar.cpp";
    _DAT_01d1d404 = 0x57;
    core_main_c_FUN_005030e0("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_FUN_004f4b00(&local_210,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_210,"Graphics");
  engine_ini_cpp_FUN_004f4d10(&local_210,"gamePIXX",g_CGamePtr);
  engine_ini_cpp_FUN_004f4d10(&local_210,"gamePIXY",&g_CGamePtr->game_pixy);
  engine_ini_cpp_FUN_004f4d10(&local_210,"gameBPP",&g_CGamePtr->game_bpp);
  engine_ini_cpp_FUN_004f4d10(&local_210,"useDirect3D",&DAT_02c83370);
  engine_ini_cpp_FUN_004f4d10(&local_210,"useAGPFlag",&DAT_02c8337c);
  engine_ini_cpp_CIniFile_getString_FUN_004f4c00
            (&local_210,"rendererDLLPath",&DAT_006257d0,0xfa);
  engine_ini_cpp_FUN_004f4d10(&local_210,"gamma",&g_CGamePtr->gamma);
  engine_ini_cpp_FUN_004f4d10(&local_210,"heroNumber",&g_CGamePtr->hero_number);
  engine_ini_cpp_FUN_004f4d10(&local_210,"haloMode",&g_CGamePtr->halo_mode);
  engine_ini_cpp_FUN_004f4d10(&local_210,"firstTimeFlag",&DAT_01d06d68);
  engine_ini_cpp_FUN_004f4d10(&local_210,"subtitleMode",&g_CGamePtr->subtitle_mode);
  engine_ini_cpp_FUN_004f4d10(&local_210,"bloodFlag",&g_CGamePtr->blood_flag);
  engine_ini_cpp_FUN_004f4d10(&local_210,"nudityFlag",&g_CGamePtr->nudity_flag);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"foulLanguageFlag",&g_CGamePtr->foul_language_flag);
  engine_ini_cpp_FUN_004f4d10(&local_210,"shadowFlag",&g_CGamePtr->shadow_flag);
  engine_ini_cpp_FUN_004f4d10(&local_210,"quimbyFlag",&g_CGamePtr->quimby_flag);
  _DAT_01d1f5d4 = 0;
  engine_ini_cpp_FUN_004f4d10(&local_210,"currentBoard",&DAT_01d1f5d4);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"puzzleDifficultyMode",&g_CGamePtr->puzzle_difficulty_mode);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"combatDifficultyMode",&g_CGamePtr->combat_difficulty_mode);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_210,"Sound");
  sound_sndmain_cpp_readIni_FUN_005760b0(&local_210);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_210,"Control");
  engine_ini_cpp_FUN_004f4d10(&local_210,"gameControl",&g_CGamePtr->game_control);
  core_game_cpp_FUN_004d0400(g_CGamePtr);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWalk",&g_CGamePtr->key_walk);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyBackup",&g_CGamePtr->key_backup);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyRun",&g_CGamePtr->key_run);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyStrafe",&g_CGamePtr->key_strafe);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyStrafeLeft",&g_CGamePtr->key_strafe_left);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyStrafeRight",&g_CGamePtr->key_strafe_right);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyRight",&g_CGamePtr->key_right);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyLeft",&g_CGamePtr->key_left);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyFire",&g_CGamePtr->key_fire);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyUseItem",&g_CGamePtr->key_use_item);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyLight",&g_CGamePtr->key_light);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyInfrared",&g_CGamePtr->key_infrared);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyFieldNotes",&g_CGamePtr->key_field_notes);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyMap",&g_CGamePtr->key_map);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyCompass",&g_CGamePtr->key_compass);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keySPS",&g_CGamePtr->key_sps);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyDraw",&g_CGamePtr->key_draw);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyJump",&g_CGamePtr->key_jump);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyQuickTurn",&g_CGamePtr->key_quick_turn);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyPointUp",&g_CGamePtr->key_point_up);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyPointDown",&g_CGamePtr->key_point_down);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWeapon1",&g_CGamePtr->key_weapon_1);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWeapon2",&g_CGamePtr->key_weapon_2);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWeapon3",&g_CGamePtr->key_weapon_3);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWeapon4",&g_CGamePtr->key_weapon_4);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyWeapon5",&g_CGamePtr->key_weapon_5);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyNextWeapon",&g_CGamePtr->key_next_weapon);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyPrevWeapon",&g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyNextItem",&g_CGamePtr->key_next_item);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyPrevItem",&g_CGamePtr->key_prev_item);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyItemDesc",&g_CGamePtr->key_item_desc);
  engine_ini_cpp_FUN_004f4d10(&local_210,"keyNextAmmo",&g_CGamePtr->key_next_ammo);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"invertMouseYAxis",&g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_FUN_004f4d10(&local_210,"alwaysRun",&g_CGamePtr->always_run);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"xMouseSensitivity",&g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"yMouseSensitivity",&g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_FUN_004f4d10(&local_210,"xCenter",&g_CGamePtr->x_center);
  engine_ini_cpp_FUN_004f4d10(&local_210,"yCenter",&g_CGamePtr->y_center);
  engine_ini_cpp_FUN_004f4d10(&local_210,"xStickMin",&g_CGamePtr->x_stick_min);
  engine_ini_cpp_FUN_004f4d10(&local_210,"xStickMax",&g_CGamePtr->x_stick_max);
  engine_ini_cpp_FUN_004f4d10(&local_210,"yStickMin",&g_CGamePtr->y_stick_min);
  engine_ini_cpp_FUN_004f4d10(&local_210,"yStickMax",&g_CGamePtr->y_stick_max);
  engine_ini_cpp_FUN_004f4d10(&local_210,"aimMode",&g_CGamePtr->aim_mode);
  engine_ini_cpp_FUN_004f4d10(&local_210,"autoUseHealth",&g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_210,"Debug");
  engine_ini_cpp_FUN_004f4d10(&local_210,"logConsoleFlag",g_CConsolePtr);
  engine_ini_cpp_FUN_004f4d10
            (&local_210,"headOfHorrorCheat",&g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_210,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&local_210,0);
  return;
}
