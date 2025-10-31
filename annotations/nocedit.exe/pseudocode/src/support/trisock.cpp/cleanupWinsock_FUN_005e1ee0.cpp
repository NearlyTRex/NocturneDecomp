// Name: support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
// Address: 005e1ee0
// Address Range: [[005e1ee0, 005e1ee4]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_cleanupWinsock_FUN_005e1ee0(WORD wVersionRequested, LPWSADATA lpWSAData)
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_0053f830 (0053f830) at 0053f851 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(WORD wVersionRequested,LPWSADATA lpWSAData)

{
  int iVar1;
  
  iVar1 = crt_wsock32_c_WSACleanup();
  return iVar1;
}


// Assembly code:
// 005e1ee0: JMP 0x00610ed4
//   Label: support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
//   XREF to: 00610ed4 (UNCONDITIONAL_JUMP)
