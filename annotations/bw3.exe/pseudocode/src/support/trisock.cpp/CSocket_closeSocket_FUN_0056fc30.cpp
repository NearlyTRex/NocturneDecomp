// Name: support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
// Address: 0056fc30
// Address Range: [[0056fc30, 0056fc62]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(this_ptr);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = closesocket(*(_SOCKET *)this_ptr);
  *(uint *)this_ptr = 0xffffffff;
  return (uint)(iVar1 == 0);
}
