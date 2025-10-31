// Name: support_trisock.cpp_setSocketBlocking_FUN_005e1e50
// Address: 005e1e50
// Address Range: [[005e1e50, 005e1e84]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_setSocketBlocking_FUN_005e1e50(SOCKET * socket_handle, int blocking_mode)
// Cross-references:
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fbfe [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_ioctlsocket

#include "nocturne.h"

int __cdecl
support_trisock_cpp_setSocketBlocking_FUN_005e1e50(SOCKET *socket_handle,int blocking_mode)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint local_4;
  
  local_4 = (uint)(blocking_mode == 0);
  iVar1 = crt_wsock32_c_ioctlsocket(*socket_handle,-0x7ffb9982,&local_4);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 005e1e50: SUB ESP,0x4
//   Label: support_trisock.cpp_setSocketBlocking_FUN_005e1e50
// 005e1e53: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[0x8] (READ)
// 005e1e58: SETZ AL
// 005e1e5b: AND EAX,0xff
// 005e1e60: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 005e1e63: MOV EAX,ESP
// 005e1e65: PUSH EAX
// 005e1e66: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e1e6a: PUSH 0x8004667e
// 005e1e6f: MOV ECX,dword ptr [EAX]
// 005e1e71: PUSH ECX
// 005e1e72: CALL crt_wsock32.c_ioctlsocket
//   XREF to: 00610ee6 (UNCONDITIONAL_CALL)
// 005e1e77: TEST EAX,EAX
// 005e1e79: SETZ AL
// 005e1e7c: AND EAX,0xff
// 005e1e81: ADD ESP,0x4
// 005e1e84: RET
