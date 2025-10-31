// Name: support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
// Address: 005e1af0
// Address Range: [[005e1af0, 005e1b01]]
// Convention: __cdecl
// Signature: SSocketContext * support_trisock.cpp_bindSocketWrapper_FUN_005e1af0(SSocketContext * socket_ctx)
// Cross-references:
//   core_netgame.cpp_CNetGame_dtor_FUN_0053f760 (0053f760) at 0053f76c [UNCONDITIONAL_CALL]
// Function calls:
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20

#include "nocturne.h"

SSocketContext * __cdecl
support_trisock_cpp_bindSocketWrapper_FUN_005e1af0(SSocketContext *socket_ctx)

{
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  return socket_ctx;
}


// Assembly code:
// 005e1af0: PUSH EBX
//   Label: support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
// 005e1af1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1af5: PUSH EBX
// 005e1af6: CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   XREF to: 005e1d20 (UNCONDITIONAL_CALL)
// 005e1afb: ADD ESP,0x4
// 005e1afe: MOV EAX,EBX
// 005e1b00: POP EBX
// 005e1b01: RET
