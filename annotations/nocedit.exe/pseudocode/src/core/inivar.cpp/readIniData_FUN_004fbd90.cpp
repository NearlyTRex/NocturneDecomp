// Name: core_inivar.cpp_readIniData_FUN_004fbd90
// Address: 004fbd90
// Address Range: [[004fbd90, 004fc50c]]
// Convention: __cdecl
// Signature: void core_inivar.cpp_readIniData_FUN_004fbd90(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b41 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538224 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 00537691 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_inivar_cpp_0062fd91
//   TerminatedCString s_Please_copy_Nocturne_to__0062fda4
//   TerminatedCString s_gamePIXY_0062fdd5
//   TerminatedCString s_gameBPP_0062fdde
//   TerminatedCString s_useDirect3D_0062fde6
//   TerminatedCString s_useAGPFlag_0062fdf2
//   TerminatedCString s_rendererDLLPath_0062fdfd
//   TerminatedCString s_gamma_0062fe0d
//   TerminatedCString s_heroNumber_0062fe13
//   TerminatedCString s_haloMode_0062fe1e
//   TerminatedCString s_firstTimeFlag_0062fe27
//   TerminatedCString s_subtitleMode_0062fe35
//   TerminatedCString s_bloodFlag_0062fe42
//   TerminatedCString s_nudityFlag_0062fe4c
//   TerminatedCString s_foulLanguageFlag_0062fe57
//   TerminatedCString s_shadowFlag_0062fe68
//   TerminatedCString s_quimbyFlag_0062fe73
//   TerminatedCString s_currentBoard_0062fe7e
//   TerminatedCString s_gameControl_0062fe8b
//   TerminatedCString s_keyWalk_0062fe97
//   TerminatedCString s_keyBackup_0062fe9f
//   TerminatedCString s_keyRun_0062fea9
//   TerminatedCString s_keyStrafe_0062feb0
//   TerminatedCString s_keyStrafeLeft_0062feba
//   TerminatedCString s_keyStrafeRight_0062fec8
//   TerminatedCString s_keyRight_0062fed7
//   TerminatedCString s_keyLeft_0062fee0
//   TerminatedCString s_keyFire_0062fee8
//   TerminatedCString s_keyUseItem_0062fef0
//   TerminatedCString s_keyLight_0062fefb
//   TerminatedCString s_keyInfrared_0062ff04
//   TerminatedCString s_keyDraw_0062ff10
//   TerminatedCString s_keyJump_0062ff18
//   TerminatedCString s_keyPointUp_0062ff20
//   TerminatedCString s_keyPointDown_0062ff2b
//   TerminatedCString s_keyWeapon1_0062ff38
//   TerminatedCString s_keyWeapon2_0062ff43
//   TerminatedCString s_keyWeapon3_0062ff4e
//   TerminatedCString s_keyWeapon4_0062ff59
//   TerminatedCString s_keyWeapon5_0062ff64
//   TerminatedCString s_keyNextWeapon_0062ff6f
//   TerminatedCString s_keyPrevWeapon_0062ff7d
//   TerminatedCString s_keyNextItem_0062ff8b
//   TerminatedCString s_keyPrevItem_0062ff97
//   TerminatedCString s_keyItemDesc_0062ffa3
//   TerminatedCString s_keyNextAmmo_0062ffaf
//   TerminatedCString s_invertMouseYAxis_0062ffbb
//   TerminatedCString s_alwaysRun_0062ffcc
//   TerminatedCString s_xMouseSensitivity_0062ffd6
//   TerminatedCString s_yMouseSensitivity_0062ffe8
//   TerminatedCString s_xCenter_0062fffa
//   TerminatedCString s_yCenter_00630002
//   TerminatedCString s_xStickMin_0063000a
//   TerminatedCString s_xStickMax_00630014
//   TerminatedCString s_yStickMin_0063001e
//   TerminatedCString s_yStickMax_00630028
//   TerminatedCString s_aimMode_00630032
//   TerminatedCString s_autoUseHealth_0063003a
//   TerminatedCString s_logConsoleFlag_00630048
//   TerminatedCString s_headOfHorrorCheat_00630057
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   TerminatedCString s_system_nocturne_ini_0067cce0
//   TerminatedCString s_Sound_0067cd00
//   TerminatedCString s_Graphics_0067cd08
//   TerminatedCString s_Control_0067cd18
//   TerminatedCString s_Debug_0067cd50
//   TerminatedCString s_Editor_0067cd58
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   TerminatedCString s_trid3d_dll_00684010
//   CConsole g_ConsolePtr
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_pixy
//   undefined4 DAT_02d81aa4
//   undefined4 DAT_02d81aa8
//   undefined4 DAT_02d81aac
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.nudity_flag
//   undefined4 DAT_02d81ab8
//   undefined4 DAT_02d81abc
//   undefined4 DAT_02d81ac0
//   undefined4 g_CGameInstance.key_walk
//   undefined4 g_CGameInstance.key_backup
//   undefined4 g_CGameInstance.key_run
//   undefined4 g_CGameInstance.key_strafe
//   undefined4 g_CGameInstance.key_strafe_left
//   undefined4 g_CGameInstance.key_strafe_right
//   undefined4 g_CGameInstance.key_right
//   undefined4 g_CGameInstance.key_left
//   undefined4 g_CGameInstance.key_fire
//   undefined4 g_CGameInstance.key_use_item
//   undefined4 g_CGameInstance.key_light
//   undefined4 g_CGameInstance.key_infrared
//   undefined4 g_CGameInstance.key_draw
//   undefined4 g_CGameInstance.key_jump
//   undefined4 g_CGameInstance.key_point_up
//   undefined4 g_CGameInstance.key_point_down
//   undefined4 g_CGameInstance.key_weapon_1
//   undefined4 g_CGameInstance.key_weapon_2
//   undefined4 g_CGameInstance.key_weapon_3
//   undefined4 g_CGameInstance.key_weapon_4
//   undefined4 g_CGameInstance.key_weapon_5
//   undefined4 g_CGameInstance.key_next_weapon
//   undefined4 g_CGameInstance.key_prev_weapon
//   undefined4 g_CGameInstance.key_next_item
//   undefined4 g_CGameInstance.key_prev_item
//   undefined4 g_CGameInstance.key_item_desc
//   undefined4 g_CGameInstance.key_next_ammo
//   undefined4 DAT_02d81b30
//   undefined4 g_CGameInstance.always_run
//   undefined4 DAT_02d81b38
//   undefined4 DAT_02d81b3c
//   undefined4 g_CGameInstance.x_center
//   undefined4 DAT_02d81b44
//   undefined4 DAT_02d81b48
//   undefined4 DAT_02d81b4c
//   undefined4 DAT_02d81b50
//   undefined4 DAT_02d81b54
//   undefined4 g_CGameInstance.game_control
//   undefined4 g_CGameInstance.hero_number
//   undefined4 DAT_02d81b60
//   undefined4 DAT_02d81b64
//   undefined4 DAT_02d81cb0
//   undefined4 DAT_02d81cc0
//   int g_SkipIntroVideo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_GraphicsCardHandle
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   int g_FullscreenMode
//   int g_PodSystemVersion
// Function calls:
//   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_msnedit.cpp_readIni_FUN_00537530
//   core_setedit.cpp_CDemonSet_readIni_FUN_00584900
//   crt_file.c_setReadonlyAttribute_FUN_00600c30
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   sound_sndmain.cpp_readIni_FUN_005abf20

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
            ((CIniFile *)&stack0xfffffe20,"rendererDLLPath","trid3d.dll",0xfa,
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
             &g_CConsolePtr->fileLoggingEnabled);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xffffff08,"headOfHorrorCheat",
             &g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xffffff0c,"Editor")
  ;
  core_msnedit_cpp_readIni_FUN_00537530(g_CDemonMissionPtr,(CIniFile *)&stack0xffffff10);
  core_setedit_cpp_CDemonSet_readIni_FUN_00584900(g_CDemonSetPtr,(CIniFile *)&stack0xffffff14);
  return;
}


