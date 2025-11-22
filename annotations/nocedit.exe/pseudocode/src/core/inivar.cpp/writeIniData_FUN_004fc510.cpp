// Name: core_inivar.cpp_writeIniData_FUN_004fc510
// Address: 004fc510
// Address Range: [[004fc510, 004fcc22]]
// Convention: __cdecl
// Signature: void core_inivar.cpp_writeIniData_FUN_004fc510(void)
// Cross-references:
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508821 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showOptionsScreen_FUN_00512d30 (00512d30) at 00512e85 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 005378b4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gamePIXX_00630069
//   TerminatedCString s_gamePIXY_00630072
//   TerminatedCString s_gameBPP_0063007b
//   TerminatedCString s_useAGPFlag_00630083
//   TerminatedCString s_rendererDLLPath_0063008e
//   TerminatedCString s_gamma_0063009e
//   TerminatedCString s_heroNumber_006300a4
//   TerminatedCString s_haloMode_006300af
//   TerminatedCString s_firstTimeFlag_006300b8
//   TerminatedCString s_subtitleMode_006300c6
//   TerminatedCString s_bloodFlag_006300d3
//   TerminatedCString s_nudityFlag_006300dd
//   TerminatedCString s_foulLanguageFlag_006300e8
//   TerminatedCString s_shadowFlag_006300f9
//   TerminatedCString s_quimbyFlag_00630104
//   TerminatedCString s_currentBoard_0063010f
//   TerminatedCString s_gameControl_0063011c
//   TerminatedCString s_keyWalk_00630128
//   TerminatedCString s_keyBackup_00630130
//   TerminatedCString s_keyRun_0063013a
//   TerminatedCString s_keyStrafe_00630141
//   TerminatedCString s_keyStrafeLeft_0063014b
//   TerminatedCString s_keyStrafeRight_00630159
//   TerminatedCString s_keyRight_00630168
//   TerminatedCString s_keyLeft_00630171
//   TerminatedCString s_keyFire_00630179
//   TerminatedCString s_keyUseItem_00630181
//   TerminatedCString s_keyLight_0063018c
//   TerminatedCString s_keyInfrared_00630195
//   TerminatedCString s_keyDraw_006301a1
//   TerminatedCString s_keyJump_006301a9
//   TerminatedCString s_keyPointUp_006301b1
//   TerminatedCString s_keyPointDown_006301bc
//   TerminatedCString s_keyWeapon1_006301c9
//   TerminatedCString s_keyWeapon2_006301d4
//   TerminatedCString s_keyWeapon3_006301df
//   TerminatedCString s_keyWeapon4_006301ea
//   TerminatedCString s_keyWeapon5_006301f5
//   TerminatedCString s_keyNextWeapon_00630200
//   TerminatedCString s_keyPrevWeapon_0063020e
//   TerminatedCString s_keyNextItem_0063021c
//   TerminatedCString s_keyPrevItem_00630228
//   TerminatedCString s_keyItemDesc_00630234
//   TerminatedCString s_keyNextAmmo_00630240
//   TerminatedCString s_invertMouseYAxis_0063024c
//   TerminatedCString s_alwaysRun_0063025d
//   TerminatedCString s_xMouseSensitivity_00630267
//   TerminatedCString s_yMouseSensitivity_00630279
//   TerminatedCString s_xCenter_0063028b
//   TerminatedCString s_yCenter_00630293
//   TerminatedCString s_xStickMin_0063029b
//   TerminatedCString s_xStickMax_006302a5
//   TerminatedCString s_yStickMin_006302af
//   TerminatedCString s_yStickMax_006302b9
//   TerminatedCString s_aimMode_006302c3
//   TerminatedCString s_autoUseHealth_006302cb
//   TerminatedCString s_logConsoleFlag_006302d9
//   TerminatedCString s_headOfHorrorCheat_006302e8
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
//   TerminatedCString g_RendererDllName
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
//   int g_GraphicsCardHandle
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   int g_PodSystemVersion
// Function calls:
//   core_msnedit.cpp_writeIni_FUN_005375d0
//   core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   sound_sndmain.cpp_writeIni_FUN_005ac220

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
             g_CConsolePtr->fileLoggingEnabled);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            ((CIniFile *)&stack0xfffffeec,"headOfHorrorCheat",
             g_CGamePtr->head_of_horror_cheat);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0((CIniFile *)&stack0xfffffef0,"Editor")
  ;
  core_msnedit_cpp_writeIni_FUN_005375d0(g_CDemonMissionPtr,(CIniFile *)&stack0xfffffef4);
  core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(g_CDemonSetPtr,(CIniFile *)&stack0xfffffef8);
  return;
}


