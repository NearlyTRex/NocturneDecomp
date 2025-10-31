// Name: support_trisock.cpp_createUDPSocket_FUN_005e1b40
// Address: 005e1b40
// Address Range: [[005e1b40, 005e1b67]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_createUDPSocket_FUN_005e1b40(SSocketContext * socket_ctx)
// Cross-references:
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fbeb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_shutdown
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20

#include "nocturne.h"

int __cdecl support_trisock_cpp_createUDPSocket_FUN_005e1b40(SSocketContext *socket_ctx)

{
  SOCKET SVar1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  SVar1 = crt_wsock32_c_shutdown(2,2);
  socket_ctx->socket = SVar1;
  return (uint)(SVar1 != 0xffffffff);
}


// Assembly code:
// 005e1b40: PUSH EBX
//   Label: support_trisock.cpp_createUDPSocket_FUN_005e1b40
// 005e1b41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1b45: PUSH EBX
// 005e1b46: CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   XREF to: 005e1d20 (UNCONDITIONAL_CALL)
// 005e1b4b: ADD ESP,0x4
// 005e1b4e: PUSH 0x0
// 005e1b50: PUSH 0x2
// 005e1b52: PUSH 0x2
// 005e1b54: CALL crt_wsock32.c_shutdown
//   XREF to: 00610f28 (UNCONDITIONAL_CALL)
// 005e1b59: MOV dword ptr [EBX],EAX
// 005e1b5b: CMP EAX,-0x1
// 005e1b5e: SETNZ AL
// 005e1b61: AND EAX,0xff
// 005e1b66: POP EBX
// 005e1b67: RET
