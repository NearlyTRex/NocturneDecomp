// Name: support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
// Address: 0059c970
// Address Range: [[0059c970, 0059c97f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(CSocket *this_ptr)

{
  return (uint)(this_ptr->handle != 0xffffffff);
}
