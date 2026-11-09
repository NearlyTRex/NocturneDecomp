// Name: support_trisock.cpp_startupWinsock_FUN_00579500
// Address: 00579500
// Address Range: [[00579500, 00579519]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_startupWinsock_FUN_00579500(void)

#include "nocturne.h"

int __cdecl support_trisock_cpp_startupWinsock_FUN_00579500(void)

{
  int iVar1;
  WSADATA WStack_190;
  
  iVar1 = WSAStartup(0x101,&WStack_190);
  return iVar1;
}
