// Name: support_trisock.cpp_CSocket_bindSocket_FUN_0059c980
// Address: 0059c980
// Address Range: [[0059c980, 0059c9c5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_bindSocket_FUN_0059c980(CSocket *this_ptr,ushort port)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_bindSocket_FUN_0059c980(CSocket *this_ptr,ushort port)

{
  int iVar1;
  sockaddr local_10;
  
  local_10.sa_family = 2;
  local_10.sa_data._0_2_ = htons(port);
  local_10.sa_data[2] = '\0';
  local_10.sa_data[3] = '\0';
  local_10.sa_data[4] = '\0';
  local_10.sa_data[5] = '\0';
  iVar1 = bind(*(SOCKET *)this_ptr,&local_10,0x10);
  return (uint)(iVar1 == 0);
}
