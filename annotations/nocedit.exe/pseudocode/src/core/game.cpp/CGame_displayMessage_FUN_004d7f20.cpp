// Name: core_game.cpp_CGame_displayMessage_FUN_004d7f20
// Address: 004d7f20
// Address Range: [[004d7f20, 004d7f75]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
// Cross-references:
//   core_door.cpp_CDoor_getMoveType_FUN_00481070 (00481070) at 00481116 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df960 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd9d0 (004dd9d0) at 004dda55 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd2c2 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe196 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 (005013d0) at 00501489 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff9cd [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_00542370 (00542370) at 00542429 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c13a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *this_ptr,char *message,float duration)

{
  char cVar1;
  char *pcVar2;
  
  if (message == (char *)0x0) {
    this_ptr->message_timer = 0.0;
    return;
  }
  if (*message != '\0') {
    pcVar2 = this_ptr->message_text;
    this_ptr->message_timer = duration;
    do {
      cVar1 = *message;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = message[1];
      message = message + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    return;
  }
  this_ptr->message_timer = 0.0;
  return;
}


// Assembly code:
// 004d7f20: PUSH ESI
//   Label: core_game.cpp_CGame_displayMessage_FUN_004d7f20
// 004d7f21: PUSH EDI
// 004d7f22: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d7f26: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004d7f2a: TEST ESI,ESI
// 004d7f2c: JZ 0x004d7f40
//   XREF to: 004d7f40 (CONDITIONAL_JUMP)
// 004d7f2e: CMP byte ptr [ESI],0x0
// 004d7f31: JNZ 0x004d7f49
//   XREF to: 004d7f49 (CONDITIONAL_JUMP)
// 004d7f33: MOV dword ptr [EDI + 0x384],0x0
// 004d7f3d: POP EDI
// 004d7f3e: POP ESI
// 004d7f3f: RET
// 004d7f40: MOV dword ptr [EDI + 0x384],ESI
//   Label: LAB_004d7f40
// 004d7f46: POP EDI
// 004d7f47: POP ESI
// 004d7f48: RET
// 004d7f49: ADD EDI,0x284
//   Label: LAB_004d7f49
// 004d7f4f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004d7f53: MOV dword ptr [EDI + 0x100],EAX
// 004d7f59: PUSH EDI
// 004d7f5a: MOV AL,byte ptr [ESI]
//   Label: LAB_004d7f5a
// 004d7f5c: MOV byte ptr [EDI],AL
// 004d7f5e: CMP AL,0x0
// 004d7f60: JZ 0x004d7f72
//   XREF to: 004d7f72 (CONDITIONAL_JUMP)
// 004d7f62: MOV AL,byte ptr [ESI + 0x1]
// 004d7f65: ADD ESI,0x2
// 004d7f68: MOV byte ptr [EDI + 0x1],AL
// 004d7f6b: ADD EDI,0x2
// 004d7f6e: CMP AL,0x0
// 004d7f70: JNZ 0x004d7f5a
//   XREF to: 004d7f5a (CONDITIONAL_JUMP)
// 004d7f72: POP EDI
//   Label: LAB_004d7f72
// 004d7f73: POP EDI
// 004d7f74: POP ESI
// 004d7f75: RET
