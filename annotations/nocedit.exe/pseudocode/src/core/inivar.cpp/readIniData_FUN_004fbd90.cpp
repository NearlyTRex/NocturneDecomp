// Name: core_inivar.cpp_readIniData_FUN_004fbd90
// Address: 004fbd90
// Address Range: [[004fbd90, 004fc50c]]
// Convention: __cdecl
// Signature: void core_inivar.cpp_readIniData_FUN_004fbd90(void)

#include "nocturne.h"

void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void)

{
  CGame *pCVar1;
  DWORD DVar2;
  BADSPACEBASE *in_ESP;
  char *in_stack_fffffe14;
  
  DVar2 = crt_file_c_setReadonlyAttribute_FUN_00600c30(".\\system\\nocturne.ini",0x180);
  if (DVar2 != 0) {
    g_CurrentFilename = "..\\core\\inivar.cpp";
    g_CurrentLineNumber = 0x57;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)&stack0xfffffe04,".\\system\\nocturne.ini",0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0
            ((CIniFile *)&stack0xfffffe08,"Graphics");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe0c,"gamePIXX",&g_CGamePtr->game_pixx);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe10,"gamePIXY",&g_CGamePtr->game_pixy);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe14,"gameBPP",&g_CGamePtr->game_bpp);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe18,"useDirect3D",&g_FullscreenMode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe1c,"useAGPFlag",&g_PodSystemVersion);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            ((CIniFile *)&stack0xfffffe20,"rendererDLLPath",g_RendererDllName,0xfa,
             in_stack_fffffe14);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe24,"gamma",&g_CGamePtr->gamma);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe28,"heroNumber",&g_CGamePtr->hero_number);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe2c,"haloMode",&g_CGamePtr->halo_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe30,"firstTimeFlag",&g_SkipIntroVideo);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe34,"subtitleMode",&g_CGamePtr->subtitle_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe38,"bloodFlag",&g_CGamePtr->blood_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe3c,"nudityFlag",&g_CGamePtr->nudity_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe40,"foulLanguageFlag",
             &g_CGamePtr->foul_language_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe44,"shadowFlag",&g_CGamePtr->shadow_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe48,"quimbyFlag",&g_CGamePtr->quimby_flag);
  pCVar1 = g_CGamePtr;
  if (g_CGamePtr->quimby_flag != 0) {
    g_CGamePtr->nudity_flag = 0;
    pCVar1->foul_language_flag = 0;
    pCVar1->blood_flag = 0;
  }
  g_GraphicsCardHandle = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe4c,"currentBoard",&g_GraphicsCardHandle);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xfffffe50,"Sound");
  sound_sndmain_cpp_readIni_FUN_005abf20((CIniFile *)&stack0xfffffe54);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0
            ((CIniFile *)&stack0xfffffe58,"Control");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe5c,"gameControl",&g_CGamePtr->game_control);
  core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0();
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe64,"keyWalk",&g_CGamePtr->key_walk);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe68,"keyBackup",&g_CGamePtr->key_backup);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe6c,"keyRun",&g_CGamePtr->key_run);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe70,"keyStrafe",&g_CGamePtr->key_strafe);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe74,"keyStrafeLeft",&g_CGamePtr->key_strafe_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe78,"keyStrafeRight",&g_CGamePtr->key_strafe_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe7c,"keyRight",&g_CGamePtr->key_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe80,"keyLeft",&g_CGamePtr->key_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe84,"keyFire",&g_CGamePtr->key_fire);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe88,"keyUseItem",&g_CGamePtr->key_use_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe8c,"keyLight",&g_CGamePtr->key_light);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe90,"keyInfrared",&g_CGamePtr->key_infrared);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe94,"keyDraw",&g_CGamePtr->key_draw);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe98,"keyJump",&g_CGamePtr->key_jump);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffe9c,"keyPointUp",&g_CGamePtr->key_point_up);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffea0,"keyPointDown",&g_CGamePtr->key_point_down);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffea4,"keyWeapon1",&g_CGamePtr->key_weapon_1);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffea8,"keyWeapon2",&g_CGamePtr->key_weapon_2);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffeac,"keyWeapon3",&g_CGamePtr->key_weapon_3);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffeb0,"keyWeapon4",&g_CGamePtr->key_weapon_4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffeb4,"keyWeapon5",&g_CGamePtr->key_weapon_5);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffeb8,"keyNextWeapon",&g_CGamePtr->key_next_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffebc,"keyPrevWeapon",&g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffec0,"keyNextItem",&g_CGamePtr->key_next_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffec4,"keyPrevItem",&g_CGamePtr->key_prev_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffec8,"keyItemDesc",&g_CGamePtr->key_item_desc);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffecc,"keyNextAmmo",&g_CGamePtr->key_next_ammo);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffed0,"invertMouseYAxis",
             &g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffed4,"alwaysRun",&g_CGamePtr->always_run);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffed8,"xMouseSensitivity",
             &g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffedc,"yMouseSensitivity",
             &g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffee0,"xCenter",&g_CGamePtr->x_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffee4,"yCenter",&g_CGamePtr->y_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffee8,"xStickMin",&g_CGamePtr->x_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffeec,"xStickMax",&g_CGamePtr->x_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffef0,"yStickMin",&g_CGamePtr->y_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffef4,"yStickMax",&g_CGamePtr->y_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffef8,"aimMode",&g_CGamePtr->aim_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffefc,"autoUseHealth",&g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xffffff00,"Debug");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xffffff04,"logConsoleFlag",
             &g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xffffff08,"headOfHorrorCheat",
             &g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xffffff0c,"Editor")
  ;
  core_msnedit_cpp_readIni_FUN_00537530(g_CDemonMissionPtr,(CIniFile *)&stack0xffffff10);
  core_setedit_cpp_CDemonSet_readIni_FUN_00584900(g_CDemonSetPtr,(CIniFile *)&stack0xffffff14);
  return;
}
