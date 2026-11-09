// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060
// Address: 00579060
// Address Range: [[00579060, 00579087]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00579060(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00579060(CSocket *this_ptr)

{
  int iVar1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_00579360(this_ptr);
  iVar1 = socket(2,2,0);
  *(int *)this_ptr = iVar1;
  return (uint)(iVar1 != -1);
}
