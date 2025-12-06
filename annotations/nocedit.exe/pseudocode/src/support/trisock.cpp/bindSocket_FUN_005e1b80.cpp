// Name: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
// Address Range: [[005e1b80, 005e1bc5]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_bindSocket_FUN_005e1b80(uint16_t port, SOCKET * socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(uint16_t port,SOCKET *socket_handle)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SOCKET *in_stack_0000000c;
  ushort uStack_6;
  char acStack_4 [4];
  
  uStack_6 = crt_wsock32_c_htons((ushort)socket_handle);
  acStack_4[0] = '\0';
  acStack_4[1] = '\0';
  acStack_4[2] = '\0';
  acStack_4[3] = '\0';
  iVar1 = crt_wsock32_c_bind(*in_stack_0000000c,(SOCKADDR *)&stack0xfffffff8,0x10);
  return (uint)(iVar1 == 0);
}
