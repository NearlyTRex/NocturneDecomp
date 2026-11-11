// Name: support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70
// Address: 0059cd70
// Address Range: [[0059cd70, 0059cda4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket *this_ptr,int blocking_mode)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket *this_ptr,int blocking_mode)

{
  int iVar1;
  uint local_4;
  
  local_4 = (uint)(blocking_mode == 0);
  iVar1 = ioctlsocket(this_ptr->handle,-0x7ffb9982,&local_4);
  return (uint)(iVar1 == 0);
}
