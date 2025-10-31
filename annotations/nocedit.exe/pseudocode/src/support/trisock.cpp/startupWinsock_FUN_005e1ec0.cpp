// Name: support_trisock.cpp_startupWinsock_FUN_005e1ec0
// Address: 005e1ec0
// Address Range: [[005e1ec0, 005e1ed9]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_startupWinsock_FUN_005e1ec0(void)
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_0053f780 (0053f780) at 0053f7b0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_WSAStartup

#include "nocturne.h"

int __cdecl support_trisock_cpp_startupWinsock_FUN_005e1ec0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  WSADATA WStack_190;
  
  iVar1 = crt_wsock32_c_WSAStartup(0x101,&WStack_190);
  return iVar1;
}


// Assembly code:
// 005e1ec0: SUB ESP,0x190
//   Label: support_trisock.cpp_startupWinsock_FUN_005e1ec0
// 005e1ec6: MOV EAX,ESP
// 005e1ec8: PUSH EAX
// 005e1ec9: PUSH 0x101
// 005e1ece: CALL crt_wsock32.c_WSAStartup
//   XREF to: 00610eda (UNCONDITIONAL_CALL)
// 005e1ed3: ADD ESP,0x190
// 005e1ed9: RET
