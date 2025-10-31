// Name: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
// Address: 005e1ae0
// Address Range: [[005e1ae0, 005e1aea]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_invalidateSocket_FUN_005e1ae0(SSocketContext * socket_ctx)
// Cross-references:
//   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0 (0053f6d0) at 0053f6ef [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl support_trisock_cpp_invalidateSocket_FUN_005e1ae0(SSocketContext *socket_ctx)

{
  socket_ctx->socket = 0xffffffff;
  return;
}


// Assembly code:
// 005e1ae0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
//   XREF to: Stack[0x4] (READ)
// 005e1ae4: MOV dword ptr [EAX],0xffffffff
// 005e1aea: RET
