// Name: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
// Address Range: [[005e1df0, 005e1e42]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_getSocketName_FUN_005e1df0(SOCKET * socket_handle, SNetworkAddr * param_2)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_getSocketName_FUN_005e1df0(SOCKET *socket_handle,SNetworkAddr *param_2)

{
  int iVar1;
  SOCKADDR_IN *pSVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  uint *in_stack_0000001c;
  int local_4;
  
  bVar3 = 0;
  local_4 = 0x10;
  iVar1 = crt_wsock32_c_getsockname(*socket_handle,(SOCKADDR *)&stack0xffffffe4,&local_4);
  if (iVar1 != 0) {
    return 0;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&socket_handle,(SOCKADDR *)&stack0xfffffff4);
  *in_stack_0000001c = *(uint *)pSVar2;
  in_stack_0000001c[(uint)bVar3 * -2 + 1] = *(uint *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
