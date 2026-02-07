// Name: support_trisock.cpp_cleanupWinsock_FUN_005e1ee0
// Address: 005e1ee0
// Address Range: [[005e1ee0, 005e1ee4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(WORD wVersionRequested,LPWSADATA lpWSAData)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(WORD wVersionRequested,LPWSADATA lpWSAData)

{
  int iVar1;
  
  iVar1 = WSACleanup();
  return iVar1;
}
