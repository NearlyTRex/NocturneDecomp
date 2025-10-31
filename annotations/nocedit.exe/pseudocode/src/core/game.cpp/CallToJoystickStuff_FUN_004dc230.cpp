// Name: core_game.cpp_CallToJoystickStuff_FUN_004dc230
// Address: 004dc230
// Address Range: [[004dc230, 004dc260]]
// Convention: __cdecl
// Signature: void core_game.cpp_CallToJoystickStuff_FUN_004dc230(CGame * this_ptr, int unk1, SPlayerControl * unk)
// Cross-references:
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbdfd [UNCONDITIONAL_CALL]
// Function calls:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_CallToJoystickStuff(undefined4 param_1, undefined4 param_2)
    */

void __cdecl
core_game_cpp_CallToJoystickStuff_FUN_004dc230(CGame *this_ptr,int unk1,SPlayerControl *unk)

{
  core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
  core_game_cpp_KeypressesAndCGame_FUN_004dc3e0((CGame *)unk1,unk);
  return;
}


// Assembly code:
// 004dc230: PUSH EBX
//   Label: core_game.cpp_CallToJoystickStuff_FUN_004dc230
// 004dc231: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004dc235: PUSH EDX
// 004dc236: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 004dc23b: ADD ESP,0x4
// 004dc23e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004dc242: PUSH ECX
// 004dc243: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004dc247: PUSH EBX
// 004dc248: CALL core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
//   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)
// 004dc24d: ADD ESP,0x8
// 004dc250: POP EBX
// 004dc251: LEA EAX,[EAX]
// 004dc257: LEA EDX,[EDX]
// 004dc25d: LEA EAX,[EAX]
// 004dc260: RET
