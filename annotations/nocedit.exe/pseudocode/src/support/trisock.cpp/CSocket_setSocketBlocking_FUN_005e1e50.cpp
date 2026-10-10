// Name: support_trisock.cpp_CSocket_setSocketBlocking_FUN_005e1e50
// Address: 005e1e50
// Address Range: [[005e1e50, 005e1e84]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_005e1e50(CSocket *this_ptr,int blocking_mode)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_005e1e50(CSocket *this_ptr,int blocking_mode)

{
  int iVar1;
  uint local_4;
  
  local_4 = (uint)(blocking_mode == 0);
  iVar1 = ioctlsocket(this_ptr->handle,-0x7ffb9982,&local_4);
  return (uint)(iVar1 == 0);
}
