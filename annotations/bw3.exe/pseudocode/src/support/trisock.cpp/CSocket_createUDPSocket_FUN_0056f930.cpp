// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930
// Address: 0056f930
// Address Range: [[0056f930, 0056f957]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket *this_ptr)

{
  int iVar1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
  iVar1 = socket(2,2,0);
  *(int *)this_ptr = iVar1;
  return (uint)(iVar1 != -1);
}
