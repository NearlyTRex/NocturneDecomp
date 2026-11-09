// Name: support_trisock.cpp_CSocket_closeSocket_FUN_00579360
// Address: 00579360
// Address Range: [[00579360, 00579392]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_00579360(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_00579360(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(this_ptr);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = closesocket(*(_SOCKET *)this_ptr);
  *(uint *)this_ptr = 0xffffffff;
  return (uint)(iVar1 == 0);
}
