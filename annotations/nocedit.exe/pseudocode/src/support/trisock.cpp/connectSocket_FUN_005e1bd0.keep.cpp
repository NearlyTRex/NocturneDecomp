// Name: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
// MANUAL RECONSTRUCTION
// Address Range: [[005e1bd0, 005e1c12] [00604f7b, 00604f9d]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_connectSocket_FUN_005e1bd0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_connectSocket_FUN_005e1bd0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

{
  int iVar1;
  SOCKADDR_IN local_18;

  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,&local_18);
  iVar1 = connect(*socket_handle,(SOCKADDR *)&local_18,0x10);
  return (uint)(iVar1 == 0);
}
