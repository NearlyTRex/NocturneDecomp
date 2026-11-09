// Name: support_trisock.cpp_CSocket_dtor_FUN_0056f8e0
// Address: 0056f8e0
// Address Range: [[0056f8e0, 0056f8f1]]
// Convention: __cdecl
// Signature: CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0056f8e0(CSocket *this_ptr,uint flags)

#include "nocturne.h"

CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0056f8e0(CSocket *this_ptr,uint flags)

{
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
  return this_ptr;
}
