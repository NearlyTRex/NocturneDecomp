// Name: support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
// Address: 00579090
// Address Range: [[00579090, 0057909f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(CSocket *this_ptr)

{
  return (uint)(this_ptr->handle != 0xffffffff);
}
