// Name: core_inivar.cpp_readIniData_FUN_004fbd90
// Address: 004fbd90
// MANUAL RECONSTRUCTION
// Address Range: [[004fbd90, 004fc50c]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void)

#include "nocturne.h"

void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void)

{
  DWORD DVar2;
  CIniFile local_204;
  CGame *pCVar1;

  DVar2 = engine_dosio_cpp_setReadonlyAttribute_FUN_00600c30(".\\system\\nocturne.ini",0x180);
  if (DVar2 != 0) {
    g_CurrentFilename = "..\\core\\inivar.cpp";
    g_CurrentLineNumber = 87;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_204,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_204,"Graphics");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"gamePIXX",&g_CGamePtr->game_pixx);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"gamePIXY",&g_CGamePtr->game_pixy);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"gameBPP",&g_CGamePtr->game_bpp);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_204,"useDirect3D",&g_UseDirect3D);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"useAGPFlag",&g_AGPTextureMode);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (&local_204,"rendererDLLPath",g_RendererDllPath,0xfa);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_204,"gamma",&g_CGamePtr->gamma);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"heroNumber",(int *)&g_CGamePtr->hero_number);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"haloMode",&g_CGamePtr->halo_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"firstTimeFlag",&g_FirstTimeFlag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"subtitleMode",&g_CGamePtr->subtitle_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"bloodFlag",&g_CGamePtr->blood_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"nudityFlag",&g_CGamePtr->nudity_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"foulLanguageFlag",&g_CGamePtr->foul_language_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"shadowFlag",&g_CGamePtr->shadow_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"quimbyFlag",&g_CGamePtr->quimby_flag);
  pCVar1 = g_CGamePtr;
  if (g_CGamePtr->quimby_flag != 0) {
    g_CGamePtr->nudity_flag = 0;
    pCVar1->foul_language_flag = 0;
    pCVar1->blood_flag = 0;
  }
  g_CurrentGraphicsBoard = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"currentBoard",&g_CurrentGraphicsBoard);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_204,"Sound");
  sound_sndmain_cpp_readIni_FUN_005abf20(&local_204);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_204,"Control");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"gameControl",(int *)&g_CGamePtr->game_control);
  core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(g_CGamePtr);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWalk",&g_CGamePtr->key_walk);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyBackup",&g_CGamePtr->key_backup);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_204,"keyRun",&g_CGamePtr->key_run)
  ;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyStrafe",&g_CGamePtr->key_strafe);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyStrafeLeft",&g_CGamePtr->key_strafe_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyStrafeRight",&g_CGamePtr->key_strafe_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyRight",&g_CGamePtr->key_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyLeft",&g_CGamePtr->key_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyFire",&g_CGamePtr->key_fire);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyUseItem",&g_CGamePtr->key_use_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyLight",&g_CGamePtr->key_light);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyInfrared",&g_CGamePtr->key_infrared);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyDraw",&g_CGamePtr->key_draw);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyJump",&g_CGamePtr->key_jump);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyPointUp",&g_CGamePtr->key_point_up);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyPointDown",&g_CGamePtr->key_point_down);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWeapon1",&g_CGamePtr->key_weapon_1);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWeapon2",&g_CGamePtr->key_weapon_2);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWeapon3",&g_CGamePtr->key_weapon_3);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWeapon4",&g_CGamePtr->key_weapon_4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyWeapon5",&g_CGamePtr->key_weapon_5);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyNextWeapon",&g_CGamePtr->key_next_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyPrevWeapon",&g_CGamePtr->key_prev_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyNextItem",&g_CGamePtr->key_next_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyPrevItem",&g_CGamePtr->key_prev_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyItemDesc",&g_CGamePtr->key_item_desc);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"keyNextAmmo",&g_CGamePtr->key_next_ammo);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"invertMouseYAxis",&g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"alwaysRun",&g_CGamePtr->always_run);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"xMouseSensitivity",&g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"yMouseSensitivity",&g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"xCenter",&g_CGamePtr->x_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"yCenter",&g_CGamePtr->y_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"xStickMin",&g_CGamePtr->x_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"xStickMax",&g_CGamePtr->x_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"yStickMin",&g_CGamePtr->y_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"yStickMax",&g_CGamePtr->y_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"aimMode",(int *)&g_CGamePtr->aim_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"autoUseHealth",&g_CGamePtr->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_204,"Debug");
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"logConsoleFlag",&g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_204,"headOfHorrorCheat",&g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(&local_204,"Editor");
  core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(g_CDemonMissionPtr,&local_204);
  core_setedit_cpp_CDemonSet_readIni_FUN_00584900(g_CDemonSetPtr,&local_204);
#if NOCTURNE_MENU_APPLIES_RESOLUTION
  nocturne_window_set_size(g_CGamePtr->game_pixx,g_CGamePtr->game_pixy);
#endif
  return;
}
