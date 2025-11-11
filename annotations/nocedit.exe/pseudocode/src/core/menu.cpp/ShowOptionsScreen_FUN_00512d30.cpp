// Name: core_menu.cpp_ShowOptionsScreen_FUN_00512d30
// Address: 00512d30
// Address Range: [[00512d30, 00512f26]]
// Convention: unknown
// Signature: undefined core_menu.cpp_ShowOptionsScreen_FUN_00512d30()
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db88f [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 0051342b [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00512d1c = 00512e5d
//   TerminatedCString s_Graphic_options_00636d7f
//   TerminatedCString s_Sound_options_00636d8f
//   TerminatedCString s_Control_options_00636d9d
//   TerminatedCString s_Credits_00636dad
//   TerminatedCString s_Option_Menu_00636db5
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSound* g_CSoundPtr = 03f6af64
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_control
//   undefined4 g_CGameInstance.hero_number
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   undefined4 DAT_02f21590
//   undefined4 DAT_02f28a50
//   undefined4 DAT_02f28b50
//   undefined4 DAT_02f28c50
//   undefined4 DAT_02f28d50
//   undefined4 DAT_02f28e50
//   undefined4 DAT_02f28e54
//   CSound g_CSoundInstance
// Function calls:
//   core_game.cpp_CGame_rollCredits_FUN_004e4010
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_inivar.cpp_writeIniData_FUN_004fc510
//   core_menu.cpp_CustomKeySettings_FUN_00511890
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   core_menu.cpp_GraphicsOptions_FUN_00510c80
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50
//   core_moon.cpp_CMoon_free_FUN_00529ce0
//   core_moon.cpp_CMoon_FUN_00529d60
//   core_moon.cpp_CMoon_FUN_00529ed0
//   core_moon.cpp_CMoon_init_FUN_00529ae0
//   core_sound.cpp_CSound_FUN_005b3830
//   core_sound.cpp_CSound_FUN_005b39a0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

/* Signature: undefined1 core_menu.cpp_ShowOptionsScreen(undefined4 param_1) */

void core_menu_cpp_ShowOptionsScreen_FUN_00512d30(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  CGame *unaff_ESI;
  int in_stack_00000004;
  int in_stack_00000064;
  
  if (in_stack_00000004 != 0) {
    core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
    core_moon_cpp_CMoon_init_FUN_00529ae0();
  }
  puVar4 = &DAT_02f28a50;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,unaff_ESI);
  iVar1 = 0;
  do {
    *(undefined **)((int)&DAT_02f28e50 + iVar1) = puVar4;
    iVar1 = iVar1 + 4;
    puVar4 = puVar4 + 0x100;
  } while (iVar1 != 0x10);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_FUN_00529d60();
    core_moon_cpp_CMoon_FUN_00529ed0();
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic options");
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f28a50,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound options");
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f28b50,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control options");
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f28c50,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Credits");
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f28d50,pcVar2);
    g_CGamePtr->hero_number = 2;
    support_newmsg_cpp_getLocalizedString_FUN_005441f0("Option Menu");
    uVar3 = core_menu_cpp_GetGameMainMenuChoice_FUN_00510000();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(uVar3) {
    case 0:
      core_menu_cpp_GraphicsOptions_FUN_00510c80();
      break;
    case 1:
      core_menu_cpp_SettingSoundOptions_FUN_00511e50();
      break;
    case 2:
      iVar1 = g_CGamePtr->game_control;
      core_menu_cpp_CustomKeySettings_FUN_00511890();
      if (iVar1 != g_CGamePtr->game_control) {
        core_menu_cpp_SettingCustomKeys_FUN_005138e0();
      }
      break;
    case 3:
      core_game_cpp_CGame_rollCredits_FUN_004e4010(g_CGamePtr);
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  } while (iVar1 == 0);
  if (in_stack_00000064 != 0) {
    core_moon_cpp_CMoon_free_FUN_00529ce0();
    core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
    core_inivar_cpp_writeIniData_FUN_004fc510();
    return;
  }
  core_inivar_cpp_writeIniData_FUN_004fc510();
  return;
}


