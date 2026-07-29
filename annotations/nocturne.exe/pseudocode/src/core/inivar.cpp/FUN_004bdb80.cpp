// Name: core_inivar.cpp_FUN_004bdb80
// Address: 004bdb80
// Address Range: [[004bdb80, 004be2c6]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_FUN_004bdb80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_FUN_004bdb80(void)

{
  CGame *pCVar1;
  DWORD DVar2;
  CIniFile local_204;
  
  DVar2 = engine_dosio_cpp_setReadonlyAttribute_FUN_00565dd0(".\\system\\nocturne.ini",0x180);
  if (DVar2 != 0) {
    PTR_01cc4800 = "..\\core\\inivar.cpp";
    INT_01cc4804 = 0x54;
    core_main_c_FUN_004c8440("Please copy Nocturne to your hard drive");
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860(&local_204,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_204,"Graphics");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"gamePIXX",&DAT_005b9354->game_pixx);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"gamePIXY",&DAT_005b9354->game_pixy);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"gameBPP",&DAT_005b9354->game_bpp);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_204,"useDirect3D",&INT_02dc9d60);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"useAGPFlag",(int *)&DAT_02dc9d6c);
  engine_ini_cpp_CIniFile_getString_FUN_004bd910
            (&local_204,"rendererDLLPath",&DAT_005c0e80,0xfa);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_204,"gamma",&DAT_005b9354->gamma);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"heroNumber",(int *)&DAT_005b9354->hero_number);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"haloMode",&DAT_005b9354->halo_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"firstTimeFlag",(int *)&DAT_01cae37c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"subtitleMode",&DAT_005b9354->subtitle_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"bloodFlag",&DAT_005b9354->blood_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"nudityFlag",&DAT_005b9354->nudity_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"foulLanguageFlag",&DAT_005b9354->foul_language_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"shadowFlag",&DAT_005b9354->shadow_flag);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"quimbyFlag",&DAT_005b9354->quimby_flag);
  pCVar1 = 0x01C775EC;
  if (0x01C775EC->quimby_flag != 0) {
    0x01C775EC->nudity_flag = 0;
    pCVar1->foul_language_flag = 0;
    pCVar1->blood_flag = 0;
  }
  _DAT_01cc64a4 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"currentBoard",(int *)&DAT_01cc64a4);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_204,"Sound");
  sound_sndmain_cpp_FUN_005289f0(&local_204);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_204,"Control");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"gameControl",(int *)&DAT_005b9354->game_control);
  core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(0x01C775EC);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWalk",&DAT_005b9354->key_walk);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyBackup",&DAT_005b9354->key_backup);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyRun",&DAT_005b9354->key_run);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyStrafe",&DAT_005b9354->key_strafe);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyStrafeLeft",&DAT_005b9354->key_strafe_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyStrafeRight",&DAT_005b9354->key_strafe_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyRight",&DAT_005b9354->key_right);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyLeft",&DAT_005b9354->key_left);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyFire",&DAT_005b9354->key_fire);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyUseItem",&DAT_005b9354->key_use_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyLight",&DAT_005b9354->key_light);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyInfrared",&DAT_005b9354->key_infrared);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyDraw",&DAT_005b9354->key_draw);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyJump",&DAT_005b9354->key_jump);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyPointUp",&DAT_005b9354->key_point_up);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyPointDown",&DAT_005b9354->key_point_down);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWeapon1",&DAT_005b9354->key_weapon_1);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWeapon2",&DAT_005b9354->key_weapon_2);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWeapon3",&DAT_005b9354->key_weapon_3);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWeapon4",&DAT_005b9354->key_weapon_4);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyWeapon5",&DAT_005b9354->key_weapon_5);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyNextWeapon",&DAT_005b9354->key_next_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyPrevWeapon",&DAT_005b9354->key_prev_weapon);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyNextItem",&DAT_005b9354->key_next_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyPrevItem",&DAT_005b9354->key_prev_item);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyItemDesc",&DAT_005b9354->key_item_desc);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"keyNextAmmo",&DAT_005b9354->key_next_ammo);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"invertMouseYAxis",&DAT_005b9354->invert_mouse_y_axis);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"alwaysRun",&DAT_005b9354->always_run);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"xMouseSensitivity",&DAT_005b9354->x_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"yMouseSensitivity",&DAT_005b9354->y_mouse_sensitivity);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"xCenter",&DAT_005b9354->x_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"yCenter",&DAT_005b9354->y_center);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"xStickMin",&DAT_005b9354->x_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"xStickMax",&DAT_005b9354->x_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"yStickMin",&DAT_005b9354->y_stick_min);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"yStickMax",&DAT_005b9354->y_stick_max);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"aimMode",(int *)&DAT_005b9354->aim_mode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"autoUseHealth",&DAT_005b9354->auto_use_health);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(&local_204,"Debug");
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"logConsoleFlag",(int *)PTR_DAT_005ad350);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20
            (&local_204,"headOfHorrorCheat",&DAT_005b9354->head_of_horror_cheat);
  return;
}
