// Name: support_trisock.cpp_CSocket_dtor_FUN_00548ee0
// Address: 00548ee0
// Address Range: [[00548ee0, 00548ef1]]
// Convention: __cdecl
// Signature: CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_00548ee0(CSocket *this_ptr,uint flags)

#include "nocturne.h"

CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_00548ee0(CSocket *this_ptr,uint flags)

{
  support_trisock_cpp_CSocket_closeSocket_FUN_00549110(this_ptr);
  return this_ptr;
}
