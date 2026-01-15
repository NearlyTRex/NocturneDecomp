// Name: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
// Address Range: [[005e1b80, 005e1bc5]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_bindSocket_FUN_005e1b80(uint16_t port, SOCKET * socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(uint16_t port,SOCKET *socket_handle)

{
  int iVar1;
  ushort in_stack_00000006;
  SOCKADDR local_10;
  
  local_10.sa_family = 2;
  local_10.sa_data._0_2_ = crt_wsock32_c_htons((ushort)socket_handle);
  local_10.sa_data[2] = '\0';
  local_10.sa_data[3] = '\0';
  local_10.sa_data[4] = '\0';
  local_10.sa_data[5] = '\0';
  iVar1 = crt_wsock32_c_bind(*_port,&local_10,0x10);
  return (uint)(iVar1 == 0);
}
