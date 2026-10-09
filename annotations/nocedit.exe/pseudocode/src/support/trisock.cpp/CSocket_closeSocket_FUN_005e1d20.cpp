// Name: support_trisock.cpp_CSocket_closeSocket_FUN_005e1d20
// Address: 005e1d20
// Address Range: [[005e1d20, 005e1d52]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_005e1d20(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_005e1d20(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_005e1b70(this_ptr);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = closesocket(this_ptr->handle);
  this_ptr->handle = 0xffffffff;
  return (uint)(iVar1 == 0);
}
