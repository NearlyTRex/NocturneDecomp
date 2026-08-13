// Name: support_trisock.cpp_startupWinsock_FUN_00549280
// Address: 00549280
// Address Range: [[00549280, 00549299]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_startupWinsock_FUN_00549280(void)

#include "nocturne.h"

int __cdecl support_trisock_cpp_startupWinsock_FUN_00549280(void)

{
  int iVar1;
  WSADATA WStack_190;
  
  iVar1 = WSAStartup(0x101,&WStack_190);
  return iVar1;
}
