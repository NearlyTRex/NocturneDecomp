// Name: support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490
// Address: 00579490
// Address Range: [[00579490, 005794c4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket *this_ptr,int blocking_mode)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket *this_ptr,int blocking_mode)

{
  int iVar1;
  uint local_4;
  
  local_4 = (uint)(blocking_mode == 0);
  iVar1 = ioctlsocket(this_ptr->handle,-0x7ffb9982,&local_4);
  return (uint)(iVar1 == 0);
}
