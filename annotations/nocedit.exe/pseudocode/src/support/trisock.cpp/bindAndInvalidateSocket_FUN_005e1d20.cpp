// Name: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
// Address: 005e1d20
// Address Range: [[005e1d20, 005e1d52]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20(SSocketContext * socket_ctx)
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_0053f830 (0053f830) at 0053f849 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fbe2 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_bindSocketWrapper_FUN_005e1af0 (005e1af0) at 005e1af6 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_createSocket_FUN_005e1b10 (005e1b10) at 005e1b16 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_createUDPSocket_FUN_005e1b40 (005e1b40) at 005e1b46 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_closesocket
//   support_trisock.cpp_isSocketValid_FUN_005e1b70

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(SSocketContext *socket_ctx)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_isSocketValid_FUN_005e1b70(socket_ctx);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = crt_wsock32_c_closesocket(socket_ctx->socket);
  socket_ctx->socket = 0xffffffff;
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 005e1d20: PUSH EBX
//   Label: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
// 005e1d21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1d25: PUSH EBX
// 005e1d26: CALL support_trisock.cpp_isSocketValid_FUN_005e1b70
//   XREF to: 005e1b70 (UNCONDITIONAL_CALL)
// 005e1d2b: ADD ESP,0x4
// 005e1d2e: TEST EAX,EAX
// 005e1d30: JNZ 0x005e1d39
//   XREF to: 005e1d39 (CONDITIONAL_JUMP)
// 005e1d32: MOV EAX,0x1
// 005e1d37: POP EBX
// 005e1d38: RET
// 005e1d39: MOV EDX,dword ptr [EBX]
//   Label: LAB_005e1d39
// 005e1d3b: PUSH EDX
// 005e1d3c: CALL crt_wsock32.c_closesocket
//   XREF to: 00610efe (UNCONDITIONAL_CALL)
// 005e1d41: TEST EAX,EAX
// 005e1d43: SETZ AL
// 005e1d46: AND EAX,0xff
// 005e1d4b: MOV dword ptr [EBX],0xffffffff
// 005e1d51: POP EBX
// 005e1d52: RET
