// Name: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
// Address Range: [[005e1ca0, 005e1d1a] [0060e3af, 0060e3d1]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_performSocketOperation_FUN_005e1ca0(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_performSocketOperation_FUN_005e1ca0(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  int iVar2;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  SOCKADDR_IN local_2c;
  SOCKADDR_IN local_1c;
  
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = send(*socket_handle,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,&local_2c);
  iVar2 = sendto(*socket_handle,buffer,length,0,(SOCKADDR *)&local_1c,0x10);
  return iVar2;
}
