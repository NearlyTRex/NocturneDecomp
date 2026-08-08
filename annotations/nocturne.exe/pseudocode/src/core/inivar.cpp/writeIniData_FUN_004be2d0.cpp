// Name: core_inivar.cpp_writeIniData_FUN_004be2d0
// Address: 004be2d0
// Address Range: [[004be2d0, 004be9c5]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void)

{
  CIniFile local_210;
  
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860(&local_210,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_210,"Graphics");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"gamePIXX",g_CGame_PTR_005b9354->game_pixx);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"gamePIXY",g_CGame_PTR_005b9354->game_pixy);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"gameBPP",g_CGame_PTR_005b9354->game_bpp);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(&local_210,"useDirect3D",g_UseDirect3D);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(&local_210,"useAGPFlag",g_AGPTextureMode)
  ;
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0
            (&local_210,"rendererDLLPath","trid3d.dll");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"gamma",g_CGame_PTR_005b9354->gamma);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"heroNumber",g_CGame_PTR_005b9354->hero_number);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"haloMode",g_CGame_PTR_005b9354->halo_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(&local_210,"firstTimeFlag",_DAT_01cae37c)
  ;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"subtitleMode",g_CGame_PTR_005b9354->subtitle_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"bloodFlag",g_CGame_PTR_005b9354->blood_flag);
  if (g_CGame_PTR_005b9354->quimby_flag == 0) {
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
              (&local_210,"nudityFlag",g_CGame_PTR_005b9354->nudity_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
              (&local_210,"foulLanguageFlag",g_CGame_PTR_005b9354->foul_language_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
              (&local_210,"shadowFlag",g_CGame_PTR_005b9354->shadow_flag);
  }
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"quimbyFlag",g_CGame_PTR_005b9354->quimby_flag);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(&local_210,"currentBoard",_DAT_01cc64a4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_210,"Sound");
  sound_sndmain_cpp_writeIni_FUN_00528c80(&local_210);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_210,"Control");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"gameControl",g_CGame_PTR_005b9354->game_control);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWalk",g_CGame_PTR_005b9354->key_walk);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyBackup",g_CGame_PTR_005b9354->key_backup);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyRun",g_CGame_PTR_005b9354->key_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyStrafe",g_CGame_PTR_005b9354->key_strafe);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyStrafeLeft",g_CGame_PTR_005b9354->key_strafe_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyStrafeRight",g_CGame_PTR_005b9354->key_strafe_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyRight",g_CGame_PTR_005b9354->key_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyLeft",g_CGame_PTR_005b9354->key_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyFire",g_CGame_PTR_005b9354->key_fire);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyUseItem",g_CGame_PTR_005b9354->key_use_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyLight",g_CGame_PTR_005b9354->key_light);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyInfrared",g_CGame_PTR_005b9354->key_infrared);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyDraw",g_CGame_PTR_005b9354->key_draw);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyJump",g_CGame_PTR_005b9354->key_jump);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyPointUp",g_CGame_PTR_005b9354->key_point_up);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyPointDown",g_CGame_PTR_005b9354->key_point_down);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWeapon1",g_CGame_PTR_005b9354->key_weapon_1);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWeapon2",g_CGame_PTR_005b9354->key_weapon_2);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWeapon3",g_CGame_PTR_005b9354->key_weapon_3);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWeapon4",g_CGame_PTR_005b9354->key_weapon_4);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyWeapon5",g_CGame_PTR_005b9354->key_weapon_5);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyNextWeapon",g_CGame_PTR_005b9354->key_next_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyPrevWeapon",g_CGame_PTR_005b9354->key_prev_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyNextItem",g_CGame_PTR_005b9354->key_next_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyPrevItem",g_CGame_PTR_005b9354->key_prev_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyItemDesc",g_CGame_PTR_005b9354->key_item_desc);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"keyNextAmmo",g_CGame_PTR_005b9354->key_next_ammo);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"invertMouseYAxis",g_CGame_PTR_005b9354->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"alwaysRun",g_CGame_PTR_005b9354->always_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"xMouseSensitivity",g_CGame_PTR_005b9354->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"yMouseSensitivity",g_CGame_PTR_005b9354->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"xCenter",g_CGame_PTR_005b9354->x_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"yCenter",g_CGame_PTR_005b9354->y_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"xStickMin",g_CGame_PTR_005b9354->x_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"xStickMax",g_CGame_PTR_005b9354->x_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"yStickMin",g_CGame_PTR_005b9354->y_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"yStickMax",g_CGame_PTR_005b9354->y_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"aimMode",g_CGame_PTR_005b9354->aim_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"autoUseHealth",g_CGame_PTR_005b9354->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_210,"Debug");
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"logConsoleFlag",g_CConsole_PTR_005ad350->file_logging_enabled);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80
            (&local_210,"headOfHorrorCheat",g_CGame_PTR_005b9354->head_of_horror_cheat);
  return;
}
