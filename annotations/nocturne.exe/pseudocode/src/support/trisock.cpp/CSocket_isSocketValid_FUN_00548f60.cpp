// Name: support_trisock.cpp_CSocket_isSocketValid_FUN_00548f60
// Address: 00548f60
// Address Range: [[00548f60, 00548f6f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_00548f60(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_00548f60(CSocket *this_ptr)

{
  return (uint)(this_ptr->handle != 0xffffffff);
}
