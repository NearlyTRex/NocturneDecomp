// Name: support_trisock.cpp_acceptConnection_FUN_005e1d80
// Address: 005e1d80
// Address Range: [[005e1d80, 005e1de8]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_acceptConnection_FUN_005e1d80(SOCKET * listen_socket, SNetworkAddr * client_addr, SOCKET * new_socket)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_acceptConnection_FUN_005e1d80
          (SOCKET *listen_socket,SNetworkAddr *client_addr,SOCKET *new_socket)

{
  SOCKET SVar1;
  SOCKADDR_IN *pSVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  SOCKET *in_stack_00000018;
  uint local_20;
  int local_8;
  
  bVar3 = 0;
  local_8 = 0x10;
  SVar1 = crt_wsock32_c_accept(*listen_socket,(SOCKADDR *)&local_20,&local_8);
  *in_stack_00000018 = SVar1;
  if (SVar1 == 0xffffffff) {
    return 0;
  }
  if (new_socket == (SOCKET *)0x0) {
    return 1;
  }
  local_20._0_2_ = 0x1dd7;
  local_20._2_1_ = '^';
  local_20._3_1_ = '\0';
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&stack0x00000000,(SOCKADDR *)&stack0xfffffff0);
  *new_socket = *(SOCKET *)pSVar2;
  new_socket[(uint)bVar3 * -2 + 1] = *(SOCKET *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
