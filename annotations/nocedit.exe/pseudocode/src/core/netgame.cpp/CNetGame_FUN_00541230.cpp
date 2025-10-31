// Name: core_netgame.cpp_CNetGame_FUN_00541230
// Address: 00541230
// Address Range: [[00541230, 00541255]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00541230()
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_00543930 (00543930) at 00543957 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540863 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 (00541ff0) at 00542333 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_send_FUN_005411c0 (005411c0) at 005411f1 [UNCONDITIONAL_CALL]
// Function calls:
//   support_trisock.cpp_performSocketOperation_FUN_005e1ca0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_00541230(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_netgame_cpp_CNetGame_FUN_00541230(void)

{
  int in_stack_00000004;
  SNetworkAddr *in_stack_00000008;
  int *in_stack_0000000c;
  
  support_trisock_cpp_performSocketOperation_FUN_005e1ca0
            ((SSocketContext *)(in_stack_00000004 + 0x170),(char *)(in_stack_0000000c + 1),
             *in_stack_0000000c + -4,in_stack_00000008);
  return;
}


// Assembly code:
// 00541230: MOV EDX,dword ptr [ESP + 0xc]
//   Label: core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: Stack[0xc] (READ)
// 00541234: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00541238: MOV EAX,dword ptr [EDX]
// 0054123a: PUSH ECX
// 0054123b: SUB EAX,0x4
// 0054123e: PUSH EAX
// 0054123f: LEA EAX,[EDX + 0x4]
// 00541242: PUSH EAX
// 00541243: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00541247: ADD EAX,0x170
// 0054124c: PUSH EAX
// 0054124d: CALL support_trisock.cpp_performSocketOperation_FUN_005e1ca0
//   XREF to: 005e1ca0 (UNCONDITIONAL_CALL)
// 00541252: ADD ESP,0x10
// 00541255: RET