// Assembly code:
// 00512d30: PUSH EBX
//   Label: core_menu.cpp_ShowOptionsScreen_FUN_00512d30
// 00512d31: PUSH EDI
// 00512d32: PUSH EBP
// 00512d33: SUB ESP,0x4
// 00512d36: XOR EDX,EDX
// 00512d38: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00512d3c: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 00512d3f: TEST ECX,ECX
// 00512d41: JNZ 0x00512e91
//   XREF to: 00512e91 (CONDITIONAL_JUMP)
// 00512d47: PUSH ESI
//   Label: LAB_00512d47
// 00512d48: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00512d4e: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00512d4f: MOV EBX,0x2f28a50
//   XREF to: 02f28a50 (PARAM)
// 00512d54: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 00512d59: ADD ESP,0x4
// 00512d5c: XOR EAX,EAX
// 00512d5e: POP ESI
// 00512d5f: MOV dword ptr [EAX + 0x2f28e50],EBX
//   Label: LAB_00512d5f
//   XREF to: 02f28e50 (WRITE)
//   XREF to: 02f28e54 (WRITE)
//   XREF to: 02f28a50 (DATA)
//   XREF to: 02f28b50 (DATA)
// 00512d65: ADD EAX,0x4
// 00512d68: ADD EBX,0x100
//   XREF to: 02f28c50 (PARAM)
// 00512d6e: CMP EAX,0x10
// 00512d71: JNZ 0x00512d5f
//   XREF to: 00512d5f (CONDITIONAL_JUMP)
// 00512d73: MOV EDI,dword ptr [0x0067b654]
//   Label: LAB_00512d73
//   XREF to: 0067b654 (READ)
// 00512d79: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 00512d7a: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00512d7f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00512d84: ADD ESP,0x4
// 00512d87: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00512d8d: PUSH EAX
// 00512d8e: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00512d93: CALL core_moon.cpp_CMoon_FUN_00529d60
//   XREF to: 00529d60 (UNCONDITIONAL_CALL)
// 00512d98: ADD ESP,0x8
// 00512d9b: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00512da0: CALL core_moon.cpp_CMoon_FUN_00529ed0
//   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
// 00512da5: ADD ESP,0x4
// 00512da8: PUSH 0x636d7f
//   XREF to: 00636d7f (DATA)
// 00512dad: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512db2: ADD ESP,0x4
// 00512db5: PUSH EAX
// 00512db6: PUSH 0x2f28a50
//   XREF to: 02f28a50 (DATA)
// 00512dbb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512dc0: ADD ESP,0x8
// 00512dc3: PUSH 0x636d8f
//   XREF to: 00636d8f (DATA)
// 00512dc8: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512dcd: ADD ESP,0x4
// 00512dd0: PUSH EAX
// 00512dd1: PUSH 0x2f28b50
//   XREF to: 02f28b50 (DATA)
// 00512dd6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512ddb: ADD ESP,0x8
// 00512dde: PUSH 0x636d9d
//   XREF to: 00636d9d (DATA)
// 00512de3: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512de8: ADD ESP,0x4
// 00512deb: PUSH EAX
// 00512dec: PUSH 0x2f28c50
//   XREF to: 02f28c50 (DATA)
// 00512df1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512df6: ADD ESP,0x8
// 00512df9: PUSH 0x636dad
//   XREF to: 00636dad (DATA)
// 00512dfe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512e03: ADD ESP,0x4
// 00512e06: PUSH EAX
// 00512e07: PUSH 0x2f28d50
//   XREF to: 02f28d50 (DATA)
// 00512e0c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512e11: ADD ESP,0x8
// 00512e14: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00512e19: PUSH 0x636db5
//   XREF to: 00636db5 (DATA)
// 00512e1e: MOV dword ptr [EAX + 0xc0],0x2
//   XREF to: 02d81b5c (WRITE)
// 00512e28: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512e2d: ADD ESP,0x4
// 00512e30: PUSH EAX
// 00512e31: PUSH 0xfa
// 00512e36: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10] (DATA)
// 00512e3a: PUSH EAX
// 00512e3b: PUSH 0x4
// 00512e3d: PUSH 0x2f28e50
//   XREF to: 02f28e50 (DATA)
// 00512e42: CALL core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   XREF to: 00510000 (UNCONDITIONAL_CALL)
// 00512e47: ADD ESP,0x14
// 00512e4a: MOV EBX,EAX
// 00512e4c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00512e51: CMP EBX,0x3
// 00512e54: JA 0x00512e62
//   XREF to: 00512e62 (CONDITIONAL_JUMP)
// 00512e56: JMP dword ptr [EBX*0x4 + 0x512d1c]
//   Label: switchD
//   XREF to: 00512e5d (COMPUTED_JUMP)
//   XREF to: 00512eb2 (COMPUTED_JUMP)
//   XREF to: 00512eb9 (COMPUTED_JUMP)
//   XREF to: 00512edd (COMPUTED_JUMP)
//   XREF to: 00512d1c (DATA)
// 00512e5d: CALL core_menu.cpp_GraphicsOptions_FUN_00510c80
//   Label: caseD_0
//   XREF to: 00510c80 (UNCONDITIONAL_CALL)
// 00512e62: PUSH 0x1
//   Label: default
// 00512e64: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00512e69: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00512e6a: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00512e6c: CALL dword ptr [EBX + 0x4]
// 00512e6f: ADD ESP,0x8
// 00512e72: TEST EAX,EAX
// 00512e74: JZ 0x00512d73
//   XREF to: 00512d73 (CONDITIONAL_JUMP)
// 00512e7a: CMP dword ptr [ESP + 0x14],0x0
// 00512e7f: JNZ 0x00512eff
//   XREF to: 00512eff (CONDITIONAL_JUMP)
// 00512e85: CALL core_inivar.cpp_writeIniData_FUN_004fc510
//   XREF to: 004fc510 (UNCONDITIONAL_CALL)
// 00512e8a: ADD ESP,0x4
// 00512e8d: POP EBP
// 00512e8e: POP EDI
// 00512e8f: POP EBX
// 00512e90: RET
// 00512e91: MOV EBX,dword ptr [0x00681ef8]
//   Label: LAB_00512e91
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512e97: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00512e98: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00512e9d: ADD ESP,0x4
// 00512ea0: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00512ea5: CALL core_moon.cpp_CMoon_init_FUN_00529ae0
//   XREF to: 00529ae0 (UNCONDITIONAL_CALL)
// 00512eaa: ADD ESP,0x4
// 00512ead: JMP 0x00512d47
//   XREF to: 00512d47 (UNCONDITIONAL_JUMP)
// 00512eb2: CALL core_menu.cpp_SettingSoundOptions_FUN_00511e50
//   Label: caseD_1
//   XREF to: 00511e50 (UNCONDITIONAL_CALL)
// 00512eb7: JMP 0x00512e62
//   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
// 00512eb9: MOV EAX,[0x0067b654]
//   Label: caseD_2
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00512ebe: MOV EBX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00512ec4: CALL core_menu.cpp_CustomKeySettings_FUN_00511890
//   XREF to: 00511890 (UNCONDITIONAL_CALL)
// 00512ec9: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00512ece: CMP EBX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 00512ed4: JZ 0x00512e62
//   XREF to: 00512e62 (CONDITIONAL_JUMP)
// 00512ed6: CALL core_menu.cpp_SettingCustomKeys_FUN_005138e0
//   XREF to: 005138e0 (UNCONDITIONAL_CALL)
// 00512edb: JMP 0x00512e62
//   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
// 00512edd: MOV EBP,dword ptr [0x0067b654]
//   Label: caseD_3
//   XREF to: 0067b654 (READ)
// 00512ee3: PUSH EBP
//   XREF to: 02d81a9c (DATA)
// 00512ee4: CALL core_game.cpp_CGame_rollCredits_FUN_004e4010
//   XREF to: 004e4010 (UNCONDITIONAL_CALL)
// 00512ee9: ADD ESP,0x4
// 00512eec: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512ef1: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 00512ef2: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00512ef7: ADD ESP,0x4
// 00512efa: JMP 0x00512e62
//   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
// 00512eff: PUSH 0x2f21590
//   Label: LAB_00512eff
//   XREF to: 02f21590 (DATA)
// 00512f04: CALL core_moon.cpp_CMoon_free_FUN_00529ce0
//   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
// 00512f09: ADD ESP,0x4
// 00512f0c: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512f12: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00512f13: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 00512f18: ADD ESP,0x4
// 00512f1b: CALL core_inivar.cpp_writeIniData_FUN_004fc510
//   XREF to: 004fc510 (UNCONDITIONAL_CALL)
// 00512f20: ADD ESP,0x4
// 00512f23: POP EBP
// 00512f24: POP EDI
// 00512f25: POP EBX
// 00512f26: RET
