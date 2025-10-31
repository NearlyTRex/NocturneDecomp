// Name: core_game.cpp_CGame_playerControls_FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dbe5d]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_playerControls_FUN_004dbd80(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db398 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062b835
//   TerminatedCString s_CGame_playerControls_unk_0062b846
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char[256] g_KeyboardState
//   undefined4 CHAR_ARRAY_02d03e9c
//   char[600] g_PrevKeyboardState
//   undefined4 CHAR_ARRAY_02d82674
//   int g_InputResetFlag
//   int g_StoredCameraValue
//   int g_CheatSystemEnabled
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f7c740
//   undefined4 g_CDemonSetInstance.selected_camera_index
// Function calls:
//   core_game.cpp_CallToJoystickStuff_FUN_004dc230
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
//   core_game.cpp_SettingCursorPos_FUN_004dccc0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004dbe2e) */

void __cdecl core_game_cpp_CGame_playerControls_FUN_004dbd80(CGame *this_ptr)

{
  uint uVar1;
  SPlayerControl *ctrl;
  int iVar2;
  SPlayerControl *unaff_EBP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (g_CheatSystemEnabled != 0) {
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
    return;
  }
  if ((this_ptr->is_paused == 0) && (this_ptr->allow_hero_controls_flag == 0)) {
    ctrl = (SPlayerControl *)
           core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(g_CNetGameInstance);
    uVar1 = this_ptr->game_control;
    if (uVar1 == 0) {
      core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(this_ptr,ctrl);
    }
    else if (uVar1 < 2) {
      core_game_cpp_SettingCursorPos_FUN_004dccc0(this_ptr,ctrl);
    }
    else if (uVar1 == 2) {
      core_game_cpp_CallToJoystickStuff_FUN_004dc230(this_ptr,(int)ctrl,unaff_EBP);
    }
    else {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x728;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::playerControls - unknown control type");
    }
    pcVar3 = g_KeyboardState;
    pcVar4 = g_PrevKeyboardState;
    for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    }
    g_InputResetFlag = g_MouseButtonFlags;
    g_StoredCameraValue = g_CDemonSetPtr->selected_camera_index;
    return;
  }
  return;
}


