// Name: support_trisock.cpp_CSocket_isSocketValid_FUN_005e1b70
// Address: 005e1b70
// Address Range: [[005e1b70, 005e1b7f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_005e1b70(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_005e1b70(CSocket *this_ptr)

{
  return (uint)(this_ptr->handle != 0xffffffff);
}
