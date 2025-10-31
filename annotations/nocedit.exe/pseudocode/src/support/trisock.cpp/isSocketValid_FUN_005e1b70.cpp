// Name: support_trisock.cpp_isSocketValid_FUN_005e1b70
// Address: 005e1b70
// Address Range: [[005e1b70, 005e1b7f]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_isSocketValid_FUN_005e1b70(SSocketContext * socket_ctx)
// Cross-references:
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 (005405b0) at 005405f2 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00540550 (00540550) at 0054055d [UNCONDITIONAL_CALL]
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 (005e1d20) at 005e1d26 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl support_trisock_cpp_isSocketValid_FUN_005e1b70(SSocketContext *socket_ctx)

{
  return (uint)(socket_ctx->socket != 0xffffffff);
}


// Assembly code:
// 005e1b70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_isSocketValid_FUN_005e1b70
//   XREF to: Stack[0x4] (READ)
// 005e1b74: CMP dword ptr [EAX],-0x1
// 005e1b77: SETNZ AL
// 005e1b7a: AND EAX,0xff
// 005e1b7f: RET
