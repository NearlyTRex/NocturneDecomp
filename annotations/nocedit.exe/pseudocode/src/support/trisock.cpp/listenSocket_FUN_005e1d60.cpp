// Name: support_trisock.cpp_listenSocket_FUN_005e1d60
// Address: 005e1d60
// Address Range: [[005e1d60, 005e1d78]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_listenSocket_FUN_005e1d60(SOCKET * socket_handle)
// Function calls:
//   crt_wsock32.c_listen

#include "nocturne.h"

int __cdecl support_trisock_cpp_listenSocket_FUN_005e1d60(SOCKET *socket_handle)

{
  int iVar1;
  
  iVar1 = crt_wsock32_c_listen(*socket_handle,1);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 005e1d60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_listenSocket_FUN_005e1d60
//   XREF to: Stack[0x4] (READ)
// 005e1d64: PUSH 0x1
// 005e1d66: MOV EDX,dword ptr [EAX]
// 005e1d68: PUSH EDX
// 005e1d69: CALL crt_wsock32.c_listen
//   XREF to: 00610ef8 (UNCONDITIONAL_CALL)
// 005e1d6e: TEST EAX,EAX
// 005e1d70: SETZ AL
// 005e1d73: AND EAX,0xff
// 005e1d78: RET
