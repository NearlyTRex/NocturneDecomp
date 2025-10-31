// Name: core_netgame.cpp_CNetGame_FUN_0053f830
// Address: 0053f830
// Address Range: [[0053f830, 0053f855]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_0053f830()
// Cross-references:
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087b1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   support_trisock.cpp_cleanupWinsock_FUN_005e1ee0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_0053f830(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_FUN_0053f830(void)

{
  CNetGame *in_stack_00000004;
  int in_stack_00000008;
  WORD in_stack_0000000c;
  LPWSADATA in_stack_00000010;
  
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20
            ((SSocketContext *)(in_stack_00000008 + 0x170));
  support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(in_stack_0000000c,in_stack_00000010);
  return;
}


// Assembly code:
// 0053f830: PUSH 0x0
//   Label: core_netgame.cpp_CNetGame_FUN_0053f830
// 0053f832: MOV EDX,dword ptr [ESP + 0x8]
// 0053f836: PUSH EDX
// 0053f837: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053f83c: ADD ESP,0x8
// 0053f83f: MOV EAX,dword ptr [ESP + 0x4]
// 0053f843: ADD EAX,0x170
// 0053f848: PUSH EAX
// 0053f849: CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   XREF to: 005e1d20 (UNCONDITIONAL_CALL)
// 0053f84e: ADD ESP,0x4
// 0053f851: JMP 0x005e1ee0
//   XREF to: 005e1ee0 (UNCONDITIONAL_CALL)