// Assembly code:
// 004fc510: PUSH EBX
//   Label: core_inivar.cpp_writeIniData_FUN_004fc510
// 004fc511: PUSH ESI
// 004fc512: PUSH EDI
// 004fc513: PUSH EBP
// 004fc514: SUB ESP,0x200
// 004fc51a: PUSH 0x0
// 004fc51c: PUSH 0x67cce0
//   XREF to: 0067cce0 (DATA)
// 004fc521: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc525: PUSH EAX
// 004fc526: CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   XREF to: 004fba70 (UNCONDITIONAL_CALL)
// 004fc52b: ADD ESP,0xc
// 004fc52e: PUSH 0x67cd08
//   XREF to: 0067cd08 (DATA)
// 004fc533: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fc537: PUSH EAX
// 004fc538: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fc53d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc542: ADD ESP,0x8
// 004fc545: MOV EDX,dword ptr [EAX]
//   XREF to: 02d81a9c (READ)
// 004fc547: PUSH EDX
// 004fc548: PUSH 0x630069
//   XREF to: 00630069 (DATA)
// 004fc54d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc551: PUSH EAX
// 004fc552: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc557: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc55c: ADD ESP,0xc
// 004fc55f: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 02d81aa0 (READ)
// 004fc562: PUSH ECX
// 004fc563: PUSH 0x630072
//   XREF to: 00630072 (DATA)
// 004fc568: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc56c: PUSH EAX
// 004fc56d: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc572: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc577: ADD ESP,0xc
// 004fc57a: MOV EBX,dword ptr [EAX + 0x8]
//   XREF to: 02d81aa4 (READ)
// 004fc57d: PUSH EBX
// 004fc57e: PUSH 0x63007b
//   XREF to: 0063007b (DATA)
// 004fc583: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc587: PUSH EAX
// 004fc588: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc58d: ADD ESP,0xc
// 004fc590: MOV ESI,dword ptr [0x03f6b884]
//   XREF to: 03f6b884 (READ)
// 004fc596: PUSH ESI
// 004fc597: PUSH 0x630083
//   XREF to: 00630083 (DATA)
// 004fc59c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc5a0: PUSH EAX
// 004fc5a1: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc5a6: ADD ESP,0xc
// 004fc5a9: PUSH 0x684010
//   XREF to: 00684010 (DATA)
// 004fc5ae: PUSH 0x63008e
//   XREF to: 0063008e (DATA)
// 004fc5b3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc5b7: PUSH EAX
// 004fc5b8: CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)
// 004fc5bd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc5c2: ADD ESP,0xc
// 004fc5c5: MOV EDI,dword ptr [EAX + 0x224]
//   XREF to: 02d81cc0 (READ)
// 004fc5cb: PUSH EDI
// 004fc5cc: PUSH 0x63009e
//   XREF to: 0063009e (DATA)
// 004fc5d1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc5d5: PUSH EAX
// 004fc5d6: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc5db: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc5e0: ADD ESP,0xc
// 004fc5e3: MOV EBP,dword ptr [EAX + 0xc0]
//   XREF to: 02d81b5c (READ)
// 004fc5e9: PUSH EBP
// 004fc5ea: PUSH 0x6300a4
//   XREF to: 006300a4 (DATA)
// 004fc5ef: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc5f3: PUSH EAX
// 004fc5f4: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc5f9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc5fe: ADD ESP,0xc
// 004fc601: MOV EDX,dword ptr [EAX + 0xc]
//   XREF to: 02d81aa8 (READ)
// 004fc604: PUSH EDX
// 004fc605: PUSH 0x6300af
//   XREF to: 006300af (DATA)
// 004fc60a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc60e: PUSH EAX
// 004fc60f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc614: ADD ESP,0xc
// 004fc617: MOV ECX,dword ptr [0x02db8a64]
//   XREF to: 02db8a64 (READ)
// 004fc61d: PUSH ECX
// 004fc61e: PUSH 0x6300b8
//   XREF to: 006300b8 (DATA)
// 004fc623: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc627: PUSH EAX
// 004fc628: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc62d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc632: ADD ESP,0xc
// 004fc635: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 02d81aac (READ)
// 004fc638: PUSH EBX
// 004fc639: PUSH 0x6300c6
//   XREF to: 006300c6 (DATA)
// 004fc63e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc642: PUSH EAX
// 004fc643: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc648: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc64d: ADD ESP,0xc
// 004fc650: MOV ESI,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 004fc653: PUSH ESI
// 004fc654: PUSH 0x6300d3
//   XREF to: 006300d3 (DATA)
// 004fc659: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc65d: PUSH EAX
// 004fc65e: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc663: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc668: MOV EDI,dword ptr [EAX + 0x20]
//   XREF to: 02d81abc (READ)
// 004fc66b: ADD ESP,0xc
// 004fc66e: TEST EDI,EDI
// 004fc670: JZ 0x004fcbd2
//   XREF to: 004fcbd2 (CONDITIONAL_JUMP)
// 004fc676: MOV EAX,[0x0067b654]
//   Label: LAB_004fc676
//   XREF to: 0067b654 (READ)
// 004fc67b: MOV EBX,dword ptr [EAX + 0x20]
//   XREF to: 02d81abc (READ)
// 004fc67e: PUSH EBX
// 004fc67f: PUSH 0x630104
//   XREF to: 00630104 (DATA)
// 004fc684: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc688: PUSH EAX
// 004fc689: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc68e: ADD ESP,0xc
// 004fc691: MOV ESI,dword ptr [0x02f275f4]
//   XREF to: 02f275f4 (READ)
// 004fc697: PUSH ESI
// 004fc698: PUSH 0x63010f
//   XREF to: 0063010f (DATA)
// 004fc69d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc6a1: PUSH EAX
// 004fc6a2: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc6a7: ADD ESP,0xc
// 004fc6aa: PUSH 0x67cd00
//   XREF to: 0067cd00 (DATA)
// 004fc6af: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fc6b3: PUSH EAX
// 004fc6b4: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fc6b9: ADD ESP,0x8
// 004fc6bc: MOV EAX,ESP
// 004fc6be: PUSH EAX
// 004fc6bf: CALL sound_sndmain.cpp_writeIni_FUN_005ac220
//   XREF to: 005ac220 (UNCONDITIONAL_CALL)
// 004fc6c4: ADD ESP,0x4
// 004fc6c7: PUSH 0x67cd18
//   XREF to: 0067cd18 (DATA)
// 004fc6cc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fc6d0: PUSH EAX
// 004fc6d1: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fc6d6: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc6db: ADD ESP,0x8
// 004fc6de: MOV EDI,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 004fc6e4: PUSH EDI
// 004fc6e5: PUSH 0x63011c
//   XREF to: 0063011c (DATA)
// 004fc6ea: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc6ee: PUSH EAX
// 004fc6ef: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc6f4: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc6f9: ADD ESP,0xc
// 004fc6fc: MOV EBP,dword ptr [EAX + 0x28]
//   XREF to: 02d81ac4 (READ)
// 004fc6ff: PUSH EBP
// 004fc700: PUSH 0x630128
//   XREF to: 00630128 (DATA)
// 004fc705: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc709: PUSH EAX
// 004fc70a: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc70f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc714: ADD ESP,0xc
// 004fc717: MOV EDX,dword ptr [EAX + 0x2c]
//   XREF to: 02d81ac8 (READ)
// 004fc71a: PUSH EDX
// 004fc71b: PUSH 0x630130
//   XREF to: 00630130 (DATA)
// 004fc720: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc724: PUSH EAX
// 004fc725: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc72a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc72f: ADD ESP,0xc
// 004fc732: MOV ECX,dword ptr [EAX + 0x30]
//   XREF to: 02d81acc (READ)
// 004fc735: PUSH ECX
// 004fc736: PUSH 0x63013a
//   XREF to: 0063013a (DATA)
// 004fc73b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc73f: PUSH EAX
// 004fc740: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc745: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc74a: ADD ESP,0xc
// 004fc74d: MOV EBX,dword ptr [EAX + 0x34]
//   XREF to: 02d81ad0 (READ)
// 004fc750: PUSH EBX
// 004fc751: PUSH 0x630141
//   XREF to: 00630141 (DATA)
// 004fc756: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc75a: PUSH EAX
// 004fc75b: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc760: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc765: ADD ESP,0xc
// 004fc768: MOV ESI,dword ptr [EAX + 0x38]
//   XREF to: 02d81ad4 (READ)
// 004fc76b: PUSH ESI
// 004fc76c: PUSH 0x63014b
//   XREF to: 0063014b (DATA)
// 004fc771: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc775: PUSH EAX
// 004fc776: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc77b: ADD ESP,0xc
// 004fc77e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc783: MOV EDI,dword ptr [EAX + 0x3c]
//   XREF to: 02d81ad8 (READ)
// 004fc786: PUSH EDI
// 004fc787: PUSH 0x630159
//   XREF to: 00630159 (DATA)
// 004fc78c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc790: PUSH EAX
// 004fc791: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc796: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc79b: ADD ESP,0xc
// 004fc79e: MOV EBP,dword ptr [EAX + 0x40]
//   XREF to: 02d81adc (READ)
// 004fc7a1: PUSH EBP
// 004fc7a2: PUSH 0x630168
//   XREF to: 00630168 (DATA)
// 004fc7a7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc7ab: PUSH EAX
// 004fc7ac: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc7b1: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc7b6: ADD ESP,0xc
// 004fc7b9: MOV EDX,dword ptr [EAX + 0x44]
//   XREF to: 02d81ae0 (READ)
// 004fc7bc: PUSH EDX
// 004fc7bd: PUSH 0x630171
//   XREF to: 00630171 (DATA)
// 004fc7c2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc7c6: PUSH EAX
// 004fc7c7: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc7cc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc7d1: ADD ESP,0xc
// 004fc7d4: MOV ECX,dword ptr [EAX + 0x48]
//   XREF to: 02d81ae4 (READ)
// 004fc7d7: PUSH ECX
// 004fc7d8: PUSH 0x630179
//   XREF to: 00630179 (DATA)
// 004fc7dd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc7e1: PUSH EAX
// 004fc7e2: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc7e7: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc7ec: ADD ESP,0xc
// 004fc7ef: MOV EBX,dword ptr [EAX + 0x4c]
//   XREF to: 02d81ae8 (READ)
// 004fc7f2: PUSH EBX
// 004fc7f3: PUSH 0x630181
//   XREF to: 00630181 (DATA)
// 004fc7f8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc7fc: PUSH EAX
// 004fc7fd: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc802: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc807: ADD ESP,0xc
// 004fc80a: MOV ESI,dword ptr [EAX + 0x50]
//   XREF to: 02d81aec (READ)
// 004fc80d: PUSH ESI
// 004fc80e: PUSH 0x63018c
//   XREF to: 0063018c (DATA)
// 004fc813: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc817: PUSH EAX
// 004fc818: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc81d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc822: ADD ESP,0xc
// 004fc825: MOV EDI,dword ptr [EAX + 0x54]
//   XREF to: 02d81af0 (READ)
// 004fc828: PUSH EDI
// 004fc829: PUSH 0x630195
//   XREF to: 00630195 (DATA)
// 004fc82e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc832: PUSH EAX
// 004fc833: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc838: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc83d: ADD ESP,0xc
// 004fc840: MOV EBP,dword ptr [EAX + 0x58]
//   XREF to: 02d81af4 (READ)
// 004fc843: PUSH EBP
// 004fc844: PUSH 0x6301a1
//   XREF to: 006301a1 (DATA)
// 004fc849: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc84d: PUSH EAX
// 004fc84e: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc853: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc858: ADD ESP,0xc
// 004fc85b: MOV EDX,dword ptr [EAX + 0x5c]
//   XREF to: 02d81af8 (READ)
// 004fc85e: PUSH EDX
// 004fc85f: PUSH 0x6301a9
//   XREF to: 006301a9 (DATA)
// 004fc864: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc868: PUSH EAX
// 004fc869: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc86e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc873: ADD ESP,0xc
// 004fc876: MOV ECX,dword ptr [EAX + 0x60]
//   XREF to: 02d81afc (READ)
// 004fc879: PUSH ECX
// 004fc87a: PUSH 0x6301b1
//   XREF to: 006301b1 (DATA)
// 004fc87f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc883: PUSH EAX
// 004fc884: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc889: ADD ESP,0xc
// 004fc88c: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc891: MOV EBX,dword ptr [EAX + 0x64]
//   XREF to: 02d81b00 (READ)
// 004fc894: PUSH EBX
// 004fc895: PUSH 0x6301bc
//   XREF to: 006301bc (DATA)
// 004fc89a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc89e: PUSH EAX
// 004fc89f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc8a4: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc8a9: ADD ESP,0xc
// 004fc8ac: MOV ESI,dword ptr [EAX + 0x68]
//   XREF to: 02d81b04 (READ)
// 004fc8af: PUSH ESI
// 004fc8b0: PUSH 0x6301c9
//   XREF to: 006301c9 (DATA)
// 004fc8b5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc8b9: PUSH EAX
// 004fc8ba: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc8bf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc8c4: ADD ESP,0xc
// 004fc8c7: MOV EDI,dword ptr [EAX + 0x6c]
//   XREF to: 02d81b08 (READ)
// 004fc8ca: PUSH EDI
// 004fc8cb: PUSH 0x6301d4
//   XREF to: 006301d4 (DATA)
// 004fc8d0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc8d4: PUSH EAX
// 004fc8d5: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc8da: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc8df: ADD ESP,0xc
// 004fc8e2: MOV EBP,dword ptr [EAX + 0x70]
//   XREF to: 02d81b0c (READ)
// 004fc8e5: PUSH EBP
// 004fc8e6: PUSH 0x6301df
//   XREF to: 006301df (DATA)
// 004fc8eb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc8ef: PUSH EAX
// 004fc8f0: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc8f5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc8fa: ADD ESP,0xc
// 004fc8fd: MOV EDX,dword ptr [EAX + 0x74]
//   XREF to: 02d81b10 (READ)
// 004fc900: PUSH EDX
// 004fc901: PUSH 0x6301ea
//   XREF to: 006301ea (DATA)
// 004fc906: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc90a: PUSH EAX
// 004fc90b: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc910: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc915: ADD ESP,0xc
// 004fc918: MOV ECX,dword ptr [EAX + 0x78]
//   XREF to: 02d81b14 (READ)
// 004fc91b: PUSH ECX
// 004fc91c: PUSH 0x6301f5
//   XREF to: 006301f5 (DATA)
// 004fc921: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc925: PUSH EAX
// 004fc926: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc92b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc930: ADD ESP,0xc
// 004fc933: MOV EBX,dword ptr [EAX + 0x7c]
//   XREF to: 02d81b18 (READ)
// 004fc936: PUSH EBX
// 004fc937: PUSH 0x630200
//   XREF to: 00630200 (DATA)
// 004fc93c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc940: PUSH EAX
// 004fc941: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc946: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc94b: ADD ESP,0xc
// 004fc94e: MOV ESI,dword ptr [EAX + 0x80]
//   XREF to: 02d81b1c (READ)
// 004fc954: PUSH ESI
// 004fc955: PUSH 0x63020e
//   XREF to: 0063020e (DATA)
// 004fc95a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc95e: PUSH EAX
// 004fc95f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc964: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc969: ADD ESP,0xc
// 004fc96c: MOV EDI,dword ptr [EAX + 0x84]
//   XREF to: 02d81b20 (READ)
// 004fc972: PUSH EDI
// 004fc973: PUSH 0x63021c
//   XREF to: 0063021c (DATA)
// 004fc978: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc97c: PUSH EAX
// 004fc97d: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc982: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc987: ADD ESP,0xc
// 004fc98a: MOV EBP,dword ptr [EAX + 0x88]
//   XREF to: 02d81b24 (READ)
// 004fc990: PUSH EBP
// 004fc991: PUSH 0x630228
//   XREF to: 00630228 (DATA)
// 004fc996: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc99a: PUSH EAX
// 004fc99b: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc9a0: ADD ESP,0xc
// 004fc9a3: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc9a8: MOV EDX,dword ptr [EAX + 0x8c]
//   XREF to: 02d81b28 (READ)
// 004fc9ae: PUSH EDX
// 004fc9af: PUSH 0x630234
//   XREF to: 00630234 (DATA)
// 004fc9b4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc9b8: PUSH EAX
// 004fc9b9: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc9be: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc9c3: ADD ESP,0xc
// 004fc9c6: MOV ECX,dword ptr [EAX + 0x90]
//   XREF to: 02d81b2c (READ)
// 004fc9cc: PUSH ECX
// 004fc9cd: PUSH 0x630240
//   XREF to: 00630240 (DATA)
// 004fc9d2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc9d6: PUSH EAX
// 004fc9d7: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc9dc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc9e1: ADD ESP,0xc
// 004fc9e4: MOV EBX,dword ptr [EAX + 0x94]
//   XREF to: 02d81b30 (READ)
// 004fc9ea: PUSH EBX
// 004fc9eb: PUSH 0x63024c
//   XREF to: 0063024c (DATA)
// 004fc9f0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fc9f4: PUSH EAX
// 004fc9f5: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fc9fa: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fc9ff: ADD ESP,0xc
// 004fca02: MOV ESI,dword ptr [EAX + 0x98]
//   XREF to: 02d81b34 (READ)
// 004fca08: PUSH ESI
// 004fca09: PUSH 0x63025d
//   XREF to: 0063025d (DATA)
// 004fca0e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fca12: PUSH EAX
// 004fca13: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fca18: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fca1d: ADD ESP,0xc
// 004fca20: MOV EDI,dword ptr [EAX + 0x9c]
//   XREF to: 02d81b38 (READ)
// 004fca26: PUSH EDI
// 004fca27: PUSH 0x630267
//   XREF to: 00630267 (DATA)
// 004fca2c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fca30: PUSH EAX
// 004fca31: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fca36: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fca3b: ADD ESP,0xc
// 004fca3e: MOV EBP,dword ptr [EAX + 0xa0]
//   XREF to: 02d81b3c (READ)
// 004fca44: PUSH EBP
// 004fca45: PUSH 0x630279
//   XREF to: 00630279 (DATA)
// 004fca4a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fca4e: PUSH EAX
// 004fca4f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fca54: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fca59: ADD ESP,0xc
// 004fca5c: MOV EDX,dword ptr [EAX + 0xa4]
//   XREF to: 02d81b40 (READ)
// 004fca62: PUSH EDX
// 004fca63: PUSH 0x63028b
//   XREF to: 0063028b (DATA)
// 004fca68: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fca6c: PUSH EAX
// 004fca6d: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fca72: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fca77: ADD ESP,0xc
// 004fca7a: MOV ECX,dword ptr [EAX + 0xa8]
//   XREF to: 02d81b44 (READ)
// 004fca80: PUSH ECX
// 004fca81: PUSH 0x630293
//   XREF to: 00630293 (DATA)
// 004fca86: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fca8a: PUSH EAX
// 004fca8b: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fca90: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fca95: ADD ESP,0xc
// 004fca98: MOV EBX,dword ptr [EAX + 0xac]
//   XREF to: 02d81b48 (READ)
// 004fca9e: PUSH EBX
// 004fca9f: PUSH 0x63029b
//   XREF to: 0063029b (DATA)
// 004fcaa4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcaa8: PUSH EAX
// 004fcaa9: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcaae: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcab3: ADD ESP,0xc
// 004fcab6: MOV ESI,dword ptr [EAX + 0xb0]
//   XREF to: 02d81b4c (READ)
// 004fcabc: PUSH ESI
// 004fcabd: PUSH 0x6302a5
//   XREF to: 006302a5 (DATA)
// 004fcac2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcac6: PUSH EAX
// 004fcac7: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcacc: ADD ESP,0xc
// 004fcacf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcad4: MOV EDI,dword ptr [EAX + 0xb4]
//   XREF to: 02d81b50 (READ)
// 004fcada: PUSH EDI
// 004fcadb: PUSH 0x6302af
//   XREF to: 006302af (DATA)
// 004fcae0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcae4: PUSH EAX
// 004fcae5: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcaea: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcaef: ADD ESP,0xc
// 004fcaf2: MOV EBP,dword ptr [EAX + 0xb8]
//   XREF to: 02d81b54 (READ)
// 004fcaf8: PUSH EBP
// 004fcaf9: PUSH 0x6302b9
//   XREF to: 006302b9 (DATA)
// 004fcafe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb02: PUSH EAX
// 004fcb03: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcb08: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcb0d: ADD ESP,0xc
// 004fcb10: MOV EDX,dword ptr [EAX + 0xc4]
//   XREF to: 02d81b60 (READ)
// 004fcb16: PUSH EDX
// 004fcb17: PUSH 0x6302c3
//   XREF to: 006302c3 (DATA)
// 004fcb1c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb20: PUSH EAX
// 004fcb21: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcb26: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcb2b: ADD ESP,0xc
// 004fcb2e: MOV ECX,dword ptr [EAX + 0xc8]
//   XREF to: 02d81b64 (READ)
// 004fcb34: PUSH ECX
// 004fcb35: PUSH 0x6302cb
//   XREF to: 006302cb (DATA)
// 004fcb3a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb3e: PUSH EAX
// 004fcb3f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcb44: ADD ESP,0xc
// 004fcb47: PUSH 0x67cd50
//   XREF to: 0067cd50 (DATA)
// 004fcb4c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb50: PUSH EAX
// 004fcb51: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fcb56: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004fcb5b: ADD ESP,0x8
// 004fcb5e: MOV EBX,dword ptr [EAX]
//   XREF to: 0083b1a4 (READ)
// 004fcb60: PUSH EBX
// 004fcb61: PUSH 0x6302d9
//   XREF to: 006302d9 (DATA)
// 004fcb66: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb6a: PUSH EAX
// 004fcb6b: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcb70: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcb75: ADD ESP,0xc
// 004fcb78: MOV ESI,dword ptr [EAX + 0x214]
//   XREF to: 02d81cb0 (READ)
// 004fcb7e: PUSH ESI
// 004fcb7f: PUSH 0x6302e8
//   XREF to: 006302e8 (DATA)
// 004fcb84: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb88: PUSH EAX
// 004fcb89: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcb8e: ADD ESP,0xc
// 004fcb91: PUSH 0x67cd58
//   XREF to: 0067cd58 (DATA)
// 004fcb96: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fcb9a: PUSH EAX
// 004fcb9b: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fcba0: ADD ESP,0x8
// 004fcba3: MOV EAX,ESP
// 004fcba5: PUSH EAX
// 004fcba6: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004fcbac: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 004fcbad: CALL core_msnedit.cpp_writeIni_FUN_005375d0
//   XREF to: 005375d0 (UNCONDITIONAL_CALL)
// 004fcbb2: ADD ESP,0x8
// 004fcbb5: MOV EAX,ESP
// 004fcbb7: PUSH EAX
// 004fcbb8: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004fcbbe: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004fcbbf: CALL core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
//   XREF to: 00584920 (UNCONDITIONAL_CALL)
// 004fcbc4: ADD ESP,0x8
// 004fcbc7: ADD ESP,0x200
// 004fcbcd: POP EBP
// 004fcbce: POP EDI
// 004fcbcf: POP ESI
// 004fcbd0: POP EBX
// 004fcbd1: RET
// 004fcbd2: MOV EBP,dword ptr [EAX + 0x18]
//   Label: LAB_004fcbd2
//   XREF to: 02d81ab4 (READ)
// 004fcbd5: PUSH EBP
// 004fcbd6: PUSH 0x6300dd
//   XREF to: 006300dd (DATA)
// 004fcbdb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcbdf: PUSH EAX
// 004fcbe0: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcbe5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcbea: ADD ESP,0xc
// 004fcbed: MOV EDX,dword ptr [EAX + 0x1c]
//   XREF to: 02d81ab8 (READ)
// 004fcbf0: PUSH EDX
// 004fcbf1: PUSH 0x6300e8
//   XREF to: 006300e8 (DATA)
// 004fcbf6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcbfa: PUSH EAX
// 004fcbfb: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcc00: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fcc05: ADD ESP,0xc
// 004fcc08: MOV ECX,dword ptr [EAX + 0x24]
//   XREF to: 02d81ac0 (READ)
// 004fcc0b: PUSH ECX
// 004fcc0c: PUSH 0x6300f9
//   XREF to: 006300f9 (DATA)
// 004fcc11: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fcc15: PUSH EAX
// 004fcc16: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 004fcc1b: ADD ESP,0xc
// 004fcc1e: JMP 0x004fc676
//   XREF to: 004fc676 (UNCONDITIONAL_JUMP)
