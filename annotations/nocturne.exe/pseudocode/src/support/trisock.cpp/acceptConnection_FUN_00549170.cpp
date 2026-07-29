// Name: support_trisock.cpp_acceptConnection_FUN_00549170
// Address: 00549170
// Address Range: [[00549170, 005491d8]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_acceptConnection_FUN_00549170(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket)

#include "nocturne.h"

int __cdecl support_trisock_cpp_acceptConnection_FUN_00549170(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket)

{
  int iVar1;
  SOCKADDR_IN *pSVar2;
  int *unaff_EDI;
  byte bVar3;
  byte auStack_2c [12];
  byte local_20 [4];
  SNetworkAddr aSStack_1c [2];
  uint local_8;
  
  bVar3 = 0;
  auStack_2c._4_4_ = local_20;
  auStack_2c._8_4_ = &local_8;
  local_8 = 0x10;
  auStack_2c._0_4_ = *listen_socket;
  iVar1 = Ordinal_1();
  *unaff_EDI = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  if (new_socket == (_SOCKET *)0x0) {
    return 1;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_00548d50(aSStack_1c,(SOCKADDR *)auStack_2c);
  *new_socket = *(_SOCKET *)pSVar2;
  new_socket[(uint)bVar3 * -2 + 1] = *(_SOCKET *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
