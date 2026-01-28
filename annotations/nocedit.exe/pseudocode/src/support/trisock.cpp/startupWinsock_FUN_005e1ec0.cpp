// Name: support_trisock.cpp_startupWinsock_FUN_005e1ec0
// Address: 005e1ec0
// Address Range: [[005e1ec0, 005e1ed9]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_startupWinsock_FUN_005e1ec0(void)

#include "nocturne.h"

int __cdecl support_trisock_cpp_startupWinsock_FUN_005e1ec0(void)

{
  int iVar1;
  WSADATA WStack_190;
  
  iVar1 = crt_wsock32_c_WSAStartup(0x101,&WStack_190);
  return iVar1;
}
