// Name: support_trisock.cpp_CSocket_sendSocketData_FUN_005e1ca0
// Address: 005e1ca0
// MANUAL RECONSTRUCTION
// Address Range: [[005e1ca0, 005e1d1a] [0060e3af, 0060e3d1]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_005e1ca0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_005e1ca0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  int iVar2;
  SOCKADDR_IN local_2c;

  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = send(this_ptr->handle,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,&local_2c);
  iVar2 = sendto(this_ptr->handle,buffer,length,0,(SOCKADDR *)&local_2c,0x10);
  return iVar2;
}
