// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940
// Address: 0059c940
// Address Range: [[0059c940, 0059c967]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket *this_ptr)

{
  int iVar1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(this_ptr);
  iVar1 = socket(2,2,0);
  *(int *)this_ptr = iVar1;
  return (uint)(iVar1 != -1);
}