// Assembly code:
// 004fbd90: PUSH EBP
//   Label: core_inivar.cpp_readIniData_FUN_004fbd90
// 004fbd91: SUB ESP,0x200
// 004fbd97: PUSH EDI
// 004fbd98: PUSH ESI
// 004fbd99: PUSH 0x180
// 004fbd9e: PUSH 0x67cce0
//   XREF to: 0067cce0 (DATA)
// 004fbda3: CALL crt_file.c_setReadonlyAttribute_FUN_00600c30
//   XREF to: 00600c30 (UNCONDITIONAL_CALL)
// 004fbda8: ADD ESP,0x8
// 004fbdab: TEST EAX,EAX
// 004fbdad: JNZ 0x004fc4e5
//   XREF to: 004fc4e5 (CONDITIONAL_JUMP)
// 004fbdb3: PUSH EBX
//   Label: LAB_004fbdb3
// 004fbdb4: PUSH 0x0
// 004fbdb6: PUSH 0x67cce0
//   XREF to: 0067cce0 (DATA)
// 004fbdbb: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbdbf: PUSH EAX
// 004fbdc0: CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   XREF to: 004fba70 (UNCONDITIONAL_CALL)
// 004fbdc5: ADD ESP,0xc
// 004fbdc8: PUSH 0x67cd08
//   XREF to: 0067cd08 (DATA)
// 004fbdcd: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbdd1: PUSH EAX
// 004fbdd2: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fbdd7: ADD ESP,0x8
// 004fbdda: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fbde0: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 004fbde1: PUSH 0x62fdcc
//   XREF to: 0062fdcc (DATA)
// 004fbde6: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbdea: PUSH EAX
// 004fbdeb: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbdf0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbdf5: ADD ESP,0xc
// 004fbdf8: ADD EAX,0x4
// 004fbdfb: PUSH EAX
//   XREF to: 02d81aa0 (DATA)
// 004fbdfc: PUSH 0x62fdd5
//   XREF to: 0062fdd5 (DATA)
// 004fbe01: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe05: PUSH EAX
// 004fbe06: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbe0b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbe10: ADD ESP,0xc
// 004fbe13: ADD EAX,0x8
// 004fbe16: PUSH EAX
//   XREF to: 02d81aa4 (DATA)
// 004fbe17: PUSH 0x62fdde
//   XREF to: 0062fdde (DATA)
// 004fbe1c: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe20: PUSH EAX
// 004fbe21: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbe26: ADD ESP,0xc
// 004fbe29: PUSH 0x3f6b878
//   XREF to: 03f6b878 (DATA)
// 004fbe2e: PUSH 0x62fde6
//   XREF to: 0062fde6 (DATA)
// 004fbe33: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe37: PUSH EAX
// 004fbe38: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbe3d: ADD ESP,0xc
// 004fbe40: PUSH 0x3f6b884
//   XREF to: 03f6b884 (DATA)
// 004fbe45: PUSH 0x62fdf2
//   XREF to: 0062fdf2 (DATA)
// 004fbe4a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe4e: PUSH EAX
// 004fbe4f: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbe54: ADD ESP,0xc
// 004fbe57: PUSH 0xfa
// 004fbe5c: PUSH 0x684010
//   XREF to: 00684010 (DATA)
// 004fbe61: PUSH 0x62fdfd
//   XREF to: 0062fdfd (DATA)
// 004fbe66: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe6a: PUSH EAX
// 004fbe6b: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 004fbe70: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbe75: ADD ESP,0x10
// 004fbe78: ADD EAX,0x224
// 004fbe7d: PUSH EAX
//   XREF to: 02d81cc0 (DATA)
// 004fbe7e: PUSH 0x62fe0d
//   XREF to: 0062fe0d (DATA)
// 004fbe83: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbe87: PUSH EAX
// 004fbe88: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbe8d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbe92: ADD ESP,0xc
// 004fbe95: ADD EAX,0xc0
// 004fbe9a: PUSH EAX
//   XREF to: 02d81b5c (DATA)
// 004fbe9b: PUSH 0x62fe13
//   XREF to: 0062fe13 (DATA)
// 004fbea0: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x204] (DATA)
// 004fbea4: PUSH EAX
// 004fbea5: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbeaa: ADD ESP,0xc
// 004fbead: POP EBX
// 004fbeae: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbeb3: ADD EAX,0xc
// 004fbeb6: PUSH EAX
//   XREF to: 02d81aa8 (DATA)
// 004fbeb7: PUSH 0x62fe1e
//   XREF to: 0062fe1e (DATA)
// 004fbebc: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbec0: PUSH EAX
// 004fbec1: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbec6: ADD ESP,0xc
// 004fbec9: PUSH 0x2db8a64
//   XREF to: 02db8a64 (DATA)
// 004fbece: PUSH 0x62fe27
//   XREF to: 0062fe27 (DATA)
// 004fbed3: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbed7: PUSH EAX
// 004fbed8: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbedd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbee2: ADD ESP,0xc
// 004fbee5: ADD EAX,0x10
// 004fbee8: PUSH EAX
//   XREF to: 02d81aac (DATA)
// 004fbee9: PUSH 0x62fe35
//   XREF to: 0062fe35 (DATA)
// 004fbeee: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbef2: PUSH EAX
// 004fbef3: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbef8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbefd: ADD ESP,0xc
// 004fbf00: ADD EAX,0x14
// 004fbf03: PUSH EAX
//   XREF to: 02d81ab0 (DATA)
// 004fbf04: PUSH 0x62fe42
//   XREF to: 0062fe42 (DATA)
// 004fbf09: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbf0d: PUSH EAX
// 004fbf0e: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbf13: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbf18: ADD ESP,0xc
// 004fbf1b: ADD EAX,0x18
// 004fbf1e: PUSH EAX
//   XREF to: 02d81ab4 (DATA)
// 004fbf1f: PUSH 0x62fe4c
//   XREF to: 0062fe4c (DATA)
// 004fbf24: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbf28: PUSH EAX
// 004fbf29: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbf2e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbf33: ADD ESP,0xc
// 004fbf36: ADD EAX,0x1c
// 004fbf39: PUSH EAX
//   XREF to: 02d81ab8 (DATA)
// 004fbf3a: PUSH 0x62fe57
//   XREF to: 0062fe57 (DATA)
// 004fbf3f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbf43: PUSH EAX
// 004fbf44: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbf49: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbf4e: ADD ESP,0xc
// 004fbf51: ADD EAX,0x24
// 004fbf54: PUSH EAX
//   XREF to: 02d81ac0 (DATA)
// 004fbf55: PUSH 0x62fe68
//   XREF to: 0062fe68 (DATA)
// 004fbf5a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbf5e: PUSH EAX
// 004fbf5f: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbf64: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbf69: ADD ESP,0xc
// 004fbf6c: ADD EAX,0x20
// 004fbf6f: PUSH EAX
//   XREF to: 02d81abc (DATA)
// 004fbf70: PUSH 0x62fe73
//   XREF to: 0062fe73 (DATA)
// 004fbf75: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbf79: PUSH EAX
// 004fbf7a: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbf7f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbf84: MOV ESI,dword ptr [EAX + 0x20]
//   XREF to: 02d81abc (READ)
// 004fbf87: ADD ESP,0xc
// 004fbf8a: TEST ESI,ESI
// 004fbf8c: JZ 0x004fbfa3
//   XREF to: 004fbfa3 (CONDITIONAL_JUMP)
// 004fbf8e: MOV dword ptr [EAX + 0x18],0x0
//   XREF to: 02d81ab4 (WRITE)
// 004fbf95: MOV dword ptr [EAX + 0x1c],0x0
//   XREF to: 02d81ab8 (WRITE)
// 004fbf9c: MOV dword ptr [EAX + 0x14],0x0
//   XREF to: 02d81ab0 (WRITE)
// 004fbfa3: PUSH 0x2f275f4
//   Label: LAB_004fbfa3
//   XREF to: 02f275f4 (DATA)
// 004fbfa8: PUSH 0x62fe7e
//   XREF to: 0062fe7e (DATA)
// 004fbfad: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fbfb1: XOR EDI,EDI
// 004fbfb3: PUSH EAX
// 004fbfb4: MOV dword ptr [0x02f275f4],EDI
//   XREF to: 02f275f4 (WRITE)
// 004fbfba: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fbfbf: ADD ESP,0xc
// 004fbfc2: PUSH 0x67cd00
//   XREF to: 0067cd00 (DATA)
// 004fbfc7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x204] (DATA)
// 004fbfcb: PUSH EAX
// 004fbfcc: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fbfd1: ADD ESP,0x8
// 004fbfd4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fbfd8: PUSH EAX
// 004fbfd9: CALL sound_sndmain.cpp_readIni_FUN_005abf20
//   XREF to: 005abf20 (UNCONDITIONAL_CALL)
// 004fbfde: ADD ESP,0x4
// 004fbfe1: PUSH 0x67cd18
//   XREF to: 0067cd18 (DATA)
// 004fbfe6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x204] (DATA)
// 004fbfea: PUSH EAX
// 004fbfeb: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fbff0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fbff5: ADD ESP,0x8
// 004fbff8: ADD EAX,0xbc
// 004fbffd: PUSH EAX
//   XREF to: 02d81b58 (DATA)
// 004fbffe: PUSH 0x62fe8b
//   XREF to: 0062fe8b (DATA)
// 004fc003: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc007: PUSH EAX
// 004fc008: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc00d: ADD ESP,0xc
// 004fc010: MOV EBP,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc016: PUSH EBP
//   XREF to: 02d81a9c (DATA)
// 004fc017: CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)
// 004fc01c: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc021: ADD ESP,0x4
// 004fc024: ADD EAX,0x28
// 004fc027: PUSH EAX
//   XREF to: 02d81ac4 (DATA)
// 004fc028: PUSH 0x62fe97
//   XREF to: 0062fe97 (DATA)
// 004fc02d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc031: PUSH EAX
// 004fc032: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc037: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc03c: ADD ESP,0xc
// 004fc03f: ADD EAX,0x2c
// 004fc042: PUSH EAX
//   XREF to: 02d81ac8 (DATA)
// 004fc043: PUSH 0x62fe9f
//   XREF to: 0062fe9f (DATA)
// 004fc048: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc04c: PUSH EAX
// 004fc04d: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc052: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc057: ADD ESP,0xc
// 004fc05a: ADD EAX,0x30
// 004fc05d: PUSH EAX
//   XREF to: 02d81acc (DATA)
// 004fc05e: PUSH 0x62fea9
//   XREF to: 0062fea9 (DATA)
// 004fc063: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc067: PUSH EAX
// 004fc068: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc06d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc072: ADD ESP,0xc
// 004fc075: ADD EAX,0x34
// 004fc078: PUSH EAX
//   XREF to: 02d81ad0 (DATA)
// 004fc079: PUSH 0x62feb0
//   XREF to: 0062feb0 (DATA)
// 004fc07e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc082: PUSH EAX
// 004fc083: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc088: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc08d: ADD ESP,0xc
// 004fc090: ADD EAX,0x38
// 004fc093: PUSH EAX
//   XREF to: 02d81ad4 (DATA)
// 004fc094: PUSH 0x62feba
//   XREF to: 0062feba (DATA)
// 004fc099: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x204] (DATA)
// 004fc09d: PUSH EAX
// 004fc09e: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc0a3: ADD ESP,0xc
// 004fc0a6: POP ESI
// 004fc0a7: POP EDI
// 004fc0a8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc0ad: ADD EAX,0x3c
// 004fc0b0: PUSH EAX
//   XREF to: 02d81ad8 (DATA)
// 004fc0b1: PUSH 0x62fec8
//   XREF to: 0062fec8 (DATA)
// 004fc0b6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc0ba: PUSH EAX
// 004fc0bb: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc0c0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc0c5: ADD ESP,0xc
// 004fc0c8: ADD EAX,0x40
// 004fc0cb: PUSH EAX
//   XREF to: 02d81adc (DATA)
// 004fc0cc: PUSH 0x62fed7
//   XREF to: 0062fed7 (DATA)
// 004fc0d1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc0d5: PUSH EAX
// 004fc0d6: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc0db: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc0e0: ADD ESP,0xc
// 004fc0e3: ADD EAX,0x44
// 004fc0e6: PUSH EAX
//   XREF to: 02d81ae0 (DATA)
// 004fc0e7: PUSH 0x62fee0
//   XREF to: 0062fee0 (DATA)
// 004fc0ec: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc0f0: PUSH EAX
// 004fc0f1: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc0f6: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc0fb: ADD ESP,0xc
// 004fc0fe: ADD EAX,0x48
// 004fc101: PUSH EAX
//   XREF to: 02d81ae4 (DATA)
// 004fc102: PUSH 0x62fee8
//   XREF to: 0062fee8 (DATA)
// 004fc107: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc10b: PUSH EAX
// 004fc10c: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc111: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc116: ADD ESP,0xc
// 004fc119: ADD EAX,0x4c
// 004fc11c: PUSH EAX
//   XREF to: 02d81ae8 (DATA)
// 004fc11d: PUSH 0x62fef0
//   XREF to: 0062fef0 (DATA)
// 004fc122: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc126: PUSH EAX
// 004fc127: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc12c: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc131: ADD ESP,0xc
// 004fc134: ADD EAX,0x50
// 004fc137: PUSH EAX
//   XREF to: 02d81aec (DATA)
// 004fc138: PUSH 0x62fefb
//   XREF to: 0062fefb (DATA)
// 004fc13d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc141: PUSH EAX
// 004fc142: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc147: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc14c: ADD ESP,0xc
// 004fc14f: ADD EAX,0x54
// 004fc152: PUSH EAX
//   XREF to: 02d81af0 (DATA)
// 004fc153: PUSH 0x62ff04
//   XREF to: 0062ff04 (DATA)
// 004fc158: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc15c: PUSH EAX
// 004fc15d: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc162: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc167: ADD ESP,0xc
// 004fc16a: ADD EAX,0x58
// 004fc16d: PUSH EAX
//   XREF to: 02d81af4 (DATA)
// 004fc16e: PUSH 0x62ff10
//   XREF to: 0062ff10 (DATA)
// 004fc173: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc177: PUSH EAX
// 004fc178: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc17d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc182: ADD ESP,0xc
// 004fc185: ADD EAX,0x5c
// 004fc188: PUSH EAX
//   XREF to: 02d81af8 (DATA)
// 004fc189: PUSH 0x62ff18
//   XREF to: 0062ff18 (DATA)
// 004fc18e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc192: PUSH EAX
// 004fc193: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc198: ADD ESP,0xc
// 004fc19b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc1a0: ADD EAX,0x60
// 004fc1a3: PUSH EAX
//   XREF to: 02d81afc (DATA)
// 004fc1a4: PUSH 0x62ff20
//   XREF to: 0062ff20 (DATA)
// 004fc1a9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc1ad: PUSH EAX
// 004fc1ae: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc1b3: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc1b8: ADD ESP,0xc
// 004fc1bb: ADD EAX,0x64
// 004fc1be: PUSH EAX
//   XREF to: 02d81b00 (DATA)
// 004fc1bf: PUSH 0x62ff2b
//   XREF to: 0062ff2b (DATA)
// 004fc1c4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc1c8: PUSH EAX
// 004fc1c9: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc1ce: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc1d3: ADD ESP,0xc
// 004fc1d6: ADD EAX,0x68
// 004fc1d9: PUSH EAX
//   XREF to: 02d81b04 (DATA)
// 004fc1da: PUSH 0x62ff38
//   XREF to: 0062ff38 (DATA)
// 004fc1df: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc1e3: PUSH EAX
// 004fc1e4: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc1e9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc1ee: ADD ESP,0xc
// 004fc1f1: ADD EAX,0x6c
// 004fc1f4: PUSH EAX
//   XREF to: 02d81b08 (DATA)
// 004fc1f5: PUSH 0x62ff43
//   XREF to: 0062ff43 (DATA)
// 004fc1fa: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc1fe: PUSH EAX
// 004fc1ff: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc204: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc209: ADD ESP,0xc
// 004fc20c: ADD EAX,0x70
// 004fc20f: PUSH EAX
//   XREF to: 02d81b0c (DATA)
// 004fc210: PUSH 0x62ff4e
//   XREF to: 0062ff4e (DATA)
// 004fc215: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc219: PUSH EAX
// 004fc21a: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc21f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc224: ADD ESP,0xc
// 004fc227: ADD EAX,0x74
// 004fc22a: PUSH EAX
//   XREF to: 02d81b10 (DATA)
// 004fc22b: PUSH 0x62ff59
//   XREF to: 0062ff59 (DATA)
// 004fc230: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc234: PUSH EAX
// 004fc235: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc23a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc23f: ADD ESP,0xc
// 004fc242: ADD EAX,0x78
// 004fc245: PUSH EAX
//   XREF to: 02d81b14 (DATA)
// 004fc246: PUSH 0x62ff64
//   XREF to: 0062ff64 (DATA)
// 004fc24b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc24f: PUSH EAX
// 004fc250: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc255: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc25a: ADD ESP,0xc
// 004fc25d: ADD EAX,0x7c
// 004fc260: PUSH EAX
//   XREF to: 02d81b18 (DATA)
// 004fc261: PUSH 0x62ff6f
//   XREF to: 0062ff6f (DATA)
// 004fc266: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc26a: PUSH EAX
// 004fc26b: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc270: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc275: ADD ESP,0xc
// 004fc278: ADD EAX,0x80
// 004fc27d: PUSH EAX
//   XREF to: 02d81b1c (DATA)
// 004fc27e: PUSH 0x62ff7d
//   XREF to: 0062ff7d (DATA)
// 004fc283: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc287: PUSH EAX
// 004fc288: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc28d: ADD ESP,0xc
// 004fc290: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc295: ADD EAX,0x84
// 004fc29a: PUSH EAX
//   XREF to: 02d81b20 (DATA)
// 004fc29b: PUSH 0x62ff8b
//   XREF to: 0062ff8b (DATA)
// 004fc2a0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc2a4: PUSH EAX
// 004fc2a5: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc2aa: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc2af: ADD ESP,0xc
// 004fc2b2: ADD EAX,0x88
// 004fc2b7: PUSH EAX
//   XREF to: 02d81b24 (DATA)
// 004fc2b8: PUSH 0x62ff97
//   XREF to: 0062ff97 (DATA)
// 004fc2bd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc2c1: PUSH EAX
// 004fc2c2: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc2c7: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc2cc: ADD ESP,0xc
// 004fc2cf: ADD EAX,0x8c
// 004fc2d4: PUSH EAX
//   XREF to: 02d81b28 (DATA)
// 004fc2d5: PUSH 0x62ffa3
//   XREF to: 0062ffa3 (DATA)
// 004fc2da: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc2de: PUSH EAX
// 004fc2df: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc2e4: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc2e9: ADD ESP,0xc
// 004fc2ec: ADD EAX,0x90
// 004fc2f1: PUSH EAX
//   XREF to: 02d81b2c (DATA)
// 004fc2f2: PUSH 0x62ffaf
//   XREF to: 0062ffaf (DATA)
// 004fc2f7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc2fb: PUSH EAX
// 004fc2fc: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc301: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc306: ADD ESP,0xc
// 004fc309: ADD EAX,0x94
// 004fc30e: PUSH EAX
//   XREF to: 02d81b30 (DATA)
// 004fc30f: PUSH 0x62ffbb
//   XREF to: 0062ffbb (DATA)
// 004fc314: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc318: PUSH EAX
// 004fc319: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc31e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc323: ADD ESP,0xc
// 004fc326: ADD EAX,0x98
// 004fc32b: PUSH EAX
//   XREF to: 02d81b34 (DATA)
// 004fc32c: PUSH 0x62ffcc
//   XREF to: 0062ffcc (DATA)
// 004fc331: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc335: PUSH EAX
// 004fc336: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc33b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc340: ADD ESP,0xc
// 004fc343: ADD EAX,0x9c
// 004fc348: PUSH EAX
//   XREF to: 02d81b38 (DATA)
// 004fc349: PUSH 0x62ffd6
//   XREF to: 0062ffd6 (DATA)
// 004fc34e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc352: PUSH EAX
// 004fc353: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc358: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc35d: ADD ESP,0xc
// 004fc360: ADD EAX,0xa0
// 004fc365: PUSH EAX
//   XREF to: 02d81b3c (DATA)
// 004fc366: PUSH 0x62ffe8
//   XREF to: 0062ffe8 (DATA)
// 004fc36b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc36f: PUSH EAX
// 004fc370: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc375: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc37a: ADD ESP,0xc
// 004fc37d: ADD EAX,0xa4
// 004fc382: PUSH EAX
//   XREF to: 02d81b40 (DATA)
// 004fc383: PUSH 0x62fffa
//   XREF to: 0062fffa (DATA)
// 004fc388: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc38c: PUSH EAX
// 004fc38d: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc392: ADD ESP,0xc
// 004fc395: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc39a: ADD EAX,0xa8
// 004fc39f: PUSH EAX
//   XREF to: 02d81b44 (DATA)
// 004fc3a0: PUSH 0x630002
//   XREF to: 00630002 (DATA)
// 004fc3a5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc3a9: PUSH EAX
// 004fc3aa: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc3af: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc3b4: ADD ESP,0xc
// 004fc3b7: ADD EAX,0xac
// 004fc3bc: PUSH EAX
//   XREF to: 02d81b48 (DATA)
// 004fc3bd: PUSH 0x63000a
//   XREF to: 0063000a (DATA)
// 004fc3c2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc3c6: PUSH EAX
// 004fc3c7: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc3cc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc3d1: ADD ESP,0xc
// 004fc3d4: ADD EAX,0xb0
// 004fc3d9: PUSH EAX
//   XREF to: 02d81b4c (DATA)
// 004fc3da: PUSH 0x630014
//   XREF to: 00630014 (DATA)
// 004fc3df: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc3e3: PUSH EAX
// 004fc3e4: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc3e9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc3ee: ADD ESP,0xc
// 004fc3f1: ADD EAX,0xb4
// 004fc3f6: PUSH EAX
//   XREF to: 02d81b50 (DATA)
// 004fc3f7: PUSH 0x63001e
//   XREF to: 0063001e (DATA)
// 004fc3fc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc400: PUSH EAX
// 004fc401: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc406: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc40b: ADD ESP,0xc
// 004fc40e: ADD EAX,0xb8
// 004fc413: PUSH EAX
//   XREF to: 02d81b54 (DATA)
// 004fc414: PUSH 0x630028
//   XREF to: 00630028 (DATA)
// 004fc419: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc41d: PUSH EAX
// 004fc41e: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc423: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc428: ADD ESP,0xc
// 004fc42b: ADD EAX,0xc4
// 004fc430: PUSH EAX
//   XREF to: 02d81b60 (DATA)
// 004fc431: PUSH 0x630032
//   XREF to: 00630032 (DATA)
// 004fc436: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc43a: PUSH EAX
// 004fc43b: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc440: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc445: ADD ESP,0xc
// 004fc448: ADD EAX,0xc8
// 004fc44d: PUSH EAX
//   XREF to: 02d81b64 (DATA)
// 004fc44e: PUSH 0x63003a
//   XREF to: 0063003a (DATA)
// 004fc453: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc457: PUSH EAX
// 004fc458: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc45d: ADD ESP,0xc
// 004fc460: PUSH 0x67cd50
//   XREF to: 0067cd50 (DATA)
// 004fc465: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x204] (DATA)
// 004fc469: PUSH EAX
// 004fc46a: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fc46f: ADD ESP,0x8
// 004fc472: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004fc477: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004fc478: PUSH 0x630048
//   XREF to: 00630048 (DATA)
// 004fc47d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc481: PUSH EAX
// 004fc482: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc487: ADD ESP,0xc
// 004fc48a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc48f: ADD EAX,0x214
// 004fc494: PUSH EAX
//   XREF to: 02d81cb0 (DATA)
// 004fc495: PUSH 0x630057
//   XREF to: 00630057 (DATA)
// 004fc49a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004fc49e: PUSH EAX
// 004fc49f: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004fc4a4: ADD ESP,0xc
// 004fc4a7: PUSH 0x67cd58
//   XREF to: 0067cd58 (DATA)
// 004fc4ac: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x204] (DATA)
// 004fc4b0: PUSH EAX
// 004fc4b1: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fc4b6: ADD ESP,0x8
// 004fc4b9: MOV EAX,ESP
// 004fc4bb: PUSH EAX
// 004fc4bc: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fc4c2: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 004fc4c3: CALL core_msnedit.cpp_readIni_FUN_00537530
//   XREF to: 00537530 (UNCONDITIONAL_CALL)
// 004fc4c8: ADD ESP,0x8
// 004fc4cb: MOV EAX,ESP
// 004fc4cd: PUSH EAX
// 004fc4ce: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004fc4d4: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004fc4d5: CALL core_setedit.cpp_CDemonSet_readIni_FUN_00584900
//   XREF to: 00584900 (UNCONDITIONAL_CALL)
// 004fc4da: ADD ESP,0x8
// 004fc4dd: ADD ESP,0x200
// 004fc4e3: POP EBP
// 004fc4e4: RET
// 004fc4e5: MOV EDX,0x62fd91
//   Label: LAB_004fc4e5
//   XREF to: 0062fd91 (PARAM)
// 004fc4ea: MOV ECX,0x57
// 004fc4ef: PUSH 0x62fda4
//   XREF to: 0062fda4 (DATA)
// 004fc4f4: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004fc4fa: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004fc500: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fc505: ADD ESP,0x4
// 004fc508: JMP 0x004fbdb3
//   XREF to: 004fbdb3 (UNCONDITIONAL_JUMP)
