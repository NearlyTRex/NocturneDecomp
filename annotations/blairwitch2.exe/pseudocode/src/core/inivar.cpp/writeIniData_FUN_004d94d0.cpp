// Name: core_inivar.cpp_writeIniData_FUN_004d94d0
// Address: 004d94d0
// Address Range: [[004d94d0, 004d9bf6]]
// Convention: __cdecl
// Signature: void __cdecl core_inivar_cpp_writeIniData_FUN_004d94d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inivar_cpp_writeIniData_FUN_004d94d0(void)

{
  CIniFile local_214;
  
  engine_ini_cpp_FUN_004d8910(&local_214,".\\system\\nocturne.ini",(char *)0x0);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Graphics");
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamePIXX",g_CGamePtr->game_pixx);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamePIXY",g_CGamePtr->game_pixy);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gameBPP",g_CGamePtr->game_bpp);
  engine_ini_cpp_FUN_004d8b80(&local_214,"useDirect3D",_DAT_0264bba0);
  engine_ini_cpp_FUN_004d8b80(&local_214,"useAGPFlag",_DAT_0264bbac);
  engine_ini_cpp_CIniFile_setString_FUN_004d8aa0
            (&local_214,"rendererDLLPath",&DAT_0061e180);
  engine_ini_cpp_FUN_004d8b80(&local_214,"gamma",g_CGamePtr->gamma);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"heroNumber",*(uint *)&g_CGamePtr->field_0xd4);
  engine_ini_cpp_FUN_004d8b80(&local_214,"haloMode",*(uint *)&g_CGamePtr->field_0xc);
  engine_ini_cpp_FUN_004d8b80(&local_214,"firstTimeFlag",_DAT_01cee1a8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"subtitleMode",*(uint *)&g_CGamePtr->field_0x10);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"bloodFlag",*(uint *)&g_CGamePtr->field_0x14);
  if (*(int *)&g_CGamePtr->field_0x20 == 0) {
    engine_ini_cpp_FUN_004d8b80
              (&local_214,"nudityFlag",*(uint *)&g_CGamePtr->field_0x18);
    engine_ini_cpp_FUN_004d8b80
              (&local_214,"foulLanguageFlag",*(uint *)&g_CGamePtr->field_0x1c);
    engine_ini_cpp_FUN_004d8b80(&local_214,"shadowFlag",g_CGamePtr->quimby_flag);
  }
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"quimbyFlag",*(uint *)&g_CGamePtr->field_0x20);
  engine_ini_cpp_FUN_004d8b80(&local_214,"particleDensity",DAT_0061ec60);
  engine_ini_cpp_FUN_004d8b80(&local_214,"currentBoard",_DAT_01d06a74);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"puzzleDifficultyMode",*(uint *)&g_CGamePtr->field_0xe4);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"combatDifficultyMode",*(uint *)&g_CGamePtr->field_0xe8);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Sound");
  sound_sndmain_cpp_writeIni_FUN_00553980(&local_214);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Control");
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"gameControl",*(uint *)&g_CGamePtr->field_0xd0);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyWalk",g_CGamePtr->shadow_flag);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyBackup",g_CGamePtr->key_walk);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyRun",*(uint *)&g_CGamePtr->field_0x30);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafe",*(uint *)&g_CGamePtr->field_0x34);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafeLeft",*(uint *)&g_CGamePtr->field_0x38);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyStrafeRight",*(uint *)&g_CGamePtr->field_0x3c);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyRight",*(uint *)&g_CGamePtr->field_0x40)
  ;
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyLeft",*(uint *)&g_CGamePtr->field_0x44);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyFire",*(uint *)&g_CGamePtr->field_0x48);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyUseItem",*(uint *)&g_CGamePtr->field_0x4c);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyLight",*(uint *)&g_CGamePtr->field_0x50)
  ;
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyDraw",*(uint *)&g_CGamePtr->field_0x68);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPointUp",*(uint *)&g_CGamePtr->field_0x74);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPointDown",*(uint *)&g_CGamePtr->field_0x78);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon1",*(uint *)&g_CGamePtr->field_0x7c);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon2",*(uint *)&g_CGamePtr->field_0x80);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyWeapon3",*(uint *)&g_CGamePtr->field_0x84);
  engine_ini_cpp_FUN_004d8b80(&local_214,"keyDrop",*(uint *)&g_CGamePtr->field_0xaf0)
  ;
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextWeapon",*(uint *)&g_CGamePtr->field_0x90);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPrevWeapon",*(uint *)&g_CGamePtr->field_0x94);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextItem",*(uint *)&g_CGamePtr->field_0x98);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyPrevItem",*(uint *)&g_CGamePtr->field_0x9c);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyItemDesc",*(uint *)&g_CGamePtr->field_0xa0);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"keyNextAmmo",*(uint *)&g_CGamePtr->field_0xa4);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"invertMouseYAxis",g_CGamePtr->invert_mouse_y_axis);
  engine_ini_cpp_FUN_004d8b80(&local_214,"alwaysRun",g_CGamePtr->always_run);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"xMouseSensitivity",g_CGamePtr->x_mouse_sensitivity);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"yMouseSensitivity",g_CGamePtr->y_mouse_sensitivity);
  engine_ini_cpp_FUN_004d8b80(&local_214,"xCenter",g_CGamePtr->x_center);
  engine_ini_cpp_FUN_004d8b80(&local_214,"yCenter",g_CGamePtr->y_center);
  engine_ini_cpp_FUN_004d8b80(&local_214,"xStickMin",g_CGamePtr->x_stick_min);
  engine_ini_cpp_FUN_004d8b80(&local_214,"xStickMax",g_CGamePtr->x_stick_max);
  engine_ini_cpp_FUN_004d8b80(&local_214,"yStickMin",g_CGamePtr->y_stick_min);
  engine_ini_cpp_FUN_004d8b80(&local_214,"yStickMax",g_CGamePtr->y_stick_max);
  engine_ini_cpp_FUN_004d8b80(&local_214,"aimMode",*(uint *)&g_CGamePtr->field_0xd8);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"autoUseHealth",*(uint *)&g_CGamePtr->field_0xdc);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Debug");
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"logConsoleFlag",g_CConsolePtr->file_logging_enabled);
  engine_ini_cpp_FUN_004d8b80
            (&local_214,"headOfHorrorCheat",g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(&local_214,"Editor");
  engine_ini_cpp_CIniFile_dtor_FUN_004d8940(&local_214,0);
  return;
}
