// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
// Address: 005438c0
// Address Range: [[005438c0, 0054392a]]
// Convention: __cdecl
// Signature: void * * core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbe15 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 (004dce70) at 004dce7b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dfbe
//   TerminatedCString s_CNetGame_getMyControls_I_0063dfd2
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void ** __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr)

{
  if (this_ptr->connection_type != 0) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0xa0f;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::getMyControls - I'm not in the player list!");
    }
    return (void **)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x14);
  }
  return (void **)g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c;
}


// Assembly code:
// 005438c0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
// 005438c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005438c5: CMP dword ptr [EBX],0x0
// 005438c8: JZ 0x005438ef
//   XREF to: 005438ef (CONDITIONAL_JUMP)
// 005438ca: CMP dword ptr [EBX + 0x114],0x0
// 005438d1: JL 0x00543902
//   XREF to: 00543902 (CONDITIONAL_JUMP)
// 005438d3: MOV EAX,dword ptr [EBX + 0x114]
//   Label: LAB_005438d3
// 005438d9: SHL EAX,0x3
// 005438dc: MOV EDX,EAX
// 005438de: SHL EAX,0x4
// 005438e1: SUB EAX,EDX
// 005438e3: MOV EDX,EAX
// 005438e5: LEA EAX,[EBX + 0x20]
// 005438e8: ADD EAX,EDX
// 005438ea: ADD EAX,0x4c
// 005438ed: POP EBX
// 005438ee: RET
// 005438ef: MOV EAX,[0x02db87d0]
//   Label: LAB_005438ef
//   XREF to: 02db87d0 (READ)
// 005438f4: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005438fb: ADD EAX,0xbe2c
// 00543900: POP EBX
// 00543901: RET
// 00543902: PUSH EDI
//   Label: LAB_00543902
// 00543903: PUSH ESI
// 00543904: MOV ESI,0x63dfbe
//   XREF to: 0063dfbe (DATA)
// 00543909: MOV EDI,0xa0f
// 0054390e: PUSH 0x63dfd2
//   XREF to: 0063dfd2 (DATA)
// 00543913: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00543919: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054391f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543924: ADD ESP,0x4
// 00543927: POP ESI
// 00543928: POP EDI
// 00543929: JMP 0x005438d3
//   XREF to: 005438d3 (UNCONDITIONAL_JUMP)
