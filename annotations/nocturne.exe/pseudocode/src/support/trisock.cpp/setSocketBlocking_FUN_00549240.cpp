// Name: support_trisock.cpp_setSocketBlocking_FUN_00549240
// Address: 00549240
// Address Range: [[00549240, 00549274]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_setSocketBlocking_FUN_00549240(_SOCKET *socket_handle,int blocking_mode)

#include "nocturne.h"

int __cdecl support_trisock_cpp_setSocketBlocking_FUN_00549240(_SOCKET *socket_handle,int blocking_mode)

{
  int iVar1;
  uint uStack_4;
  
  uStack_4 = (uint)(blocking_mode == 0);
  iVar1 = ioctlsocket(*socket_handle,-0x7ffb9982,&uStack_4);
  return (uint)(iVar1 == 0);
}
