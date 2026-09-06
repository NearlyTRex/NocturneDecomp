// Name: core_inivar.cpp_writeIniData_FUN_004fc510
// Address: 004fc510
// MANUAL RECONSTRUCTION
// Address Range: [[004fc510, 004fcc22]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void)

#include "nocturne.h"

void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void)

{
  CIniFile local_210;

  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_210,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_210,"Graphics");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"gamePIXX",g_CGamePtr->game_pixx);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"gamePIXY",g_CGamePtr->game_pixy);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"gameBPP",g_CGamePtr->game_bpp);
#if !NOCTURNE_AUTHENTIC_D3D_OPTIONS
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"useDirect3D",g_UseDirect3D);
#endif
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(&local_210,"useAGPFlag",g_AGPTextureMode)
  ;
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0
            (&local_210,"rendererDLLPath",g_RendererDllPath);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(&local_210,"gamma",g_CGamePtr->gamma);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"heroNumber",g_CGamePtr->hero_number);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"haloMode",g_CGamePtr->halo_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"firstTimeFlag",g_FirstTimeFlag);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"subtitleMode",g_CGamePtr->subtitle_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"bloodFlag",g_CGamePtr->blood_flag);
  if (g_CGamePtr->quimby_flag == 0) {
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              (&local_210,"nudityFlag",g_CGamePtr->nudity_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              (&local_210,"foulLanguageFlag",g_CGamePtr->foul_language_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              (&local_210,"shadowFlag",g_CGamePtr->shadow_flag);
  }
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"quimbyFlag",g_CGamePtr->quimby_flag);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"currentBoard",g_CurrentGraphicsBoard);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_210,"Sound");
  sound_sndmain_cpp_writeIni_FUN_005ac220(&local_210);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_210,"Control");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"gameControl",g_CGamePtr->game_control);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWalk",g_CGamePtr->key_walk);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyBackup",g_CGamePtr->key_backup);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(&local_210,"keyRun",g_CGamePtr->key_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyStrafe",g_CGamePtr->key_strafe);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyStrafeLeft",g_CGamePtr->key_strafe_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyStrafeRight",g_CGamePtr->key_strafe_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyRight",g_CGamePtr->key_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyLeft",g_CGamePtr->key_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyFire",g_CGamePtr->key_fire);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyUseItem",g_CGamePtr->key_use_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyLight",g_CGamePtr->key_light);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyInfrared",g_CGamePtr->key_infrared);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyDraw",g_CGamePtr->key_draw);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyJump",g_CGamePtr->key_jump);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyPointUp",g_CGamePtr->key_point_up);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyPointDown",g_CGamePtr->key_point_down);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWeapon1",g_CGamePtr->key_weapon_1);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWeapon2",g_CGamePtr->key_weapon_2);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWeapon3",g_CGamePtr->key_weapon_3);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWeapon4",g_CGamePtr->key_weapon_4);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyWeapon5",g_CGamePtr->key_weapon_5);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyNextWeapon",g_CGamePtr->key_next_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyPrevWeapon",g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyNextItem",g_CGamePtr->key_next_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyPrevItem",g_CGamePtr->key_prev_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyItemDesc",g_CGamePtr->key_item_desc);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"keyNextAmmo",g_CGamePtr->key_next_ammo);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"invertMouseYAxis",g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"alwaysRun",g_CGamePtr->always_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"xMouseSensitivity",g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"yMouseSensitivity",g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"xCenter",g_CGamePtr->x_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"yCenter",g_CGamePtr->y_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"xStickMin",g_CGamePtr->x_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"xStickMax",g_CGamePtr->x_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"yStickMin",g_CGamePtr->y_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"yStickMax",g_CGamePtr->y_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"aimMode",g_CGamePtr->aim_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"autoUseHealth",g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_210,"Debug");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"logConsoleFlag",g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (&local_210,"headOfHorrorCheat",g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_210,"Editor");
  core_msnedit_cpp_CDemonMission_writeIni_FUN_005375d0(g_CDemonMissionPtr,&local_210);
  core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(g_CDemonSetPtr,&local_210);
  return;
}