// Assembly code:
// 004dbd80: PUSH ESI
//   Label: core_game.cpp_CGame_playerControls_FUN_004dbd80
// 004dbd81: PUSH EBP
// 004dbd82: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004dbd86: CMP dword ptr [0x02d828d0],0x0
//   XREF to: 02d828d0 (READ)
// 004dbd8d: JNZ 0x004dbda8
//   XREF to: 004dbda8 (CONDITIONAL_JUMP)
// 004dbd8f: CMP dword ptr [ESI + 0x1fc],0x0
// 004dbd96: JNZ 0x004dbda5
//   XREF to: 004dbda5 (CONDITIONAL_JUMP)
// 004dbd98: CMP dword ptr [ESI + 0x238],0x0
// 004dbd9f: JZ 0x004dbe0d
//   XREF to: 004dbe0d (CONDITIONAL_JUMP)
// 004dbda5: POP EBP
//   Label: LAB_004dbda5
// 004dbda6: POP ESI
// 004dbda7: RET
// 004dbda8: PUSH ESI
//   Label: LAB_004dbda8
// 004dbda9: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 004dbdae: ADD ESP,0x4
// 004dbdb1: POP EBP
// 004dbdb2: POP ESI
// 004dbdb3: RET
// 004dbdb4: PUSH EDX
//   Label: LAB_004dbdb4
// 004dbdb5: PUSH ESI
// 004dbdb6: CALL core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
//   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)
// 004dbdbb: ADD ESP,0x8
//   Label: LAB_004dbdbb
// 004dbdbe: MOV ECX,0x258
//   Label: LAB_004dbdbe
// 004dbdc3: MOV ESI,0x2d03e98
//   XREF to: 02d03e98 (DATA)
// 004dbdc8: MOV EDI,0x2d82670
//   XREF to: 02d82670 (DATA)
// 004dbdcd: PUSH EDI
//   XREF to: 02d82670 (DATA)
// 004dbdce: MOV EAX,ECX
// 004dbdd0: SHR ECX,0x2
// 004dbdd3: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d82670 (WRITE)
//   XREF to: 02d82674 (WRITE)
//   XREF to: 02d03e98 (READ)
//   XREF to: 02d03e9c (READ)
// 004dbdd5: MOV CL,AL
// 004dbdd7: AND CL,0x3
// 004dbdda: MOVSB.REP ES:EDI,ESI
//   XREF to: 02d82670 (WRITE)
//   XREF to: 02d82674 (WRITE)
//   XREF to: 02d03e98 (READ)
//   XREF to: 02d03e9c (READ)
// 004dbddc: POP EDI
// 004dbddd: MOV EAX,[0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004dbde2: MOV [0x02d828c8],EAX
//   XREF to: 02d828c8 (WRITE)
// 004dbde7: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dbdec: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004dbdf2: MOV [0x02d828cc],EAX
//   XREF to: 02d828cc (WRITE)
// 004dbdf7: POP EDI
// 004dbdf8: POP EBP
// 004dbdf9: POP ESI
// 004dbdfa: RET
// 004dbdfb: PUSH EDX
//   Label: LAB_004dbdfb
// 004dbdfc: PUSH ESI
// 004dbdfd: CALL core_game.cpp_CallToJoystickStuff_FUN_004dc230
//   XREF to: 004dc230 (UNCONDITIONAL_CALL)
// 004dbe02: JMP 0x004dbdbb
//   XREF to: 004dbdbb (UNCONDITIONAL_JUMP)
// 004dbe04: PUSH EDX
//   Label: LAB_004dbe04
// 004dbe05: PUSH ESI
// 004dbe06: CALL core_game.cpp_SettingCursorPos_FUN_004dccc0
//   XREF to: 004dccc0 (UNCONDITIONAL_CALL)
// 004dbe0b: JMP 0x004dbdbb
//   XREF to: 004dbdbb (UNCONDITIONAL_JUMP)
// 004dbe0d: PUSH EDI
//   Label: LAB_004dbe0d
// 004dbe0e: MOV EDI,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004dbe14: PUSH EDI
//   XREF to: 02f7c740 (DATA)
// 004dbe15: CALL core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
//   XREF to: 005438c0 (UNCONDITIONAL_CALL)
// 004dbe1a: MOV EDX,EAX
// 004dbe1c: MOV EAX,dword ptr [ESI + 0xbc]
// 004dbe22: ADD ESP,0x4
// 004dbe25: CMP EAX,0x1
// 004dbe28: JNC 0x004dbe30
//   XREF to: 004dbe30 (CONDITIONAL_JUMP)
// 004dbe2a: TEST EAX,EAX
// 004dbe2c: JZ 0x004dbdb4
//   XREF to: 004dbdb4 (CONDITIONAL_JUMP)
// 004dbe2e: JMP 0x004dbe37
//   XREF to: 004dbe37 (UNCONDITIONAL_JUMP)
// 004dbe30: JBE 0x004dbe04
//   Label: LAB_004dbe30
//   XREF to: 004dbe04 (CONDITIONAL_JUMP)
// 004dbe32: CMP EAX,0x2
// 004dbe35: JZ 0x004dbdfb
//   XREF to: 004dbdfb (CONDITIONAL_JUMP)
// 004dbe37: MOV EBP,0x62b835
//   Label: LAB_004dbe37
//   XREF to: 0062b835 (DATA)
// 004dbe3c: MOV EAX,0x728
// 004dbe41: PUSH 0x62b846
//   XREF to: 0062b846 (DATA)
// 004dbe46: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004dbe4c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004dbe51: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004dbe56: ADD ESP,0x4
// 004dbe59: JMP 0x004dbdbe
//   XREF to: 004dbdbe (UNCONDITIONAL_JUMP)
