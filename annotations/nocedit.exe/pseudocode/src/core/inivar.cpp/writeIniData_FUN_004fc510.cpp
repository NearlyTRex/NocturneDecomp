// Name: core_inivar.cpp_writeIniData_FUN_004fc510
// Address: 004fc510
// Address Range: [[004fc510, 004fcc22]]
// Convention: __cdecl
// Signature: void core_inivar.cpp_writeIniData_FUN_004fc510(void)

#include "nocturne.h"

void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void)

{
  BADSPACEBASE *in_ESP;
  
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)&stack0xfffffdf0,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0
            ((CIniFile *)&stack0xfffffdf4,"Graphics");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffdf8,"gamePIXX",g_CGamePtr->game_pixx);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffdfc,"gamePIXY",g_CGamePtr->game_pixy);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe00,"gameBPP",g_CGamePtr->game_bpp);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe04,"useAGPFlag",g_PodSystemVersion);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0
            ((CIniFile *)&stack0xfffffe08,"rendererDLLPath",g_RendererDllName);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe0c,"gamma",g_CGamePtr->gamma);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe10,"heroNumber",g_CGamePtr->hero_number);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe14,"haloMode",g_CGamePtr->halo_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe18,"firstTimeFlag",g_SkipIntroVideo);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe1c,"subtitleMode",g_CGamePtr->subtitle_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe20,"bloodFlag",g_CGamePtr->blood_flag);
  if (g_CGamePtr->quimby_flag == 0) {
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              ((CIniFile *)&stack0xfffffe24,"nudityFlag",g_CGamePtr->nudity_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              ((CIniFile *)&stack0xfffffe28,"foulLanguageFlag",
               g_CGamePtr->foul_language_flag);
    engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
              ((CIniFile *)&stack0xfffffe2c,"shadowFlag",g_CGamePtr->shadow_flag);
  }
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe30,"quimbyFlag",g_CGamePtr->quimby_flag);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe34,"currentBoard",g_GraphicsCardHandle);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xfffffe38,"Sound");
  sound_sndmain_cpp_writeIni_FUN_005ac220((CIniFile *)&stack0xfffffe3c);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0
            ((CIniFile *)&stack0xfffffe40,"Control");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe44,"gameControl",g_CGamePtr->game_control);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe48,"keyWalk",g_CGamePtr->key_walk);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe4c,"keyBackup",g_CGamePtr->key_backup);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe50,"keyRun",g_CGamePtr->key_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe54,"keyStrafe",g_CGamePtr->key_strafe);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe58,"keyStrafeLeft",g_CGamePtr->key_strafe_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe5c,"keyStrafeRight",g_CGamePtr->key_strafe_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe60,"keyRight",g_CGamePtr->key_right);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe64,"keyLeft",g_CGamePtr->key_left);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe68,"keyFire",g_CGamePtr->key_fire);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe6c,"keyUseItem",g_CGamePtr->key_use_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe70,"keyLight",g_CGamePtr->key_light);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe74,"keyInfrared",g_CGamePtr->key_infrared);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe78,"keyDraw",g_CGamePtr->key_draw);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe7c,"keyJump",g_CGamePtr->key_jump);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe80,"keyPointUp",g_CGamePtr->key_point_up);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe84,"keyPointDown",g_CGamePtr->key_point_down);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe88,"keyWeapon1",g_CGamePtr->key_weapon_1);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe8c,"keyWeapon2",g_CGamePtr->key_weapon_2);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe90,"keyWeapon3",g_CGamePtr->key_weapon_3);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe94,"keyWeapon4",g_CGamePtr->key_weapon_4);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe98,"keyWeapon5",g_CGamePtr->key_weapon_5);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffe9c,"keyNextWeapon",g_CGamePtr->key_next_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffea0,"keyPrevWeapon",g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffea4,"keyNextItem",g_CGamePtr->key_next_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffea8,"keyPrevItem",g_CGamePtr->key_prev_item);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeac,"keyItemDesc",g_CGamePtr->key_item_desc);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeb0,"keyNextAmmo",g_CGamePtr->key_next_ammo);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeb4,"invertMouseYAxis",
             g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeb8,"alwaysRun",g_CGamePtr->always_run);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffebc,"xMouseSensitivity",
             g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffec0,"yMouseSensitivity",
             g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffec4,"xCenter",g_CGamePtr->x_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffec8,"yCenter",g_CGamePtr->y_center);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffecc,"xStickMin",g_CGamePtr->x_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffed0,"xStickMax",g_CGamePtr->x_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffed4,"yStickMin",g_CGamePtr->y_stick_min);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffed8,"yStickMax",g_CGamePtr->y_stick_max);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffedc,"aimMode",g_CGamePtr->aim_mode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffee0,"autoUseHealth",g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xfffffee4,"Debug");
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffee8,"logConsoleFlag",
             g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeec,"headOfHorrorCheat",
             g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xfffffef0,"Editor")
  ;
  core_msnedit_cpp_writeIni_FUN_005375d0(g_CDemonMissionPtr,(CIniFile *)&stack0xfffffef4);
  core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(g_CDemonSetPtr,(CIniFile *)&stack0xfffffef8);
  return;
}
