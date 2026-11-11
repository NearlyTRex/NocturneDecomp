// Name: support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
// Address: 0059cc40
// Address Range: [[0059cc40, 0059cc72]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(this_ptr);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = closesocket(this_ptr->handle);
  this_ptr->handle = 0xffffffff;
  return (uint)(iVar1 == 0);
}
