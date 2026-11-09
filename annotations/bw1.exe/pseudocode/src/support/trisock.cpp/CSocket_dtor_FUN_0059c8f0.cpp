// Name: support_trisock.cpp_CSocket_dtor_FUN_0059c8f0
// Address: 0059c8f0
// Address Range: [[0059c8f0, 0059c901]]
// Convention: __cdecl
// Signature: CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0059c8f0(CSocket *this_ptr,uint flags)

#include "nocturne.h"

CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0059c8f0(CSocket *this_ptr,uint flags)

{
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(this_ptr);
  return this_ptr;
}
