// Name: support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
// Address: 0056f960
// Address Range: [[0056f960, 0056f96f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(CSocket *this_ptr)

{
  return (uint)(this_ptr->handle != 0xffffffff);
}
