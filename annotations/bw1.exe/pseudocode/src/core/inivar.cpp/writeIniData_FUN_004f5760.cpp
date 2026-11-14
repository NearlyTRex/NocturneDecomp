// Name: core_inivar.cpp_writeIniData_FUN_004f5760
// Address: 004f5760
// Address Range: [[004f5760, 004f5ee6]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_writeIniData_FUN_004f5760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_writeIniData_FUN_004f5760(void)

{
  CIniFile local_214;
  
  engine_ini_cpp_FUN_004f4b00(&local_214,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_214,"Graphics");
  engine_ini_cpp_FUN_004f4d70(&local_214,"gamePIXX",g_CGamePtr->game_pixx);
  engine_ini_cpp_FUN_004f4d70(&local_214,"gamePIXY",g_CGamePtr->game_pixy);
  engine_ini_cpp_FUN_004f4d70(&local_214,"gameBPP",g_CGamePtr->game_bpp);
  engine_ini_cpp_FUN_004f4d70(&local_214,"useDirect3D",_DAT_02c83370);
  engine_ini_cpp_FUN_004f4d70(&local_214,"useAGPFlag",_DAT_02c8337c);
  engine_ini_cpp_CIniFile_setString_FUN_004f4c90
            (&local_214,"rendererDLLPath",&DAT_006257d0);
  engine_ini_cpp_FUN_004f4d70(&local_214,"gamma",g_CGamePtr->gamma);
  engine_ini_cpp_FUN_004f4d70(&local_214,"heroNumber",g_CGamePtr->hero_number);
  engine_ini_cpp_FUN_004f4d70(&local_214,"haloMode",g_CGamePtr->halo_mode);
  engine_ini_cpp_FUN_004f4d70(&local_214,"firstTimeFlag",_DAT_01d06d68);
  engine_ini_cpp_FUN_004f4d70(&local_214,"subtitleMode",g_CGamePtr->subtitle_mode);
  engine_ini_cpp_FUN_004f4d70(&local_214,"bloodFlag",g_CGamePtr->blood_flag);
  engine_ini_cpp_FUN_004f4d70(&local_214,"quimbyFlag",g_CGamePtr->quimby_flag);
  engine_ini_cpp_FUN_004f4d70(&local_214,"currentBoard",_DAT_01d1f5d4);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"puzzleDifficultyMode",g_CGamePtr->puzzle_difficulty_mode);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"combatDifficultyMode",g_CGamePtr->combat_difficulty_mode);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_214,"Sound");
  sound_sndmain_cpp_writeIni_FUN_005763b0(&local_214);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_214,"Control");
  engine_ini_cpp_FUN_004f4d70(&local_214,"gameControl",g_CGamePtr->game_control);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWalk",g_CGamePtr->key_walk);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyBackup",g_CGamePtr->key_backup);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyRun",g_CGamePtr->key_run);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyStrafe",g_CGamePtr->key_strafe);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyStrafeLeft",g_CGamePtr->key_strafe_left);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyStrafeRight",g_CGamePtr->key_strafe_right);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyRight",g_CGamePtr->key_right);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyLeft",g_CGamePtr->key_left);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyFire",g_CGamePtr->key_fire);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyUseItem",g_CGamePtr->key_use_item);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyLight",g_CGamePtr->key_light);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyInfrared",g_CGamePtr->key_infrared);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyFieldNotes",g_CGamePtr->key_field_notes);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyMap",g_CGamePtr->key_map);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyCompass",g_CGamePtr->key_compass);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keySPS",g_CGamePtr->key_sps);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyDraw",g_CGamePtr->key_draw);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyJump",g_CGamePtr->key_jump);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyQuickTurn",g_CGamePtr->key_quick_turn);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyPointUp",g_CGamePtr->key_point_up);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyPointDown",g_CGamePtr->key_point_down);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWeapon1",g_CGamePtr->key_weapon_1);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWeapon2",g_CGamePtr->key_weapon_2);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWeapon3",g_CGamePtr->key_weapon_3);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWeapon4",g_CGamePtr->key_weapon_4);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyWeapon5",g_CGamePtr->key_weapon_5);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyNextWeapon",g_CGamePtr->key_next_weapon);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyPrevWeapon",g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyNextItem",g_CGamePtr->key_next_item);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyPrevItem",g_CGamePtr->key_prev_item);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyItemDesc",g_CGamePtr->key_item_desc);
  engine_ini_cpp_FUN_004f4d70(&local_214,"keyNextAmmo",g_CGamePtr->key_next_ammo);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"invertMouseYAxis",g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_FUN_004f4d70(&local_214,"alwaysRun",g_CGamePtr->always_run);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"xMouseSensitivity",g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"yMouseSensitivity",g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_FUN_004f4d70(&local_214,"xCenter",g_CGamePtr->x_center);
  engine_ini_cpp_FUN_004f4d70(&local_214,"yCenter",g_CGamePtr->y_center);
  engine_ini_cpp_FUN_004f4d70(&local_214,"xStickMin",g_CGamePtr->x_stick_min);
  engine_ini_cpp_FUN_004f4d70(&local_214,"xStickMax",g_CGamePtr->x_stick_max);
  engine_ini_cpp_FUN_004f4d70(&local_214,"yStickMin",g_CGamePtr->y_stick_min);
  engine_ini_cpp_FUN_004f4d70(&local_214,"yStickMax",g_CGamePtr->y_stick_max);
  engine_ini_cpp_FUN_004f4d70(&local_214,"aimMode",g_CGamePtr->aim_mode);
  engine_ini_cpp_FUN_004f4d70(&local_214,"autoUseHealth",g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_214,"Debug");
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"logConsoleFlag",g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_FUN_004f4d70
            (&local_214,"headOfHorrorCheat",g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(&local_214,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&local_214,0);
  return;
}
