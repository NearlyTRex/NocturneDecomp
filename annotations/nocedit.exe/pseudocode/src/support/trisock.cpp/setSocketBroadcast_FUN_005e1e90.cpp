// Name: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
// Address: 005e1e90
// Address Range: [[005e1e90, 005e1eb4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_setSocketBroadcast_FUN_005e1e90(_SOCKET *socket_handle,int broadcast_flag)

#include "nocturne.h"

int __cdecl support_trisock_cpp_setSocketBroadcast_FUN_005e1e90(_SOCKET *socket_handle,int broadcast_flag)

{
  int iVar1;
  
  iVar1 = setsockopt(*socket_handle,0xffff,0x20,(char *)&broadcast_flag,4);
  return (uint)(iVar1 == 0);
}
