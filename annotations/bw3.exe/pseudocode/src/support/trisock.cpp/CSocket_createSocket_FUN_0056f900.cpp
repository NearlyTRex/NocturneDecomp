// Name: support_trisock.cpp_CSocket_createSocket_FUN_0056f900
// Address: 0056f900
// Address Range: [[0056f900, 0056f927]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0056f900(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0056f900(CSocket *this_ptr)

{
  int iVar1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
  iVar1 = socket(2,1,0);
  *(int *)this_ptr = iVar1;
  return (uint)(iVar1 != -1);
}
