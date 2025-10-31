// Name: support_trisock.cpp_createSocket_FUN_005e1b10
// Address: 005e1b10
// Address Range: [[005e1b10, 005e1b37]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_createSocket_FUN_005e1b10(SSocketContext * socket_ctx)
// Function calls:
//   crt_wsock32.c_shutdown
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20

#include "nocturne.h"

int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(SSocketContext *socket_ctx)

{
  SOCKET SVar1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  SVar1 = crt_wsock32_c_shutdown(2,1);
  socket_ctx->socket = SVar1;
  return (uint)(SVar1 != 0xffffffff);
}


// Assembly code:
// 005e1b10: PUSH EBX
//   Label: support_trisock.cpp_createSocket_FUN_005e1b10
// 005e1b11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1b15: PUSH EBX
// 005e1b16: CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   XREF to: 005e1d20 (UNCONDITIONAL_CALL)
// 005e1b1b: ADD ESP,0x4
// 005e1b1e: PUSH 0x0
// 005e1b20: PUSH 0x1
// 005e1b22: PUSH 0x2
// 005e1b24: CALL crt_wsock32.c_shutdown
//   XREF to: 00610f28 (UNCONDITIONAL_CALL)
// 005e1b29: MOV dword ptr [EBX],EAX
// 005e1b2b: CMP EAX,-0x1
// 005e1b2e: SETNZ AL
// 005e1b31: AND EAX,0xff
// 005e1b36: POP EBX
// 005e1b37: RET
